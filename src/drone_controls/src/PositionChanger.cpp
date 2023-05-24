#include "rclcpp/rclcpp.hpp"

#include "object_detection/msg/LidarReading.msg"
#include "height/msg/HeightData.msg"
#include "drone_services/srv/SetVehicleControl.srv"
class PositionChanger : public rclcpp::Node
{
public:
    PositionChanger() : Node("position_changer")
    {

    }
};
int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<PositionChanger>());
    rclcpp::shutdown();
    return 0;
}
