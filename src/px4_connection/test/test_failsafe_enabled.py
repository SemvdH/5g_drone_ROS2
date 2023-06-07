import os
import sys
import unittest

import launch
import launch_ros
import launch_ros.actions
import launch_testing.actions
import pytest
import rclpy

from drone_services.srv import EnableFailsafe
from drone_services.srv import SetTrajectory
from drone_services.srv import SetAttitude
from drone_services.srv import ArmDrone


@pytest.mark.rostest
def generate_test_description():
    file_path = os.path.dirname(__file__)
    px4_controller_node = launch_ros.actions.Node(
        package='px4_connection', executable='px4_controller')
    failsafe_node = launch_ros.actions.Node(
        package='failsafe', executable='failsafe')

    return (
        launch.LaunchDescription([
            px4_controller_node,
            failsafe_node,
            launch_testing.actions.ReadyToTest(),
        ]),
        {
            'px4_controller_node': px4_controller_node,
            'failsafe_node': failsafe_node,
        }
    )


class TestPx4Failsafe(unittest.TestCase):

    @classmethod
    def setUpClass(cls):
        rclpy.init()

    @classmethod
    def tearDownClass(cls):
        rclpy.shutdown()

    def setUp(self):
        self.node = rclpy.create_node('test_px4_failsafe')
        self.called_failsafe_service = False
        self.called_trajectory_service = False
        self.called_arm_service = False

    def tearDown(self):
        self.node.destroy_node()

    def failsafe_service_callback(self,future):
        self.called_failsafe_service = True
    
    def trajectory_service_callback(self,future):
        self.called_trajectory_service = True
        self.assertFalse(future.result().success)
    
    def attitude_service_callback(self,future):
        self.called_attitude_service = True
        self.assertFalse(future.result().success)
    
    def arm_service_callback(self,future):
        self.called_arm_service = True
        self.assertFalse(future.result().success)

    def test_failsafe_enabled_set_trajectory_returns_false(self, px4_controller_node, proc_output):
        self.called_failsafe_service = False
        failsafe_client = self.node.create_client(EnableFailsafe, '/drone/enable_failsafe')
        set_trajectory_client = self.node.create_client(SetTrajectory, '/drone/set_trajectory')
        while not failsafe_client.wait_for_service(timeout_sec=1.0):
            self.node.get_logger().info('failsafe service not available, waiting again...')
        while not set_trajectory_client.wait_for_service(timeout_sec=1.0):
            self.node.get_logger().info('set_trajectory service not available, waiting again...')
        failsafe_request = EnableFailsafe.Request()
        failsafe_request.message = "test"
        set_trajectory_request = SetTrajectory.Request()
        set_trajectory_request.control_mode = 2
        set_trajectory_request.values = [1,1,1]
        set_trajectory_request.yaw = 0

        try:
            while True:
                rclpy.spin_once(self.node, timeout_sec=0.1)
                if not self.called_failsafe_service:
                    failsafe_future = failsafe_client.call_async(failsafe_request)
                    failsafe_future.add_done_callback(self.failsafe_service_callback)
                elif not self.called_trajectory_service:
                    trajectory_future = set_trajectory_client.call_async(set_trajectory_request)
                    trajectory_future.add_done_callback(self.trajectory_service_callback)
                else:
                    break

        finally:
            self.node.destroy_client(failsafe_client)
            self.node.destroy_client(set_trajectory_client)


    def test_failsafe_enabled_set_attitude_returns_false(self, px4_controller_node, proc_output):
        self.called_failsafe_service = False
        failsafe_client = self.node.create_client(EnableFailsafe, '/drone/enable_failsafe')
        set_attitude_client = self.node.create_client(SetAttitude, '/drone/set_attitude')
        while not failsafe_client.wait_for_service(timeout_sec=1.0):
            self.node.get_logger().info('failsafe not available, waiting again...')
        while not set_attitude_client.wait_for_service(timeout_sec=1.0):
            self.node.get_logger().info('attitude not available, waiting again...')
        failsafe_request = EnableFailsafe.Request()
        failsafe_request.message = "test"
        set_attitude_request = SetAttitude.Request()
        set_attitude_request.control_mode = 1
        set_attitude_request.pitch = 1
        set_attitude_request.yaw = 1
        set_attitude_request.roll = 1
        set_attitude_request.thrust = 0.5

        try:
            while True:
                rclpy.spin_once(self.node, timeout_sec=0.1)
                if not self.called_failsafe_service:
                    failsafe_future = failsafe_client.call_async(failsafe_request)
                    failsafe_future.add_done_callback(self.failsafe_service_callback)
                elif not self.called_attitude_service:
                    attitude_future = set_attitude_client.call_async(set_attitude_request)
                    attitude_future.add_done_callback(self.attitude_service_callback)
                else:
                    break

        finally:
            self.node.destroy_client(failsafe_client)
            self.node.destroy_client(set_attitude_client)

    def test_failsafe_enabled_arm_returns_false(self, px4_controller_node, proc_output):
        self.called_failsafe_service = False
        failsafe_client = self.node.create_client(EnableFailsafe, '/drone/enable_failsafe')
        arm_client = self.node.create_client(ArmDrone, '/drone/arm')
        while not failsafe_client.wait_for_service(timeout_sec=1.0):
            self.node.get_logger().info('failsafe not available, waiting again...')
        while not arm_client.wait_for_service(timeout_sec=1.0):
            self.node.get_logger().info('arm not available, waiting again...')
        failsafe_request = EnableFailsafe.Request()
        failsafe_request.message = "test"
        arm_request = ArmDrone.Request()

        try:
            while True:
                rclpy.spin_once(self.node, timeout_sec=0.1)
                if not self.called_failsafe_service:
                    failsafe_future = failsafe_client.call_async(failsafe_request)
                    failsafe_future.add_done_callback(self.failsafe_service_callback)
                elif not self.called_arm_service:
                    arm_future = arm_client.call_async(arm_request)
                    arm_future.add_done_callback(self.arm_service_callback)
                else:
                    break
        finally:
            self.node.destroy_client(failsafe_client)
            self.node.destroy_client(arm_client)