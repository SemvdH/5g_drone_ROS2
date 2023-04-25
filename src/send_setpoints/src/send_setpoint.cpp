/*

We need to send attitude setpoints to be able to arm the drone:
https://mavlink.io/en/messages/common.html#SET_ATTITUDE_TARGET
We need attitude setpoints because we don't have a GPS:
https://discuss.px4.io/t/cannot-arm-drone-with-companion-computer-arming-denied-manual-control-lost/31565/9

*/

#include "rclcpp/rclcpp.hpp"

#include <px4_msgs/msg/offboard_control_mode.hpp>
#include <px4_msgs/msg/vehicle_attitude_setpoint.hpp>
#include <px4_msgs/msg/timesync.hpp>

class SetpointSender : public rclcpp::Node
{
    public:
    SetpointSender() : Node("setpoint_sender")
    {

    }
};

int main(int argc, char *argv[])
{
  rclcpp::init(argc, argv);
//  rclcpp::spin(std::make_shared<LidarReader>());
  rclcpp::shutdown();
  return 0;
}
