from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='basic_cpp',
            executable='simple',
            output='screen',
            emulate_tty=True),
    ])