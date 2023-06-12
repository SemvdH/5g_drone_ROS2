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
        self.lidar_publisher = self.node.create_publisher(
            LidarReading, '/drone/object_detection', 10)
        self.move_position_client = self.node.create_client(
            MovePosition, '/drone/move_position')
        while not self.move_position_client.wait_for_service(timeout_sec=1.0):
            self.node.get_logger().info('move_position service not available, waiting again...')
        self.request = MovePosition.Request()

    def tearDown(self):
        self.node.destroy_client(self.move_position_client)
        self.node.destroy_publisher(self.lidar_publisher)
        self.node.destroy_node()

    def toRadians(self, degrees) -> float:
        return degrees * 3.14159265359 / 180


    def move_position_callback(self, future):
        self.node.get_logger().info("Callback called")
        self.called_positionchanger_service = True

    def validate_output(self, output):
        assert len(output) > 0, 'Output is empty'

    def test_positionchanger_lidar_moves_away_front(self, px4_controller_node, proc_output):
        self.node.get_logger().info("STARTING TEST test_positionchanger_lidar_moves_away")
        self.request.front_back = 1.0
        self.request.left_right = 0.0
        self.request.up_down = 0.0
        self.request.angle = 0.0

        lidar_msg = LidarReading()
        lidar_msg.sensor_1 = 0.5
        lidar_msg.sensor_2 = 0.3
        lidar_msg.sensor_3 = 2.0
        lidar_msg.sensor_4 = 2.0
        lidar_msg.imu_data = [1.0, 1.0, 1.0, 1.0]
        end_time = time.time() + 10.0

        self.node.get_logger().info("STARTING while loop test")
        
        while time.time() < end_time:
            rclpy.spin_once(self.node, timeout_sec=0.1)
            self.lidar_publisher.publish(lidar_msg)
            if not self.called_positionchanger_service:
                future = self.move_position_client.call_async(self.request)
                future.add_done_callback(self.move_position_callback)
        launch_testing.asserts.assertInStderr(proc_output, "Collision prevention front: -0.5", 'position_changer-1')
        launch_testing.asserts.assertInStderr(proc_output, "Collision prevention front: -0.7", 'position_changer-1')
    
    def test_positionchanger_lidar_moves_away_back(self, px4_controller_node, proc_output):
        self.node.get_logger().info("STARTING TEST test_positionchanger_lidar_moves_away")
        self.request.front_back = -1.0
        self.request.left_right = 0.0
        self.request.up_down = 0.0
        self.request.angle = 0.0

        lidar_msg = LidarReading()
        lidar_msg.sensor_1 = 2.0
        lidar_msg.sensor_2 = 2.0
        lidar_msg.sensor_3 = 0.5
        lidar_msg.sensor_4 = 2.0
        lidar_msg.imu_data = [1.0, 1.0, 1.0, 1.0]
        end_time = time.time() + 10.0

        self.node.get_logger().info("STARTING while loop test")
        
        while time.time() < end_time:
            rclpy.spin_once(self.node, timeout_sec=0.1)
            self.lidar_publisher.publish(lidar_msg)
            if not self.called_positionchanger_service:
                future = self.move_position_client.call_async(self.request)
                future.add_done_callback(self.move_position_callback)
        launch_testing.asserts.assertInStderr(proc_output, "Collision prevention front: -0.5", 'position_changer-1')