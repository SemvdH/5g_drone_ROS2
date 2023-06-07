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

from drone_services.srv import TakePicture

@pytest.mark.rostest
def generate_test_description():
    file_path = os.path.dirname(__file__)
    camera_node = launch_ros.actions.Node(
        executable=sys.executable,
        arguments=[os.path.join(file_path, '..', 'camera', 'camera.py')],
        additional_env={'PYTHONUNBUFFERED': '1'}
    )

    return (
        launch.LaunchDescription([
            camera_node,
            launch_testing.actions.ReadyToTest(),
        ]),
        {
            'camera_node': camera_node,
        }
    )

class CameraUnitTest(unittest.TestCase):

    @classmethod
    def setUpClass(cls):
        rclpy.init()

    @classmethod
    def tearDownClass(cls):
        rclpy.shutdown()
    
    def setUp(self):
        self.node = rclpy.create_node('test_camera')
        self.service_called = False

    def tearDown(self):
        self.node.destroy_node()

    def service_call_callback(self,future):
        self.assertIsNotNone(future.result())
        self.assertEqual(future.result().filename, "/home/ubuntu/test_image.jpg")
        self.assertTrue(os.path.exists("/home/ubuntu/test_image.jpg"))
        self.service_called = True

    def test_camera_save_image(self,camera_node,proc_output):
        # call camera service
        camera_client = self.node.create_client(TakePicture, '/drone/take_picture')
        while not camera_client.wait_for_service(timeout_sec=1.0):
            self.node.get_logger().info('camera service not available, waiting again...')
        request = TakePicture.Request()
        request.input_name = "/home/ubuntu/test_image.jpg"
        try:
            while True:
                rclpy.spin_once(self.node,timeout_sec=0.1)
                if not self.service_called:
                    camera_client.call_async(request).add_done_callback(self.service_call_callback)
                else:
                    break
        finally:
            self.node.destroy_client(camera_client)