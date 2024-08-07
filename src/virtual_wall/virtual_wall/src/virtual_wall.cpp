#include <pluginlib/class_list_macros.hpp>
#include <virtual_wall/virtual_wall.hpp>
// #include <custom_nav2_costmap_plugin/gradient_layer.hpp>

#include <tf2_geometry_msgs/tf2_geometry_msgs.hpp>
#include "nav2_costmap_2d/costmap_math.hpp"

PLUGINLIB_EXPORT_CLASS(virtual_wall::VirtualWall, nav2_costmap_2d::Layer)

using namespace std;

namespace virtual_wall
{
    VirtualWall::VirtualWall()
    {
        cout << "VirtualWall()" << endl;
        wallmax_x_ = 0.0;
        wallmax_y_ = 0.0;
        wallmin_x_ = 0.0;
        wallmin_y_ = 0.0;
    }
    VirtualWall::~VirtualWall()
    {
        cout << "~VirtualWall()" << endl;
    }

    void VirtualWall::onInitialize()
    {
        RCLCPP_INFO(rclcpp::get_logger("VirtualWall"), "Initializing VirtualWall plugin");

        // Lấy shared_ptr đến node
        auto node = node_.lock();
        if (!node)
        {
            throw std::runtime_error("Failed to lock node in VirtualWall plugin");
        }

        // Khai báo và lấy giá trị tham số
        declareParameter("enabled", rclcpp::ParameterValue(true));
        node->get_parameter(name_ + "." + "enabled", enabled_);

        matchSize();
        current_ = true;
        enabled_ = true;

        // Tạo callback group
        callback_group_ = node->create_callback_group(rclcpp::CallbackGroupType::MutuallyExclusive);
        auto options = rclcpp::SubscriptionOptions();
        options.callback_group = callback_group_;

        // Đăng ký các subscribers
        add_wall_sub_ = node->create_subscription<geometry_msgs::msg::PointStamped>(
            "/clicked_point", rclcpp::QoS(10),
            std::bind(&VirtualWall::AddWallCallback, this, std::placeholders::_1),
            options);

        delete_wall_sub_ = node->create_subscription<std_msgs::msg::Int32>(
            "/delete_wall", rclcpp::QoS(10),
            std::bind(&VirtualWall::DeleteWallCallback, this, std::placeholders::_1),
            options);

        // Tạo các publishers
        wall_list_pub_ = node->create_publisher<std_msgs::msg::Int32>("/virtual_wall_list", rclcpp::QoS(10));
        wall_maker_pub_ = node->create_publisher<visualization_msgs::msg::Marker>("virtual_wall_vis", rclcpp::QoS(10));

        // Cập nhật global_frame_ nếu cần
        global_frame_ = layered_costmap_->getGlobalFrameID();

        RCLCPP_INFO(rclcpp::get_logger("VirtualWall"), "VirtualWall plugin initialized");
    }

    void VirtualWall::matchSize()
    {
        std::lock_guard<std::recursive_mutex> lock(data_access_);
        nav2_costmap_2d::Costmap2D *master = layered_costmap_->getCostmap();
        resolution_ = master->getResolution();
        global_frame_ = layered_costmap_->getGlobalFrameID();
        RCLCPP_INFO(rclcpp::get_logger("rclcpp"), "global_frame_: %s", global_frame_.c_str());
        map_frame_ = "map";

        RCLCPP_INFO(rclcpp::get_logger("VirtualWall"), "Match Size Map Start !!!!!!!!!!!!!1");

    }

    void VirtualWall::updateBounds(double robot_x, double robot_y, double robot_yaw, double *min_x, double *min_y,
                                   double *max_x, double *max_y)
    {
        RCLCPP_INFO(rclcpp::get_logger("VirtualWall"), "Before update: min_x: %f, min_y: %f, max_x: %f, max_y: %f", *min_x, *min_y, *max_x, *max_y);
        *min_x = std::min(wallmin_x_, *min_x);
        *min_y = std::min(wallmin_y_, *min_y);
        *max_x = std::max(wallmax_x_, *max_x);
        *max_y = std::max(wallmax_y_, *max_y);
        RCLCPP_INFO(rclcpp::get_logger("VirtualWall"), "After update: min_x: %f, min_y: %f, max_x: %f, max_y: %f", *min_x, *min_y, *max_x, *max_y);
    }

