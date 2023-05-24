#include "rclcpp/rclcpp.hpp"

#include "object_detection/msg/LidarReading.msg"
#include "height/msg/HeightData.msg"
#include "drone_services/srv/SetVehicleControl.srv"
#include "drone_services/srv/SetTrajectory/srv"

#define LIDAR_SENSOR_FR 0 // front right
#define LIDAR_SENSOR_FL 1 // front left
#define LIDAR_SENSOR_RR 2 // rear right
#define LIDAR_SENSOR_RL 3 // rear left

class PositionChanger : public rclcpp::Node
{
public:
    PositionChanger() : Node("position_changer")
    {
        rmw_qos_profile_t qos_profile = rmw_qos_profile_sensor_data;
        auto qos = rclcpp::QoS(rclcpp::QoSInitialization(qos_profile.history, 5), qos_profile);

        this->lidar_subscription = this->create_subscription<object_detection::msg::LidarReading>("/drone/object_detection",qos,  std::bind(&PositionChanger::handle_lidar_message, this, std::placeholders::_1))

    }

    void handle_lidar_message(const object_detection::msg::LidarReading::SharedPtr message)
    {
        this->lidar_sensor_values[0] = message->sensor_1;
        this->lidar_sensor_values[1] = message->sensor_2;
        this->lidar_sensor_values[2] = message->sensor_3;
        this->lidar_sensor_values[3] = message->sensor_4;

        for (int i = 0; i < 4; i++)
        {
            this->lidar_imu_readings[i] = message->imu_data[i];
        }
    }

private:
    rclcpp::Subscription<object_detection::msg::LidarReading> lidar_subscription;
    float lidar_sensor_values[4];
    float lidar_imu_readings[4];
};
int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<PositionChanger>());
    rclcpp::shutdown();
    return 0;
}
