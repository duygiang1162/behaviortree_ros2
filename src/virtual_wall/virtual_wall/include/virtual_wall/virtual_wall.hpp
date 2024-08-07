#ifndef VIRTUAL_WALL_HPP_
#define VIRTUAL_WALL_HPP_

#include <iostream>
#include <string>
#include <vector>
#include <thread>

// ROS 2 includes
#include "rclcpp/rclcpp.hpp"
#include "nav2_costmap_2d/costmap_2d.hpp"
#include "nav2_costmap_2d/layer.hpp"
#include "tutorial_interfaces/msg/wall.hpp"
#include "geometry_msgs/msg/point_stamped.hpp"
#include "geometry_msgs/msg/polygon.hpp"
#include "std_msgs/msg/int32.hpp"
#include "visualization_msgs/msg/marker.hpp"
#include <mutex>

namespace virtual_wall
{

class VirtualWall : public nav2_costmap_2d::Layer
{
private:
    rclcpp::Node::SharedPtr nh_;
    rclcpp::Subscription<geometry_msgs::msg::PointStamped>::SharedPtr sub_;
    double resolution_;
    double wallmax_x_, wallmax_y_, wallmin_x_, wallmin_y_;

    std::string global_frame_;
    std::string map_frame_;
    rclcpp::Subscription<geometry_msgs::msg::PointStamped>::SharedPtr add_wall_sub_;
    rclcpp::Publisher<std_msgs::msg::Int32>::SharedPtr wall_list_pub_;
    rclcpp::Publisher<visualization_msgs::msg::Marker>::SharedPtr wall_maker_pub_;
    rclcpp::Subscription<std_msgs::msg::Int32>::SharedPtr delete_wall_sub_;
    
    std::vector<tutorial_interfaces::msg::Wall> v_wall_;
    std::vector<tutorial_interfaces::msg::Wall> wallPoint_;

    mutable std::recursive_mutex data_access_;

    void AddWallCallback(const geometry_msgs::msg::PointStamped::SharedPtr msg); // Sửa lại để phù hợp với kiểu SharedPtr
    // void AddWallCallback(const geometry_msgs::msg::PointStamped msg); // Sửa lại để phù hợp với kiểu SharedPtr

    void DeleteWallCallback(const std_msgs::msg::Int32::SharedPtr msg);

    bool WallInterpolation();
    bool updateWall(nav2_costmap_2d::Costmap2D& master_grid);

    // Thêm khai báo cho executor và thread
    rclcpp::executors::MultiThreadedExecutor::SharedPtr executor_;
    std::thread executor_thread_;

public:
    VirtualWall();
    virtual void onInitialize();
    virtual void updateBounds(double robot_x, double robot_y, double robot_yaw, double* min_x, double* min_y,
                              double* max_x, double* max_y) override;
    virtual void updateCosts(nav2_costmap_2d::Costmap2D& master_grid, int min_i, int min_j, int max_i, int max_j) override;
    virtual void matchSize();

    virtual void reset() override { onInitialize(); }
    virtual ~VirtualWall();

    virtual bool isClearable() override { return true; } // or implement based on your logic

};

} // namespace virtual_wall

#endif // VIRTUAL_WALL_HPP_
