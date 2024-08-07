#include "rclcpp/rclcpp.hpp"

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);

    auto node = rclcpp::Node::make_shared("duygiang");

    RCLCPP_INFO(node->get_logger(), "Hello world");

    rclcpp::shutdown();

    return 0;
}