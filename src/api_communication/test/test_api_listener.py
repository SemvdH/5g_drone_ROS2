import os
import sys
import unittest
import time

import launch
import launch_ros
import launch_ros.actions
import launch_testing.actions
import pytest
import rclpy

from px4_msgs.msg import BatteryStatus
from drone_services.msg import FailsafeMsg

@pytest.mark.rostest
def generate_test_description():
    file_path = os.path.dirname(__file__)
    api_listener_node = launch_ros.actions.Node(
        executable=sys.executable,
        arguments=[os.path.join(
            file_path, '..', 'api_communication', 'api_listener.py')],
        additional_env={'PYTHONUNBUFFERED': '1'}
    )
    failsafe_node = launch_ros.actions.Node(
        package='failsafe', executable='failsafe')
    camera_node = launch_ros.actions.Node(
        package='camera', executable='camera_controller')
    position_changer_node = launch_ros.actions.Node(
        package='drone_controls', executable='position_changer')
    px4_controller_node = launch_ros.actions.Node(
        package='px4_connection', executable='px4_controller')
    drone_status_node = launch_ros.actions.Node(
        package='drone_status', executable='drone_status')

    return (
        launch.LaunchDescription([
            api_listener_node,
            failsafe_node,
            camera_node,
            position_changer_node,
            px4_controller_node,
            drone_status_node,
            launch_testing.actions.ReadyToTest(),
        ]),
        {
            'api_listener_node': api_listener_node,
            'failsafe_node': failsafe_node,
            'camera_node': camera_node,
            'position_changer_node': position_changer_node,
            'px4_controller_node': px4_controller_node,
            'drone_status_node': drone_status_node
        }
    )


class ApiListenerTest(unittest.TestCase):

    @classmethod
    def setUpClass(cls):
        rclpy.init()

    @classmethod
    def tearDownClass(cls):
        rclpy.shutdown()

    def setUp(self):
        self.node = rclpy.create_node('test_api_listener')
        self.published_battery_status = False
        self.received_failsafe_callback = False

    def tearDown(self):
        self.node.destroy_node()

    def failsafe_callback(self,msg):
        self.assertTrue(msg.enabled, "Failsafe was not enabled!")
        self.assertTrue("Battery level too low! Failsafe enabled to prevent damage to battery" in msg.msg, "Failsafe message was not correct!")
        self.received_failsafe_callback = True

    def test_api_listener_battery(self, api_listener_node, proc_output):
        battery_publisher = self.node.create_publisher(BatteryStatus, '/fmu/out/battery_status')
        failsafe_subscriber = self.node.create_subscription(FailsafeMsg, '/drone/failsafe', self.failsafe_callback, 10)

        end_time = time.time() + 10.0

        try:
            while time.time() < end_time:
                rclpy.spin_once(self.node, timeout_sec=0.1)
                if not self.published_battery_status:
                    self.published_battery_status = True
                    msg = BatteryStatus()
                    msg.remaining = 0.10
                    battery_publisher.publish(msg)
                if self.received_failsafe_callback:
                    break
            self.assertTrue(self.received_failsafe_callback, "Failsafe was not enabled!")
        finally:
            self.node.destroy_subscription(failsafe_subscriber)
            self.node.destroy_publisher(battery_publisher)
