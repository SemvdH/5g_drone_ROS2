#include "rclcpp/rclcpp.hpp"

#include "px4_msgs/msg/VehicleOdometry.msg"
#include "object_detection/msg/LidarReading.msg"
#include "height/msg/HeightData.msg"
#include "drone_services/srv/SetVehicleControl.srv"
#include "drone_services/srv/SetTrajectory/srv"

#define _USE_MATH_DEFINES
#include <cmath>

#define LIDAR_SENSOR_FR 0 // front right
#define LIDAR_SENSOR_FL 1 // front left
#define LIDAR_SENSOR_RL 2 // rear left
#define LIDAR_SENSOR_RR 3 // rear right

#define MOVE_DIRECTION_FRONT 0 // front right
#define MOVE_DIRECTION_LEFT 1  // front left
#define MOVE_DIRECTION_BACK 2  // rear left
#define MOVE_DIRECTION_RIGHT 3 // rear right

#define MIN_DISTANCE 1.0 // in meters

struct Quaternion
{
    float w, x, y, z;
};

class PositionChanger : public rclcpp::Node
{
public:
    PositionChanger() : Node("position_changer")
    {
        rmw_qos_profile_t qos_profile = rmw_qos_profile_sensor_data;
        auto qos = rclcpp::QoS(rclcpp::QoSInitialization(qos_profile.history, 5), qos_profile);

        this->lidar_subscription = this->create_subscription<object_detection::msg::LidarReading>("/drone/object_detection", qos, std::bind(&PositionChanger::handle_lidar_message, this, std::placeholders::_1)) this->odometry_subscription = this->create_subscription<px4_msgs::msg::VehicleOdometry>("/fmu/out/vehicle_odometry", qos, std::bind(&PositionChanger::handle_odometry_message, this, std::placeholders::_1));
    }

    /**
     * @brief checks for every direction is an object is too close and if we can move in that direction.
     * If the object is too close to the drone, calculate the amount we need to move away from it
     */
    void check_move_direction_allowed()
    {
        this->move_direction_allowed[MOVE_DIRECTION_FRONT] = this->lidar_sensor_values[LIDAR_SENSOR_FR] > MIN_DISTANCE && this->lidar_sensor_values[LIDAR_SENSOR_FL] > MIN_DISTANCE;
        this->move_direction_allowed[MOVE_DIRECTION_LEFT] = this->lidar_sensor_values[LIDAR_SENSOR_FL] > MIN_DISTANCE && this->lidar_sensor_values[LIDAR_SENSOR_RL] > MIN_DISTANCE;
        this->move_direction_allowed[MOVE_DIRECTION_BACK] = this->lidar_sensor_values[LIDAR_SENSOR_RL] > MIN_DISTANCE && this->lidar_sensor_values[LIDAR_SENSOR_RR] > MIN_DISTANCE;
        this->move_direction_allowed[MOVE_DIRECTION_RIGHT] = this->lidar_sensor_values[LIDAR_SENSOR_RR] > MIN_DISTANCE && this->lidar_sensor_values[LIDAR_SENSOR_FR] > MIN_DISTANCE;

        // calculate the amount we need to move away from the object to be at the minimum distance
        collision_prevention_weights[MOVE_DIRECTION_FRONT] = this->move_direction_allowed[MOVE_DIRECTION_FRONT] ? 0
                : -(MIN_DISTANCE - std::min(this->lidar_sensor_values[LIDAR_SENSOR_FR], this->lidar_sensor_values[LIDAR_SENSOR_FL]));
        collision_prevention_weights[MOVE_DIRECTION_LEFT] = this->move_direction_allowed[MOVE_DIRECTION_LEFT] ? 0
                : -(MIN_DISTANCE - std::min(this->lidar_sensor_values[LIDAR_SENSOR_FL], this->lidar_sensor_values[LIDAR_SENSOR_RL]));
        collision_prevention_weights[MOVE_DIRECTION_BACK] = this->move_direction_allowed[MOVE_DIRECTION_BACK] ? 0
                : -(MIN_DISTANCE - std::min(this->lidar_sensor_values[LIDAR_SENSOR_RL], this->lidar_sensor_values[LIDAR_SENSOR_RR]));
        collision_prevention_weights[MOVE_DIRECTION_RIGHT] = this->move_direction_allowed[MOVE_DIRECTION_RIGHT] ? 0
                : -(MIN_DISTANCE - std::min(this->lidar_sensor_values[LIDAR_SENSOR_RR], this->lidar_sensor_values[LIDAR_SENSOR_FR]));
    }

    void handle_lidar_message(const object_detection::msg::LidarReading::SharedPtr message)
    {

        if (message->sensor_1 > 0)
        {
            this->lidar_sensor_values[LIDAR_SENSOR_FR] = message->sensor_1;
        }
        if (message->sensor_2 > 0)
        {
            this->lidar_sensor_values[LIDAR_SENSOR_FL] = message->sensor_2;
        }
        if (message->sensor_3 > 0)
        {
            this->lidar_sensor_values[LIDAR_SENSOR_RL] = message->sensor_3;
        }
        if (message->sensor_4 > 0)
        {
            this->lidar_sensor_values[LIDAR_SENSOR_RR] = message->sensor_4;
        }

        for (int i = 0; i < 4; i++)
        {
            this->lidar_imu_readings[i] = message->imu_data[i];
        }

        check_move_direction_allowed();
    }

    void handle_odometry_message(const px4_msgs::msg::VehicleOdometry::SharedPtr message)
    {
        Quaternion q = {message->q[0], message->q[1], message->q[2], message->q[3]};
        odometry_yaw = get_yaw_angle(q);
    }

    /**
     * @brief Get the yaw angle from a specified normalized quaternion.
     * Uses the theory from https://en.wikipedia.org/wiki/Conversion_between_quaternions_and_Euler_angles
     *
     * @param q the quaternion that holds the rotation
     * @return the yaw angle in radians
     */
    static float get_yaw_angle(Quaternion q)
    {
        float siny_cosp = 2 * (q.w * q.z + q.x * q.y);
        float cosy_cosp = 1 - 2 * (q.y * q.y + q.z * q.z);
        return std::atan2(siny_cosp, cosy_cosp);
    }

    /**
     * @brief Get the new x and y coordinates after a rotation of yaw radians
     *
     * @param x the original x coordinate
     * @param y the original y coordinate
     * @param yaw the angle to rotate by in radians
     * @param x_out the resulting x coordinate
     * @param y_out the resulting y coordinate
     */
    static void get_x_y_with_rotation(float x, float y, float yaw, float &x_out, float &y_out)
    {
        x_out = x * std::cos(yaw) - y * std::sin(yaw);
        y_out = x * std::sin(yaw) + y * std::cos(yaw);
    }

private:
    rclcpp::Subscription<object_detection::msg::LidarReading> lidar_subscription;
    rclcpp::Subscription<px4_msgs::msg::VehicleOdometry> odometry_subscription;
    float lidar_sensor_values[4]; // last distance measured by the lidar sensors
    float lidar_imu_readings[4];  // last imu readings from the lidar sensors
    float currrent_yaw = 0;       // in radians
    float current_x_speed = 0;
    float current_y_speed = 0;
    float current_z_speed = 0;
    bool move_direction_allowed[4] = {true};
    float collision_prevention_weights[4] = {0};
};
int main(int argc, char *argv[])
{
    rclcpp::init(argc, argv);
    rclcpp::spin(std::make_shared<PositionChanger>());
    rclcpp::shutdown();
    return 0;
}
