from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package="object_detection",
            executable="multiflex_reader",
            name="multiflex_reader",
            parameters=[
                {"multiflex_serial_port": "/dev/ttyACM0"}
            ]
        )

    ])