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

from drone_services.srv import EnableFailsafe
from drone_services.msg import FailsafeMsg

# launch node
@pytest.mark.rostest
def generate_test_description():
    file_path = os.path.dirname(__file__)
    failsafe_node = launch_ros.actions.Node(
        executable=sys.executable,
        arguments=[os.path.join(file_path, '..', 'failsafe', 'failsafe.py')],
        additional_env={'PYTHONUNBUFFERED': '1'}
    )

    return (
        launch.LaunchDescription([
            failsafe_node,
            launch_testing.actions.ReadyToTest(),
        ]),
        {
            'failsafe_node': failsafe_node,
        }
    )

class FailsafeUnitTest(unittest.TestCase):

    @classmethod
    def setUpClass(cls):
        rclpy.init()
    
    @classmethod
    def tearDownClass(cls):
        rclpy.shutdown()
    
    def setUp(self):
        self.node = rclpy.create_node('test_failsafe')
        self.service_called = False

    def tearDown(self):
        self.node.destroy_node()

    def service_call_callback(self,future):
        self.assertIsNotNone(future.result())
        self.assertTrue(future.result().enabled)
        self.assertEqual(future.result().message, "test")
        self.service_called = True
    
    def test_failsafe_node_enables(self,failsafe_node,proc_output):
        failsafe_msgs = []
        failsafe_subscription = self.node.create_subscription(FailsafeMsg, "/drone/failsafe", lambda msg: failsafe_msgs.append(msg), 10)
        failsafe_client = self.node.create_client(EnableFailsafe, "/drone/enable_failsafe")
        while not failsafe_client.wait_for_service(timeout_sec=1.0):
            self.node.get_logger().info("service not available, waiting again...")
        request = EnableFailsafe.Request()
        request.message = "test"

        try:
            end_time = time.time() + 10.0
            while time.time() < end_time:
                rclpy.spin_once(self.node, timeout_sec=0.1)
                if (not self.service_called):
                    future = failsafe_client.call_async(request)
                    future.add_done_callback(self.service_call_callback)
                else:
                    break
            self.assertTrue(failsafe_msgs[0].enabled)
            self.assertEqual(failsafe_msgs[0].msg, "test")
            self.assertTrue(self.service_called)
        finally:
            self.node.destroy_subscription(failsafe_subscription)
            self.node.destroy_client(failsafe_client)
                


