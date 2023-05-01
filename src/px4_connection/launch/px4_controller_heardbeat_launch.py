from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package="px4_connection",
            executable="heartbeat"
        ),
        Node(
            package="px4_connection",
            executable="px4_controller"
        )

    ])