    /* *********************************************************************
     * updateCosts
     *
     * updates the master grid in the area defined in updateBounds
     */

    void VirtualWall::updateCosts(nav2_costmap_2d::Costmap2D &master_grid, int min_i, int min_j, int max_i, int max_j)
    {
        std::lock_guard<std::recursive_mutex> lock(data_access_);

        RCLCPP_INFO(rclcpp::get_logger("VirtualWall"), "updateCosts called with min_i: %d, min_j: %d, max_i: %d, max_j: %d", min_i, min_j, max_i, max_j);

        if (global_frame_ == map_frame_)
        {
            visualization_msgs::msg::Marker node_vis;
            node_vis.header.frame_id = map_frame_;
            node_vis.header.stamp = rclcpp::Clock().now();
            node_vis.type = visualization_msgs::msg::Marker::CUBE_LIST;
            node_vis.action = visualization_msgs::msg::Marker::ADD;
            node_vis.id = 0;
            node_vis.pose.orientation.x = 0.0;
            node_vis.pose.orientation.y = 0.0;
            node_vis.pose.orientation.z = 0.0;
            node_vis.pose.orientation.w = 1.0;
            node_vis.color.a = 1.0;
            node_vis.color.r = 1.0;
            node_vis.color.g = 0.0;
            node_vis.color.b = 0.0;
            node_vis.scale.x = resolution_;
            node_vis.scale.y = resolution_;
            node_vis.scale.z = 0.3;

            geometry_msgs::msg::Point pt;
            pt.z = 0.15;

            for (size_t i = 0; i < wallPoint_.size(); i++)
            {
                std_msgs::msg::Int32 msg;
                msg.data = wallPoint_[i].id;
                wall_list_pub_->publish(msg);

                for (size_t j = 0; j < wallPoint_[i].polygon.points.size(); j++)
                {
                    unsigned int pixle_x;
                    unsigned int pixle_y;
                    bool ret = master_grid.worldToMap(wallPoint_[i].polygon.points[j].x, wallPoint_[i].polygon.points[j].y, pixle_x, pixle_y);

                    if (ret)
                    {
                        // RCLCPP_INFO(rclcpp::get_logger("VirtualWall"), "Setting cost at: %d, %d", pixle_x, pixle_y);
                        master_grid.setCost(pixle_x, pixle_y, nav2_costmap_2d::LETHAL_OBSTACLE);
                        pt.x = wallPoint_[i].polygon.points[j].x;
                        pt.y = wallPoint_[i].polygon.points[j].y;
                        node_vis.points.push_back(pt);
                    }
                }
            }
            wall_maker_pub_->publish(node_vis);
        }

        else
        {
            geometry_msgs::msg::TransformStamped transform;
            std::shared_ptr<tf2_ros::Buffer> tf;
            try
            {
                transform = tf->lookupTransform(global_frame_, map_frame_, rclcpp::Time(0));
                RCLCPP_INFO(rclcpp::get_logger("VirtualWall"), "Transform found");
            }
            catch (tf2::TransformException &ex)
            {
                RCLCPP_ERROR(rclcpp::get_logger("VirtualWall"), "%s", ex.what());
                return;
            }

            // Copy map data given proper transformations
            tf2::Transform tf2_transform;
            tf2::fromMsg(transform.transform, tf2_transform);

            for (size_t i = 0; i < wallPoint_.size(); ++i)
            {
                std_msgs::msg::Int32 msg;
                msg.data = wallPoint_[i].id;
                wall_list_pub_->publish(msg); // Assuming wall_list_pub is a publisher pointer
                for (size_t j = 0; j < wallPoint_[i].polygon.points.size(); ++j)
                {
                    unsigned int pixle_x;
                    unsigned int pixle_y;
                    double wx, wy;

                    wx = wallPoint_[i].polygon.points[j].x;
                    wy = wallPoint_[i].polygon.points[j].y;
                    tf2::Vector3 p(wx, wy, 0);
                    p = tf2_transform * p;

                    bool ret = master_grid.worldToMap(p.x(), p.y(), pixle_x, pixle_y);
                    if (ret)
                    {
                        master_grid.setCost(pixle_x, pixle_y, nav2_costmap_2d::LETHAL_OBSTACLE);
                    }
                }
            }
        }
    }
    bool VirtualWall::WallInterpolation()
    {
        RCLCPP_WARN(rclcpp::get_logger("VirtualWall"), "Start Wall Interpolation");
        double pixle_x[2];
        double pixle_y[2];
        double k, b;

        for (size_t i = 0; i < 2; ++i)
        {
            if (fabs(wallPoint_.back().polygon.points[0].x - wallPoint_.back().polygon.points[1].x) > fabs(wallPoint_.back().polygon.points[0].y - wallPoint_.back().polygon.points[1].y))
            {
                pixle_x[i] = wallPoint_.back().polygon.points[i].x;
                pixle_y[i] = wallPoint_.back().polygon.points[i].y;
            }
            else
            {
                pixle_x[i] = wallPoint_.back().polygon.points[i].y;
                pixle_y[i] = wallPoint_.back().polygon.points[i].x;
            }
        }

        // Sử dụng pixle_x và pixle_y ở đây cho mục đích tiếp theo
        k = (pixle_y[0] - pixle_y[1]) / (pixle_x[0] - pixle_x[1]);
        b = pixle_y[0] - k * pixle_x[0];
        wallPoint_.back().polygon.points.clear();

        for (double i = std::min(pixle_x[0], pixle_x[1]); i < std::max(pixle_x[0], pixle_x[1]); i += resolution_)
        {
            geometry_msgs::msg::Point32 point;

            if (fabs(v_wall_.back().polygon.points[0].x - v_wall_.back().polygon.points[1].x) > fabs(v_wall_.back().polygon.points[0].y - v_wall_.back().polygon.points[1].y))
            {
                point.x = i;
                point.y = k * i + b;
            }
            else
            {
                point.x = k * i + b;
                point.y = i;
            }

            wallPoint_.back().polygon.points.push_back(point);
        }

        return true;
    }

