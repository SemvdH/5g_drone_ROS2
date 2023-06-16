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

    def failsafe_callback(self, msg):
        self.assertTrue(msg.enabled, "Failsafe was not enabled!")
        self.received_failsafe_callback = True

    def move_position_callback(self, future):
        self.assertFalse(future.result(
        ).success, "MovePosition service call was successful, but should have failed!")
        self.called_positionchanger_service = True

    def test_positionchanger_no_lidar_data(self, positionchanger_node, proc_output):
        self.received_failsafe_callback = False
        self.called_positionchanger_service = False
        failsafe_subscriber = self.node.create_subscription(
            FailsafeMsg, '/drone/failsafe', self.failsafe_callback, 10)
        move_position_client = self.node.create_client(
            MovePosition, '/drone/move_position')
        while not move_position_client.wait_for_service(timeout_sec=1.0):
            self.node.get_logger().info('move_position service not available, waiting again...')

        request = MovePosition.Request()
        request.front_back = 1.0
        request.left_right = 1.0
        request.up_down = 1.0
        request.angle = 1.0

        end_time = time.time() + 10.0
        try:
            while time.time() < end_time:
                rclpy.spin_once(self.node)
                if not self.called_positionchanger_service:
                    future = move_position_client.call_async(request)
                    future.add_done_callback(self.move_position_callback)
                elif not self.received_failsafe_callback:
                    continue
                else:
                    break
            self.assertTrue(self.received_failsafe_callback,
                            "Failsafe callback was not received!")
            self.assertTrue(self.called_positionchanger_service,
                            "MovePosition service was not called!")
        finally:
            self.node.destroy_client(move_position_client)
            self.node.destroy_subscription(failsafe_subscriber)

    def test_positionchanger_lidar_stops(self, positionchanger_node, proc_output):
        self.node.get_logger().info("STARTING TEST test_positionchanger_lidar_stops")
        self.received_failsafe_callback = False
        self.called_positionchanger_service = False
        failsafe_subscriber = self.node.create_subscription(
            FailsafeMsg, '/drone/failsafe', self.failsafe_callback, 10)
        lidar_publisher = self.node.create_publisher(
            LidarReading, '/drone/object_detection', 10)
        move_position_client = self.node.create_client(
            MovePosition, '/drone/move_position')

        while not move_position_client.wait_for_service(timeout_sec=1.0):
            self.node.get_logger().info('move_position service not available, waiting again...')

        request = MovePosition.Request()
        request.front_back = 1.0
        request.left_right = 1.0
        request.up_down = 1.0
        request.angle = 1.0

        lidar_msg = LidarReading()
        lidar_msg.sensor_1 = 2.0
        lidar_msg.sensor_2 = 2.0
        lidar_msg.sensor_3 = 2.0
        lidar_msg.sensor_4 = 2.0
        lidar_msg.imu_data = [1.0, 1.0, 1.0, 1.0]
        sent_lidar_msg = False

        # wait for nodes to become active
        time.sleep(3)

        # wait 5 seconds for the failsafe to trigger
        wait_time = time.time() + 5.0
        end_time = time.time() + 10.0
        try:
            self.node.get_logger().info('STARTING WHILE LOOP')
            while time.time() < end_time:
                rclpy.spin_once(self.node, timeout_sec=0.1)
                if not sent_lidar_msg:
                    lidar_publisher.publish(lidar_msg)
                    sent_lidar_msg = True
                # wait 5 seconds before sending the move_position request
                if not self.called_positionchanger_service and time.time() > wait_time:
                    self.node.get_logger().info('Sending move_position request')
                    future = move_position_client.call_async(request)
                    future.add_done_callback(self.move_position_callback)
                elif not self.received_failsafe_callback:
                    continue
            self.node.get_logger().info('END OF WHILE LOOP')
            self.assertTrue(self.called_positionchanger_service,
                            "MovePosition service was not called!")
            self.assertTrue(self.received_failsafe_callback,
                            "Failsafe was not activated!")

        finally:
            self.node.get_logger().info('Cleaning up')
            self.node.destroy_client(move_position_client)
            self.node.destroy_subscription(failsafe_subscriber)
            self.node.destroy_publisher(lidar_publisher)