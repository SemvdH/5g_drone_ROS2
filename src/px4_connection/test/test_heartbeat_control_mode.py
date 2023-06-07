import os
import sys
import unittest

import launch
import launch_ros
import launch_ros.actions
import launch_testing.actions
import pytest
import rclpy

from drone_services.srv import SetVehicleControl
from drone_services.msg import DroneControlMode


@pytest.mark.rostest
def generate_test_description():
    heartbeat_node = launch_ros.actions.Node(
        package='px4_connection', executable='heartbeat')

    return (
        launch.LaunchDescription([
            heartbeat_node,
            launch_testing.actions.ReadyToTest(),
        ]),
        {
            'heartbeat_node': heartbeat_node,
        }
    )

class TestHeartbeatControlMode(unittest.TestCase)

    @classmethod
    def setUpClass(cls):
        rclpy.init()

    @classmethod
    def tearDownClass(cls):
        rclpy.shutdown()

    def setUp(self):
        self.node = rclpy.create_node('test_heartbeat_control_mode')
        self.called_control_mode_service = False
        self.received_control_mode = False

    def tearDown(self):
        self.node.destroy_node()
    
    def control_mode_callback(self,msg):
        self.received_control_mode = True
        self.assertEqual(msg.control_mode,1)

    def heartbeat_service_callback_correct(self,future):
        self.called_control_mode_service = True
        self.assertIsNotNone(future.result())
        self.assertTrue(future.result().success)
    
    def heartbeat_service_callback_wrong(self,future):
        self.called_control_mode_service = True
        self.assertIsNotNone(future.result())
        self.assertFalse(future.result().success)
    
    def test_set_vehicle_control_mode_proper_value(self,heartbeat_node,proc_output):
        self.called_control_mode_service = False
        heartbeat_client = self.node.create_client(SetVehicleControl, '/drone/set_vehicle_control')
        while not heartbeat_client.wait_for_service(timeout_sec=1.0):
            self.node.get_logger().info('heartbeat service not available, waiting again...')
        heartbeat_sub = self.node.create_subscription(DroneControlMode,"/drone/control_mode",self.control_mode_callback,10)
        request = SetVehicleControl.Request()
        request.control_mode = 4 # attitude control

        try:
            while True:
                rclpy.spin_once(self.node,timeout_sec=0.1)
                if not self.called_control_mode_service:
                    vehicle_control_future = heartbeat_client.call_async(request)
                    vehicle_control_future.add_done_callback(self.heartbeat_service_callback_correct)
                elif not self.received_control_mode:
                    continue
                else:
                    break
                
        finally:
            self.node.destroy_client(heartbeat_client)
    
    def test_set_vehicle_control_mode_wrong_value(self,heartbeat_node,proc_output):
        self.called_control_mode_service = False
        heartbeat_client = self.node.create_client(SetVehicleControl, '/drone/set_vehicle_control')
        while not heartbeat_client.wait_for_service(timeout_sec=1.0):
            self.node.get_logger().info('heartbeat service not available, waiting again...')
        request = SetVehicleControl.Request()
        request.control_mode = 33 # wrong control mode

        try:
            while True:
                rclpy.spin_once(self.node,timeout_sec=0.1)
                if not self.called_control_mode_service:
                    vehicle_control_future = heartbeat_client.call_async(request)
                    vehicle_control_future.add_done_callback(self.heartbeat_service_callback_wrong)
                else:
                    break
        finally:
            self.node.destroy_client(heartbeat_client)