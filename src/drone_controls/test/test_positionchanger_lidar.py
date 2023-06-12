import os
import sys
import unittest

import launch
import launch_ros
import launch_ros.actions
import launch_testing.actions
import pytest
import rclpy
import time

from drone_services.srv import MovePosition
from drone_services.msg import FailsafeMsg
from drone_services.msg import LidarReading

@pytest.mark.rostest
def generate_test_description():
    file_path = os.path.dirname(__file__)
    # device under test
    positionchanger_node = launch_ros.actions.Node(
        package='drone_controls', executable='position_changer')
    failsafe_node = launch_ros.actions.Node(
        package='failsafe', executable='failsafe')
    px4_controller_node = launch_ros.actions.Node(
        package='px4_connection', executable='px4_controller')
    heartbeat_node = launch_ros.actions.Node(
        package='px4_connection', executable='heartbeat')

    return (
        launch.LaunchDescription([
            positionchanger_node,
            failsafe_node,
            px4_controller_node,
            heartbeat_node,
            launch_testing.actions.ReadyToTest(),
        ]),
        {
            'positionchanger_node': positionchanger_node,
            'failsafe_node': failsafe_node,
            'px4_controller_node': px4_controller_node,
            'heartbeat_node': heartbeat_node
        }
    )


class TestPositionChanger(unittest.TestCase):

    @classmethod
    def setUpClass(cls):
        rclpy.init()

    @classmethod
    def tearDownClass(cls):
        rclpy.shutdown()

    def setUp(self):
        self.node = rclpy.create_node('test_positionchanger')
        self.called_positionchanger_service = False
        self.received_failsafe_callback = False

    def tearDown(self):
        self.node.destroy_node()

    def move_position_callback(self, future):
        self.called_positionchanger_service = True

    def test_positionchanger_lidar_moves_away(self, positionchanger_node, px4_controller_node, proc_output):
        self.node.get_logger().info("STARTING TEST test_positionchanger_lidar_moves_away")
        lidar_publisher = self.node.create_publisher(
            LidarReading, '/drone/object_detection', 10)
        move_position_client = self.node.create_client(
            MovePosition, '/drone/move_position')
        while not move_position_client.wait_for_service(timeout_sec=1.0):
            self.node.get_logger().info('move_position service not available, waiting again...')
        request = MovePosition.Request()
        request.front_back = 1.0
        request.left_right = 0.0
        request.up_down = 0.0
        request.angle = 0.0

        lidar_msg = LidarReading()
        lidar_msg.sensor_1 = 0.5
        lidar_msg.sensor_2 = 2.0
        lidar_msg.sensor_3 = 2.0
        lidar_msg.sensor_4 = 2.0
        lidar_msg.imu_data = [1.0, 1.0, 1.0, 1.0]
        end_time = time.time() + 10.0

        proc_output.assertWaitFor(expected_output='0.5',process=px4_controller_node)

        self.node.get_logger().info("STARTING while loop test")
        try:
            while time.time() < end_time:
                rclpy.spin_once(self.node, timeout_sec=0.1)
                lidar_publisher.publish(lidar_msg)
                if not self.called_positionchanger_service:
                    future = move_position_client.call_async(request)
                    future.add_done_callback(self.move_position_callback)
        finally:
            self.node.destroy_client(move_position_client)
            self.node.destroy_publisher(lidar_publisher)