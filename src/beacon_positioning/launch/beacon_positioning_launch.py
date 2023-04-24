from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package="beacon_positioning",
            executable="tracker_position",
            name="beacon_tracker_0",
	    namespace="tracker0",
            parameters=[
                {"tracker_serial_port": "/dev/ttyUSB0"}
            ]
        ),
        Node(
            package="beacon_positioning",
            executable="tracker_position",
            name="beacon_tracker_1",
	    namespace="tracker1",
            output="screen",
            emulate_tty=True,
            parameters=[
                {"tracker_serial_port": "/dev/ttyUSB1"}
            ]
        )

    ])
