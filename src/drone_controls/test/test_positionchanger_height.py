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
from drone_services.srv import ArmDrone
from drone_services.srv import Land
from drone_services.msg import HeightData

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
        self.called_arm_service = False
        self.called_land_service = False
        self.called_move_service_up = False
        self.called_move_service_stop = False
        self.moved_up = False

    def tearDown(self):
        self.node.destroy_node()

    def move_position_callback_up(self, future):
        self.node.get_logger().info("Callback called")
        # self.assertTrue(future.result().success, "Move service failed")
        self.called_move_service_up = True
    
    def move_position_callback_stop(self, future):
        self.node.get_logger().info("Callback called")
        # self.assertTrue(future.result().success, "Move service failed")
        self.called_move_service_stop = True
    
    def arm_callback(self, future):
        self.node.get_logger().info("Arm Callback called")
        # self.assertTrue(future.result().success, "Arm service failed")
        self.called_arm_service = True
        
    def land_callback(self,future):
        self.node.get_logger().info("Land Callback called")
        self.assertTrue(future.result().is_landing, "Drone is not landing")
        self.called_land_service = True

    def test_positionchanger_land(self, proc_output):
        self.node.get_logger().info("starting land test")
        height_data_publisher = self.node.create_publisher(HeightData, '/drone/height', 10)
        height_msg = HeightData()
        height_msg.heights = [0.2,0.2,0.2,0.2]
        height_msg.min_height = 0.2
        arm_client = self.node.create_client(ArmDrone, '/drone/arm')
        while not arm_client.wait_for_service(timeout_sec=1.0):
            self.node.get_logger().info('arm service not available, waiting again...')
        land_client = self.node.create_client(Land, '/drone/land')
        while not land_client.wait_for_service(timeout_sec=1.0):
            self.node.get_logger().info('land service not available, waiting again...')
        move_client = self.node.create_client(MovePosition, '/drone/move_position')
        while not move_client.wait_for_service(timeout_sec=1.0):
            self.node.get_logger().info('move_position service not available, waiting again...')

        arm_request = ArmDrone.Request()
        land_request = Land.Request()
        move_request = MovePosition.Request()
        move_request.front_back = 0.0
        move_request.left_right = 0.0
        move_request.up_down = 5.0
        move_request.angle = 0.0

        start_height_msgs_published = 0
        moving_height_msgs_published = 0
        landing_height_msgs_published = 0
        
        end_time = time.time() + 20.0
        try:
            while time.time() < end_time:
                rclpy.spin_once(self.node, timeout_sec=0.1)
                if start_height_msgs_published < 10:
                    height_data_publisher.publish(height_msg)
                    start_height_msgs_published += 1
                elif not self.called_arm_service:
                    arm_future = arm_client.call_async(arm_request)
                    arm_future.add_done_callback(self.arm_callback)
                elif not self.called_move_service_up:
                    move_future = move_client.call_async(move_request)
                    move_future.add_done_callback(self.move_position_callback_up)
                elif moving_height_msgs_published < 10:
                    height_msg.min_height += 0.1
                    height_data_publisher.publish(height_msg)
                    moving_height_msgs_published += 1
                elif not self.called_move_service_stop:
                    move_request.up_down = 0.0
                    move_future = move_client.call_async(move_request)
                    move_future.add_done_callback(self.move_position_callback_stop)
                elif not self.called_land_service:
                    land_future = land_client.call_async(land_request)
                    land_future.add_done_callback(self.land_callback)
                elif landing_height_msgs_published < 10:
                    height_msg.min_height -= 0.15
                    height_data_publisher.publish(height_msg)
                    landing_height_msgs_published += 1
            
            launch_testing.asserts.assertInStderr(proc_output, "Attitude set to 0 for landing, landing done", 'position_changer-1')
            launch_testing.asserts.assertInStderr(proc_output, "Vehicle Control mode set to attitude for landing", 'position_changer-1')
        finally:
            self.node.get_logger().info("shutting down")
            self.node.destroy_client(arm_client)
            self.node.destroy_client(land_client)
            self.node.destroy_client(move_client)
            self.node.destroy_publisher(height_data_publisher)
        #publish height data as start value
        #arm
        #move up
        #hang still
        #land
        #check if landed
