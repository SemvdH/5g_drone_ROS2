// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/TrajectorySetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TRAJECTORY_SETPOINT__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__TRAJECTORY_SETPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/trajectory_setpoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_TrajectorySetpoint_thrust
{
public:
  explicit Init_TrajectorySetpoint_thrust(::px4_msgs::msg::TrajectorySetpoint & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::TrajectorySetpoint thrust(::px4_msgs::msg::TrajectorySetpoint::_thrust_type arg)
  {
    msg_.thrust = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::TrajectorySetpoint msg_;
};

class Init_TrajectorySetpoint_jerk
{
public:
  explicit Init_TrajectorySetpoint_jerk(::px4_msgs::msg::TrajectorySetpoint & msg)
  : msg_(msg)
  {}
  Init_TrajectorySetpoint_thrust jerk(::px4_msgs::msg::TrajectorySetpoint::_jerk_type arg)
  {
    msg_.jerk = std::move(arg);
    return Init_TrajectorySetpoint_thrust(msg_);
  }

private:
  ::px4_msgs::msg::TrajectorySetpoint msg_;
};

class Init_TrajectorySetpoint_acceleration
{
public:
  explicit Init_TrajectorySetpoint_acceleration(::px4_msgs::msg::TrajectorySetpoint & msg)
  : msg_(msg)
  {}
  Init_TrajectorySetpoint_jerk acceleration(::px4_msgs::msg::TrajectorySetpoint::_acceleration_type arg)
  {
    msg_.acceleration = std::move(arg);
    return Init_TrajectorySetpoint_jerk(msg_);
  }

private:
  ::px4_msgs::msg::TrajectorySetpoint msg_;
};

class Init_TrajectorySetpoint_vz
{
public:
  explicit Init_TrajectorySetpoint_vz(::px4_msgs::msg::TrajectorySetpoint & msg)
  : msg_(msg)
  {}
  Init_TrajectorySetpoint_acceleration vz(::px4_msgs::msg::TrajectorySetpoint::_vz_type arg)
  {
    msg_.vz = std::move(arg);
    return Init_TrajectorySetpoint_acceleration(msg_);
  }

private:
  ::px4_msgs::msg::TrajectorySetpoint msg_;
};

class Init_TrajectorySetpoint_vy
{
public:
  explicit Init_TrajectorySetpoint_vy(::px4_msgs::msg::TrajectorySetpoint & msg)
  : msg_(msg)
  {}
  Init_TrajectorySetpoint_vz vy(::px4_msgs::msg::TrajectorySetpoint::_vy_type arg)
  {
    msg_.vy = std::move(arg);
    return Init_TrajectorySetpoint_vz(msg_);
  }

private:
  ::px4_msgs::msg::TrajectorySetpoint msg_;
};

class Init_TrajectorySetpoint_vx
{
public:
  explicit Init_TrajectorySetpoint_vx(::px4_msgs::msg::TrajectorySetpoint & msg)
  : msg_(msg)
  {}
  Init_TrajectorySetpoint_vy vx(::px4_msgs::msg::TrajectorySetpoint::_vx_type arg)
  {
    msg_.vx = std::move(arg);
    return Init_TrajectorySetpoint_vy(msg_);
  }

private:
  ::px4_msgs::msg::TrajectorySetpoint msg_;
};

class Init_TrajectorySetpoint_yawspeed
{
public:
  explicit Init_TrajectorySetpoint_yawspeed(::px4_msgs::msg::TrajectorySetpoint & msg)
  : msg_(msg)
  {}
  Init_TrajectorySetpoint_vx yawspeed(::px4_msgs::msg::TrajectorySetpoint::_yawspeed_type arg)
  {
    msg_.yawspeed = std::move(arg);
    return Init_TrajectorySetpoint_vx(msg_);
  }

private:
  ::px4_msgs::msg::TrajectorySetpoint msg_;
};

class Init_TrajectorySetpoint_yaw
{
public:
  explicit Init_TrajectorySetpoint_yaw(::px4_msgs::msg::TrajectorySetpoint & msg)
  : msg_(msg)
  {}
  Init_TrajectorySetpoint_yawspeed yaw(::px4_msgs::msg::TrajectorySetpoint::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_TrajectorySetpoint_yawspeed(msg_);
  }

private:
  ::px4_msgs::msg::TrajectorySetpoint msg_;
};

class Init_TrajectorySetpoint_z
{
public:
  explicit Init_TrajectorySetpoint_z(::px4_msgs::msg::TrajectorySetpoint & msg)
  : msg_(msg)
  {}
  Init_TrajectorySetpoint_yaw z(::px4_msgs::msg::TrajectorySetpoint::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_TrajectorySetpoint_yaw(msg_);
  }

private:
  ::px4_msgs::msg::TrajectorySetpoint msg_;
};

class Init_TrajectorySetpoint_y
{
public:
  explicit Init_TrajectorySetpoint_y(::px4_msgs::msg::TrajectorySetpoint & msg)
  : msg_(msg)
  {}
  Init_TrajectorySetpoint_z y(::px4_msgs::msg::TrajectorySetpoint::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_TrajectorySetpoint_z(msg_);
  }

private:
  ::px4_msgs::msg::TrajectorySetpoint msg_;
};

class Init_TrajectorySetpoint_x
{
public:
  explicit Init_TrajectorySetpoint_x(::px4_msgs::msg::TrajectorySetpoint & msg)
  : msg_(msg)
  {}
  Init_TrajectorySetpoint_y x(::px4_msgs::msg::TrajectorySetpoint::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_TrajectorySetpoint_y(msg_);
  }

private:
  ::px4_msgs::msg::TrajectorySetpoint msg_;
};

class Init_TrajectorySetpoint_timestamp
{
public:
  Init_TrajectorySetpoint_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectorySetpoint_x timestamp(::px4_msgs::msg::TrajectorySetpoint::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_TrajectorySetpoint_x(msg_);
  }

private:
  ::px4_msgs::msg::TrajectorySetpoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::TrajectorySetpoint>()
{
  return px4_msgs::msg::builder::Init_TrajectorySetpoint_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__TRAJECTORY_SETPOINT__BUILDER_HPP_
