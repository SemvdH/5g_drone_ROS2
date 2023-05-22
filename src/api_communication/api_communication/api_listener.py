import rclpy
from rclpy.node import Node

import asyncio
import websockets.server
import threading

class ApiListener(Node):
    def __init__(self):
        super().__init__('api_listener')
        self.get_logger().info('ApiListener node started')
        self.angle = 30
        asyncio.async(self.run_api())
    
    async def run_api(self):
        self.get_logger().info('Starting API')
        self.server = await websockets.serve(self.api_handler, 'localhost', 8765)
    
    async def api_handler(self, websocket):
        try:
            while True:
                message = await websocket.recv()
                self.get_logger().info('Received message: {0}'.format(message))
                await websocket.send("You sent " + str(message))
        except websockets.exceptions.ConnectionClosed:
            self.get_logger().info('Connection closed')


def main(args=None):
    rclpy.init(args=args)

    api_listener = ApiListener()

    rclpy.spin(api_listener)

    api_listener.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()