    void VirtualWall::AddWallCallback(const geometry_msgs::msg::PointStamped::SharedPtr msg)
    {
        std::lock_guard<std::recursive_mutex> lock(data_access_);
        geometry_msgs::msg::Point32 point;
        point.x = msg->point.x;
        point.y = msg->point.y;
        point.z = msg->point.z;

        if (v_wall_.empty() || v_wall_.back().polygon.points.size() == 2)
        {
            tutorial_interfaces::msg::Wall wall;
            wall.id = v_wall_.size();
            wall.polygon.points.push_back(point);
            v_wall_.push_back(wall);
        }
        else
        {
            v_wall_.back().polygon.points.push_back(point);
            wallPoint_.push_back(v_wall_.back());
            WallInterpolation();
        }

        // Cập nhật bounds
        wallmax_x_ = std::max(wallmax_x_, msg->point.x);
        wallmax_y_ = std::max(wallmax_y_, msg->point.y);
        wallmin_x_ = std::min(wallmin_x_, msg->point.x);
        wallmin_y_ = std::min(wallmin_y_, msg->point.y);
    }

    void VirtualWall::DeleteWallCallback(const std_msgs::msg::Int32::SharedPtr msg)
    {
        cout << "Delete wall" << endl
             << endl
             << endl;
        for (size_t i = 0; i < v_wall_.size(); i++)
        {
            if (v_wall_[i].id == msg->data)
            {
                v_wall_.erase(v_wall_.begin() + i);
                wallPoint_.erase(wallPoint_.begin() + i);
            }
        }
    }
}
