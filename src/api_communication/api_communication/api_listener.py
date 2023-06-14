import rclpy
from rclpy.node import Node

from drone_services.msg import DroneStatus
from drone_services.msg import FailsafeMsg
from drone_services.srv import TakePicture
from drone_services.srv import MovePosition
from drone_services.srv import EnableFailsafe
from drone_services.srv import ArmDrone
from drone_services.srv import DisarmDrone
from drone_services.srv import ReadyDrone
from drone_services.srv import Land

import asyncio
import websockets.server
import threading
import json
from enum import Enum
from functools import partial
from functools import partial

class RequestCommand(Enum):
    """
    Enum for the commands that can be sent to the API
    """
    GET_COMMANDS_TYPES = -1 
    LAND = 0
    ARM_DISARM = 1
    MOVE_POSITION = 2
    MOVE_DIRECTION = 3
    EMERGENCY_STOP = 6

class ResponseMessage(Enum):
    """
    Enum for the messages that can be sent to the client
    """
    ALL_REQUESTS_RESPONSES = -1
    STATUS = 0
    MOVE_DIRECTION_RESULT = 2
    FAILSAFE = 3

class ApiListener(Node):
    """
    Node that listens to the client and sends the commands to the drone
    """

    def __init__(self):
        super().__init__('api_listener')
        self.get_logger().info('ApiListener node started')
        self.drone_status_subscriber = self.create_subscription(DroneStatus, '/drone/status', self.drone_status_callback, 10)
        self.failsafe_subscriber = self.create_subscription(FailsafeMsg, "/drone/failsafe", self.failsafe_callback, 10)

        self.timer = self.create_timer(1, self.publish_status)

        self.take_picture_client = self.create_client(TakePicture, '/drone/picture')
        self.wait_for_service(self.take_picture_client, "Take picture")
        self.take_picture_request = TakePicture.Request()

        self.move_position_client = self.create_client(MovePosition, '/drone/move_position')
        self.wait_for_service(self.move_position_client, "Move position")
        self.move_position_request = MovePosition.Request()

        self.enable_failsafe_client = self.create_client(EnableFailsafe, "/drone/enable_failsafe")
        self.wait_for_service(self.enable_failsafe_client, "Enable failsafe")
        self.enable_failsafe_request = EnableFailsafe.Request()

        self.arm_drone_client = self.create_client(ArmDrone, "/drone/arm")
        self.wait_for_service(self.arm_drone_client, "Arm drone")
        self.arm_drone_request = ArmDrone.Request()

        self.disarm_drone_client = self.create_client(DisarmDrone, "/drone/disarm")
        self.wait_for_service(self.disarm_drone_client, "Disarm drone")
        self.disarm_drone_request = DisarmDrone.Request()

        self.ready_drone_client = self.create_client(ReadyDrone, "/drone/ready")
        self.wait_for_service(self.ready_drone_client, "Ready drone")
        self.ready_drone_request = ReadyDrone.Request()

        self.land_client = self.create_client(Land, "/drone/land")
        self.wait_for_service(self.land_client, "Land drone")
        self.land_request = Land.Request()

        self.status_data = {}
        self.status_data_received = False
        self.last_message = ""
        self.message_queue = []
        self.checking_for_message = False

        self.websocket = None
        self.server = None
        self.server_thread = threading.Thread(
            target=self.start_api_thread, daemon=True)
        self.server_thread.start()
        self.response_thread = threading.Thread(
            target=self.handle_responses, daemon=True)
        self.response_thread.start()

        self.event_loop = None
        self.armed = False
        self.failsafe_enabled = False
        self.has_sent_failsafe_msg = False

    def wait_for_service(self, client, service_name):
        """Waits for a client service to be available

        Args:
            client (ROS2 service client): The client to use to wait fo the service
            service_name (str): The client name for logging
        """
        waiting = 0
        while not client.wait_for_service(timeout_sec=1.0):
            if (waiting > 10):
                self.get_logger().error(service_name + ' service not available, exiting...')
                exit(-1)
            self.get_logger().info(service_name + 'service not available, waiting again...')
            waiting = waiting + 1

    def drone_status_callback(self, msg):
        """Callback for when a drone_status message is received

        Args:
            msg (DroneStatus): The received message 
        """
        try:
            self.status_data_received = True
            self.status_data['battery_percentage'] = msg.battery_percentage
            if msg.battery_percentage < 15:
                self.enable_failsafe("Battery level too low! Failsafe enabled to prevent damage to battery (" + str(msg.battery_percentage ) + "%)")
            self.status_data['cpu_usage'] = msg.cpu_usage
            self.status_data['armed'] = msg.armed
            self.armed = msg.armed
            self.status_data['control_mode'] = msg.control_mode
            self.status_data['route_setpoint'] = msg.route_setpoint
            self.status_data['velocity'] = [float(msg.velocity[0]), float(
                msg.velocity[1]), float(msg.velocity[2])]
            self.status_data['position'] = [float(msg.position[0]), float(
            msg.position[1]), float(msg.position[2])]
            self.status_data['failsafe'] = msg.failsafe
            self.status_data['height'] = msg.height
        except Exception as e:
            self.get_logger().error(f'Error while parsing drone status message: {e}')

    def failsafe_callback(self, msg):
        """Callback for when the failsafe gets enabled. Queues a FAILSAFE message to the client

        Args:
            msg (FailSAfe): The message that was received
        """
        if self.failsafe_enabled:
            return

        if not self.has_sent_failsafe_msg:
            self.has_sent_failsafe_msg = True
            self.status_data['failsafe'] = msg.enabled
            self.message_queue.append(json.dumps({'type': ResponseMessage.FAILSAFE.name, 'message': msg.msg}))

    async def publish_message(self, message):
        """publishes a message to the NodeJS client

        Args:
            message (JSON object): the message to send
        """
        # self.get_logger().info(f'Publishing message: {message}')
        if self.websocket is not None:
            try:
                await self.websocket.send(message)
            except Exception as e:
                self.get_logger().error('Something went wrong while sending a message to the websocket: ' + str(e))
        else:
            self.get_logger().error('Trying to publish message but no websocket connection')

    def publish_status(self):
        """publishes the current status to the client by queueing a STATUS message
        """
        if self.status_data_received:
            self.status_data_received = False
            if self.websocket is not None:
                try:
                    self.message_queue.append(json.dumps({'type': ResponseMessage.STATUS.name, 'data': self.status_data}))
                except Exception as e:
                    self.get_logger().error('Something went wrong while publishing the status: ' + str(e))

    def handle_responses(self):
        """Thread to handle responses to send to the client
        """
        while True:
            if len(self.message_queue) > 0 and self.websocket is not None:
                # self.get_logger().info("sending message")
                asyncio.run(self.publish_message(self.message_queue.pop(0)))

    def start_api_thread(self):
        """Starts the API thread"""
        asyncio.run(self.handle_api())

    async def handle_api(self):
        """Handles the API requests and starts the websockets server"""
        self.get_logger().info('Starting API')
        self.event_loop = asyncio.get_event_loop()
        self.server = await websockets.serve(self.api_handler, '0.0.0.0', 9001)
        self.get_logger().info('API started on port 9001')
        await self.server.wait_closed()

    def send_available_commands(self):
        """Sends the available commands to the client
        """
        print('Sending available commands')
        requestcommands = {}
        messagetypes = {}
        result = {}
        for command in RequestCommand:
            requestcommands[command.name] = command.value
        for message_type in ResponseMessage:
            messagetypes[message_type.name] = message_type.value
        result['request_commands'] = requestcommands
        result['response_messages'] = messagetypes
        self.message_queue.append(json.dumps({'type': ResponseMessage.ALL_REQUESTS_RESPONSES.name, 'data': result}))

    def handle_direction_message(self, message):
        """Calls the move position service with the given values

        Args:
            message (JSON object): the message containing the direction values
        """
        self.move_position_request.up_down = float(message['up_down'])
        self.move_position_request.left_right = float(message['left_right'])
        self.move_position_request.front_back = float(
            message['forward_backward'])
        self.move_position_request.angle = float(message['yaw'])
        self.get_logger().info(f'Calling move position service with request: {str(self.move_position_request)}')

        self.send_move_position_request()

    def send_move_position_request(self):
        """Sends the move position request to the move position service"""
        future = self.move_position_client.call_async(
            self.move_position_request)
        future.add_done_callback(partial(self.move_position_service_callback))

    def move_position_service_callback(self, future):
        """Callback for the move position service

        Args:
            future (Future): Future object that holds the result
        """
        try:
            result = future.result()
            message_result = {}
            message_result['type'] = ResponseMessage.MOVE_DIRECTION_RESULT.name
            self.get_logger().info(f'Move position service call result: {str(result)}')
            if result.success == True:
                self.get_logger().info('Move position service call success')
                message_result['success'] = True
            else:
                self.get_logger().error('Move position service call failed')
                message_result['success'] = False
            self.message_queue.append(json.dumps(message_result))
        except Exception as e:
            self.get_logger().error('Something went wrong while sending a move position request and waiting for the response: %r' % (e))

    def enable_failsafe(self, message):
        self.get_logger().info("Enabling failsafe")
        self.enable_failsafe_request.message = message
        future = self.enable_failsafe_client.call_async(
            self.enable_failsafe_request)
        future.add_done_callback(partial(self.enable_failsafe_callback))

    def enable_failsafe_callback(self, future):
        try:
            result = future.result()
            if (result.enabled == True):
                self.get_logger().info("Failsafe activated")
        except Exception as e:
            self.get_logger().error("Something went wrong while trying to enable failsafe!\n" + str(e))

    def emergency_stop(self):
        """Sends an emergency stop request to the failsafe service"""
        self.enable_failsafe("Emergency stop activated")

    def takeoff(self):
        """Sends a takeoff request to the move position service"""
        self.get_logger().info('Takeoff command received')
        self.move_position_request.up_down = 0.1
        self.move_position_request.left_right = 0.0
        self.move_position_request.front_back = 0.0
        self.move_position_request.angle = 0.0
        self.send_move_position_request()

    def land(self):
        """Sends a land request to the move position service"""
        self.get_logger().info('Land command received')
        self.move_position_request.up_down = -0.1
        self.move_position_request.left_right = 0.0
        self.move_position_request.front_back = 0.0
        self.move_position_request.angle = 0.0
        self.send_move_position_request()
        future = self.land_drone_client.call_async(self.land_drone_request)
        future.add_done_callback(partial(self.land_service_callback))

    def arm_disarm(self):
        """Sends an arm or disarm request to the PX4Controller"""
        if self.armed:
            self.get_logger().info('Disarm command received')
            future = self.disarm_drone_client.call_async(
                self.disarm_drone_request)
            future.add_done_callback(partial(self.disarm_service_callback))
        else:
            self.get_logger().info('Arm command received')
            future = self.ready_drone_client.call_async(
                self.ready_drone_request)
            future.add_done_callback(partial(self.ready_drone_callback))
    
    def ready_drone_callback(self, future):
        try:
            result = future.result()
            if result.success:
                self.get_logger().info('Ready service call success')
            else:
                self.get_logger().error('Ready service call failed')
        except Exception as e:
            self.get_logger().error('Something went wrong while calling the ready service!\n' + str(e))

    def arm_service_callback(self, future):
        try:
            result = future.result()
            if result.success:
                self.get_logger().info('Arm service call success')
            else:
                self.get_logger().error('Arm service call failed')
        except Exception as e:
            self.get_logger().error('Something went wrong while calling the arm service!\n' + str(e))

    def disarm_service_callback(self, future):
        try:
            result = future.result()
            if result.success:
                self.get_logger().info('Disarm service call success')
                self.armed = False
            else:
                self.get_logger().error('Disarm service call failed')
        except Exception as e:
            self.get_logger().error('Something went wrong while calling the disarm service!\n' + str(e))
            
    def land_service_callback(self, future):
        try:
            result = future.result()
            if result.is_landing:
                self.get_logger().info('Land service call success')
            else:
                self.get_logger().error('Land service call failed')
        except Exception as e:
            self.get_logger().error('Something went wrong while calling the land service!\n' + str(e))

    def consume_message(self, message):
        """Consumes a message from the client"""
        self.get_logger().info(f'Consuming message: {message}')
        try:
            message_json = json.loads(str(message))
            # self.get_logger().info(f'JSON: {str(message_json)}, type:{type(message_json)}')
            # self.get_logger().info(f'JSON CMD: {str(message_json["command"])}, type:{type(message_json["command"])}')
            if not "command" in message_json:
                self.get_logger().error('Received message without command')
                self.send_available_commands()
            else:
                self.get_logger().info(
                    f'Received command: {message_json["command"]}')
                if message_json['command'] == RequestCommand.LAND.value:
                    self.get_logger().info('Land command received')
                    self.land()
                elif message_json['command'] == RequestCommand.ARM_DISARM.value:
                    self.get_logger().info('Arm/disarm command received')
                    self.arm_disarm()
                elif message_json['command'] == RequestCommand.MOVE_DIRECTION.value:
                    self.get_logger().info('Move direction command received')
                    self.handle_direction_message(message_json)
                elif message_json['command'] == RequestCommand.GET_COMMANDS_TYPES.value:
                    self.get_logger().info('Get command received')
                    self.send_available_commands()
                elif message_json['command'] == RequestCommand.EMERGENCY_STOP.value:
                    self.get_logger().info('Emergency stop command received')
                    self.emergency_stop()
                else:
                    self.get_logger().error('Received unknown command ' + str(message_json['command']))
                    self.send_available_commands()
        except TypeError:
            self.get_logger().error('Received unknown type: ' + str(type(message)) + " " + str(message))
            self.send_available_commands()
        except json.JSONDecodeError:
            self.get_logger().error('Received invalid JSON')
            self.send_available_commands()
        except Exception as e:
            self.get_logger().error('Something went wrong!')
            self.get_logger().error(str(type(e)))
            self.get_logger().error(e)

    async def api_handler(self, websocket):
        """Handles the websocket connection
        Args:
            websocket (websockets object): the websocket connection
        """
        self.get_logger().info('New connection')

        self.websocket = websocket
        try:
            async for message in websocket:
                self.get_logger().info(f"Received message: {message}")
                self.consume_message(message)

        except websockets.exceptions.ConnectionClosed:
            self.get_logger().info('Connection closed')
            self.websocket = None
        except Exception as e:
            self.get_logger().error('Something went wrong!')
            self.get_logger().error(str(e))
            self.websocket = None

def main(args=None):
    """Main function"""
    rclpy.init(args=args)

    api_listener = ApiListener()
    multithreaded_executor = rclpy.executors.MultiThreadedExecutor()
    multithreaded_executor.add_node(api_listener)
    multithreaded_executor.spin()

    api_listener.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
