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

    def test_positionchanger_lidar_moves_away_front(self, proc_output):
        self.node.get_logger().info("starting front test")
        self.request.front_back = 1.0
        self.request.left_right = 0.0
        self.request.up_down = 0.0
        self.request.angle = 0.0

        lidar_msgs_sent = 0

        lidar_msg = LidarReading()
        lidar_msg.sensor_1 = 0.5 # front right
        lidar_msg.sensor_2 = 2.0 # front left
        lidar_msg.sensor_3 = 2.0 # rear left
        lidar_msg.sensor_4 = 2.0 # rear right
        lidar_msg.imu_data = [1.0, 1.0, 1.0, 1.0]
        end_time = time.time() + 10.0
        
        while time.time() < end_time:
            rclpy.spin_once(self.node, timeout_sec=0.1)
            self.lidar_publisher.publish(lidar_msg)
            lidar_msgs_sent += 1
            if (lidar_msgs_sent == 10):
                lidar_msg.sensor_1 = 1.0
                lidar_msg.sensor_2 = 0.3
            elif (lidar_msgs_sent == 20):
                break
            if not self.called_positionchanger_service:
                future = self.move_position_client.call_async(self.request)
                future.add_done_callback(self.move_position_callback)
        launch_testing.asserts.assertInStderr(proc_output, "Collision prevention front: -0.5", 'position_changer-1')
        launch_testing.asserts.assertInStderr(proc_output, "Collision prevention front: -0.7", 'position_changer-1')

    def test_positionchanger_lidar_moves_away_right(self, proc_output):
        self.node.get_logger().info("starting right test")
        self.request.front_back = 0.0
        self.request.left_right = 1.0
        self.request.up_down = 0.0
        self.request.angle = 0.0

        lidar_msgs_sent = 0

        lidar_msg = LidarReading()
        lidar_msg.sensor_1 = 0.4 # front right
        lidar_msg.sensor_2 = 2.0 # front left
        lidar_msg.sensor_3 = 2.0 # rear left
        lidar_msg.sensor_4 = 2.0 # rear right
        lidar_msg.imu_data = [1.0, 1.0, 1.0, 1.0]
        end_time = time.time() + 10.0
        
        while time.time() < end_time:
            rclpy.spin_once(self.node, timeout_sec=0.1)
            self.lidar_publisher.publish(lidar_msg)
            lidar_msgs_sent += 1
            if (lidar_msgs_sent == 10):
                lidar_msg.sensor_1 = 2.0
                lidar_msg.sensor_4 = 0.29
            elif (lidar_msgs_sent == 20):
                break
            if not self.called_positionchanger_service:
                future = self.move_position_client.call_async(self.request)
                future.add_done_callback(self.move_position_callback)
        launch_testing.asserts.assertInStderr(proc_output, "Collision prevention right: -0.6", 'position_changer-1')
        launch_testing.asserts.assertInStderr(proc_output, "Collision prevention right: -0.71", 'position_changer-1')

    def test_positionchanger_lidar_moves_away_left(self, proc_output):
        self.node.get_logger().info("starting left test")
        self.request.front_back = 0.0
        self.request.left_right = -1.0
        self.request.up_down = 0.0
        self.request.angle = 0.0

        lidar_msgs_sent = 0

        lidar_msg = LidarReading()
        lidar_msg.sensor_1 = 2.0 # front right
        lidar_msg.sensor_2 = 0.11 # front left
        lidar_msg.sensor_3 = 2.0 # rear left
        lidar_msg.sensor_4 = 2.0 # rear right
        lidar_msg.imu_data = [1.0, 1.0, 1.0, 1.0]
        end_time = time.time() + 10.0
        
        while time.time() < end_time:
            rclpy.spin_once(self.node, timeout_sec=0.1)
            self.lidar_publisher.publish(lidar_msg)
            lidar_msgs_sent += 1
            if (lidar_msgs_sent == 10):
                lidar_msg.sensor_2 = 2.0
                lidar_msg.sensor_3 = 0.78
            elif (lidar_msgs_sent == 20):
                break
            if not self.called_positionchanger_service:
                future = self.move_position_client.call_async(self.request)
                future.add_done_callback(self.move_position_callback)
        launch_testing.asserts.assertInStderr(proc_output, "Collision prevention left: 0.89", 'position_changer-1')
        launch_testing.asserts.assertInStderr(proc_output, "Collision prevention left: 0.22", 'position_changer-1')

    def test_positionchanger_lidar_moves_away_back(self, proc_output):
        self.node.get_logger().info("starting back test")
        self.request.front_back = -1.0
        self.request.left_right = 0.0
        self.request.up_down = 0.0
        self.request.angle = 0.0

        lidar_msgs_sent = 0

        lidar_msg = LidarReading()
        lidar_msg.sensor_1 = 2.0 # front right
        lidar_msg.sensor_2 = 2.0 # front left
        lidar_msg.sensor_3 = 0.36 # rear left
        lidar_msg.sensor_4 = 2.0 # rear right
        lidar_msg.imu_data = [1.0, 1.0, 1.0, 1.0]
        end_time = time.time() + 10.0
        
        while time.time() < end_time:
            rclpy.spin_once(self.node, timeout_sec=0.1)
            self.lidar_publisher.publish(lidar_msg)
            lidar_msgs_sent += 1
            if (lidar_msgs_sent == 10):
                lidar_msg.sensor_3 = 2.0
                lidar_msg.sensor_4 = 0.12
            elif (lidar_msgs_sent == 20):
                break
            if not self.called_positionchanger_service:
                future = self.move_position_client.call_async(self.request)
                future.add_done_callback(self.move_position_callback)
        launch_testing.asserts.assertInStderr(proc_output, "Collision prevention left: 0.64", 'position_changer-1')
        launch_testing.asserts.assertInStderr(proc_output, "Collision prevention left: 0.88", 'position_changer-1')

    def test_positionchanger_lidar_moves_away_still(self, proc_output):
        self.assertTrue(False, "Not implemented yet")
    