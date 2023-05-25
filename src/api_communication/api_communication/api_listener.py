import rclpy
from rclpy.node import Node

from drone_services.msg import DroneStatus
from drone_services.srv import TakePicture

import asyncio
import websockets.server
import threading
import json
from enum import Enum

# communication: client always sends commands that have a command id.
# server always sends messages back that have a message type


class RequestCommand(Enum):
    GET_COMMANDS_TYPES = -1  # to get the available commands and types
    TAKEOFF = 0
    LAND = 1
    MOVE_POSITION = 2
    MOVE_DIRECTION = 3
    TAKE_PICTURE = 5


class ResponseMessage(Enum):
    ALL_REQUESTS_RESPONSES = -1
    STATUS = 0
    IMAGE = 1


class ApiListener(Node):
    def __init__(self):
        super().__init__('api_listener')
        self.get_logger().info('ApiListener node started')
        self.drone_status_subscriber = self.create_subscription(
            DroneStatus, '/drone/status', self.drone_status_callback, 10)
        self.timer = self.create_timer(1, self.publish_status)
        self.take_picture_client = self.create_client(
            TakePicture, '/drone/picture')
        while not self.take_picture_client.wait_for_service(timeout_sec=1.0):
            self.get_logger().info('Take picture service not available, waiting again...')
        self.take_picture_request = TakePicture.Request()

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

    def drone_status_callback(self, msg):
        self.status_data_received = True
        self.status_data['battery_percentage'] = msg.battery_percentage
        self.status_data['cpu_usage'] = msg.cpu_usage
        self.status_data['armed'] = msg.armed
        self.status_data['control_mode'] = msg.control_mode
        self.status_data['route_setpoint'] = msg.route_setpoint

    def publish_message(self, message):
        self.get_logger().info(f'Publishing message: {message}')
        asyncio.run(self.websocket.send(message))

    def publish_status(self):
        if self.status_data_received:
            if self.websocket is not None:
                self.message_queue.append(json.dumps(
                    {'type': ResponseMessage.STATUS.name, 'data': self.status_data}))

    def handle_responses(self):
        while True:
            if len(self.message_queue) > 0:
                self.publish_message(self.message_queue.pop(0))

    def start_api_thread(self):
        asyncio.run(self.handle_api())

    async def handle_api(self):
        self.get_logger().info('Starting API')
        self.server = await websockets.serve(self.api_handler, '0.0.0.0', 9001)
        self.get_logger().info('API started on port 9001')
        await self.server.wait_closed()

    def process_image_request(self, message_json):
        self.get_logger().info('Take picture command received')
        if message_json['filename']:
            self.get_logger().info(
                f'Filename: {message_json["filename"]}')
            self.take_picture_request.input_name = message_json['filename']
        self.future = self.cli.call_async(self.take_picture_request)
        rclpy.spin_until_future_complete(self, self.future)
        result_filename = self.future.result()
        with open(result_filename, 'rb') as f:
            image_data = f.read()
            self.message_queue.append(json.dumps(
                {'type': ResponseMessage.IMAGE.name, 'image': image_data}))

    def send_available_commands(self):
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
        self.message_queue.append(json.dumps(
            {'type': ResponseMessage.ALL_REQUESTS_RESPONSES.name, 'data': result}))

    def consume_message(self, message):
        self.get_logger().info(f'Consuming message: {message}')
        try:
            message_json = json.loads(str(message))
            self.get_logger().info(f'JSON: {message_json}, type:{type(message_json)}')
            if not message_json["command"]:
                self.get_logger().error('Received message without command')
                self.send_available_commands()
            else:
                self.get_logger().info(
                    f'Received command: {message_json["command"]}')
                if message_json['command'] == RequestCommand.TAKEOFF.value:
                    self.get_logger().info('Takeoff command received')
                elif message_json['command'] == RequestCommand.LAND.value:
                    self.get_logger().info('Land command received')
                elif message_json['command'] == RequestCommand.MOVE_POSITION.value:
                    self.get_logger().info('Move position command received')
                elif message_json['command'] == RequestCommand.MOVE_DIRECTION.value:
                    self.get_logger().info('Move direction command received')
                elif message_json['command'] == RequestCommand.TAKE_PICTURE.value:
                    self.process_image_request(message_json)
                elif message_json['command'] == RequestCommand.GET.value:
                    self.get_logger().info('Get command received')
                    self.send_available_commands()
                else:
                    self.get_logger().error('Received unknown command')
                    self.send_available_commands()
        except TypeError:
            self.get_logger().error('Received unknown command')
            self.send_available_commands()
        except json.JSONDecodeError:
            self.get_logger().error('Received invalid JSON')
            self.send_available_commands()
        except Exception as e:
            self.get_logger().error('Something went wrong!')
            self.get_logger().error(str(e))

    async def api_handler(self, websocket):
        self.get_logger().info('New connection')
        # if self.websocket is not None:
        #     self.get_logger().error('Got a new websocket connection but I am already connected!')
        #     return

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
    rclpy.init(args=args)

    api_listener = ApiListener()

    rclpy.spin(api_listener)

    api_listener.destroy_node()
    rclpy.shutdown()


if __name__ == '__main__':
    main()
