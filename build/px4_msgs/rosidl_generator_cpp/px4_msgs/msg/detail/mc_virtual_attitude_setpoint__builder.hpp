// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/McVirtualAttitudeSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__MC_VIRTUAL_ATTITUDE_SETPOINT__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__MC_VIRTUAL_ATTITUDE_SETPOINT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/mc_virtual_attitude_setpoint__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_McVirtualAttitudeSetpoint_apply_flaps
{
public:
  explicit Init_McVirtualAttitudeSetpoint_apply_flaps(::px4_msgs::msg::McVirtualAttitudeSetpoint & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::McVirtualAttitudeSetpoint apply_flaps(::px4_msgs::msg::McVirtualAttitudeSetpoint::_apply_flaps_type arg)
  {
    msg_.apply_flaps = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::McVirtualAttitudeSetpoint msg_;
};

class Init_McVirtualAttitudeSetpoint_fw_control_yaw
{
public:
  explicit Init_McVirtualAttitudeSetpoint_fw_control_yaw(::px4_msgs::msg::McVirtualAttitudeSetpoint & msg)
  : msg_(msg)
  {}
  Init_McVirtualAttitudeSetpoint_apply_flaps fw_control_yaw(::px4_msgs::msg::McVirtualAttitudeSetpoint::_fw_control_yaw_type arg)
  {
    msg_.fw_control_yaw = std::move(arg);
    return Init_McVirtualAttitudeSetpoint_apply_flaps(msg_);
  }

private:
  ::px4_msgs::msg::McVirtualAttitudeSetpoint msg_;
};

class Init_McVirtualAttitudeSetpoint_yaw_reset_integral
{
public:
  explicit Init_McVirtualAttitudeSetpoint_yaw_reset_integral(::px4_msgs::msg::McVirtualAttitudeSetpoint & msg)
  : msg_(msg)
  {}
  Init_McVirtualAttitudeSetpoint_fw_control_yaw yaw_reset_integral(::px4_msgs::msg::McVirtualAttitudeSetpoint::_yaw_reset_integral_type arg)
  {
    msg_.yaw_reset_integral = std::move(arg);
    return Init_McVirtualAttitudeSetpoint_fw_control_yaw(msg_);
  }

private:
  ::px4_msgs::msg::McVirtualAttitudeSetpoint msg_;
};

class Init_McVirtualAttitudeSetpoint_pitch_reset_integral
{
public:
  explicit Init_McVirtualAttitudeSetpoint_pitch_reset_integral(::px4_msgs::msg::McVirtualAttitudeSetpoint & msg)
  : msg_(msg)
  {}
  Init_McVirtualAttitudeSetpoint_yaw_reset_integral pitch_reset_integral(::px4_msgs::msg::McVirtualAttitudeSetpoint::_pitch_reset_integral_type arg)
  {
    msg_.pitch_reset_integral = std::move(arg);
    return Init_McVirtualAttitudeSetpoint_yaw_reset_integral(msg_);
  }

private:
  ::px4_msgs::msg::McVirtualAttitudeSetpoint msg_;
};

class Init_McVirtualAttitudeSetpoint_roll_reset_integral
{
public:
  explicit Init_McVirtualAttitudeSetpoint_roll_reset_integral(::px4_msgs::msg::McVirtualAttitudeSetpoint & msg)
  : msg_(msg)
  {}
  Init_McVirtualAttitudeSetpoint_pitch_reset_integral roll_reset_integral(::px4_msgs::msg::McVirtualAttitudeSetpoint::_roll_reset_integral_type arg)
  {
    msg_.roll_reset_integral = std::move(arg);
    return Init_McVirtualAttitudeSetpoint_pitch_reset_integral(msg_);
  }

private:
  ::px4_msgs::msg::McVirtualAttitudeSetpoint msg_;
};

class Init_McVirtualAttitudeSetpoint_thrust_body
{
public:
  explicit Init_McVirtualAttitudeSetpoint_thrust_body(::px4_msgs::msg::McVirtualAttitudeSetpoint & msg)
  : msg_(msg)
  {}
  Init_McVirtualAttitudeSetpoint_roll_reset_integral thrust_body(::px4_msgs::msg::McVirtualAttitudeSetpoint::_thrust_body_type arg)
  {
    msg_.thrust_body = std::move(arg);
    return Init_McVirtualAttitudeSetpoint_roll_reset_integral(msg_);
  }

private:
  ::px4_msgs::msg::McVirtualAttitudeSetpoint msg_;
};

class Init_McVirtualAttitudeSetpoint_q_d
{
public:
  explicit Init_McVirtualAttitudeSetpoint_q_d(::px4_msgs::msg::McVirtualAttitudeSetpoint & msg)
  : msg_(msg)
  {}
  Init_McVirtualAttitudeSetpoint_thrust_body q_d(::px4_msgs::msg::McVirtualAttitudeSetpoint::_q_d_type arg)
  {
    msg_.q_d = std::move(arg);
    return Init_McVirtualAttitudeSetpoint_thrust_body(msg_);
  }

private:
  ::px4_msgs::msg::McVirtualAttitudeSetpoint msg_;
};

class Init_McVirtualAttitudeSetpoint_yaw_sp_move_rate
{
public:
  explicit Init_McVirtualAttitudeSetpoint_yaw_sp_move_rate(::px4_msgs::msg::McVirtualAttitudeSetpoint & msg)
  : msg_(msg)
  {}
  Init_McVirtualAttitudeSetpoint_q_d yaw_sp_move_rate(::px4_msgs::msg::McVirtualAttitudeSetpoint::_yaw_sp_move_rate_type arg)
  {
    msg_.yaw_sp_move_rate = std::move(arg);
    return Init_McVirtualAttitudeSetpoint_q_d(msg_);
  }

private:
  ::px4_msgs::msg::McVirtualAttitudeSetpoint msg_;
};

class Init_McVirtualAttitudeSetpoint_yaw_body
{
public:
  explicit Init_McVirtualAttitudeSetpoint_yaw_body(::px4_msgs::msg::McVirtualAttitudeSetpoint & msg)
  : msg_(msg)
  {}
  Init_McVirtualAttitudeSetpoint_yaw_sp_move_rate yaw_body(::px4_msgs::msg::McVirtualAttitudeSetpoint::_yaw_body_type arg)
  {
    msg_.yaw_body = std::move(arg);
    return Init_McVirtualAttitudeSetpoint_yaw_sp_move_rate(msg_);
  }

private:
  ::px4_msgs::msg::McVirtualAttitudeSetpoint msg_;
};

class Init_McVirtualAttitudeSetpoint_pitch_body
{
public:
  explicit Init_McVirtualAttitudeSetpoint_pitch_body(::px4_msgs::msg::McVirtualAttitudeSetpoint & msg)
  : msg_(msg)
  {}
  Init_McVirtualAttitudeSetpoint_yaw_body pitch_body(::px4_msgs::msg::McVirtualAttitudeSetpoint::_pitch_body_type arg)
  {
    msg_.pitch_body = std::move(arg);
    return Init_McVirtualAttitudeSetpoint_yaw_body(msg_);
  }

private:
  ::px4_msgs::msg::McVirtualAttitudeSetpoint msg_;
};

class Init_McVirtualAttitudeSetpoint_roll_body
{
public:
  explicit Init_McVirtualAttitudeSetpoint_roll_body(::px4_msgs::msg::McVirtualAttitudeSetpoint & msg)
  : msg_(msg)
  {}
  Init_McVirtualAttitudeSetpoint_pitch_body roll_body(::px4_msgs::msg::McVirtualAttitudeSetpoint::_roll_body_type arg)
  {
    msg_.roll_body = std::move(arg);
    return Init_McVirtualAttitudeSetpoint_pitch_body(msg_);
  }

private:
  ::px4_msgs::msg::McVirtualAttitudeSetpoint msg_;
};

class Init_McVirtualAttitudeSetpoint_timestamp
{
public:
  Init_McVirtualAttitudeSetpoint_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_McVirtualAttitudeSetpoint_roll_body timestamp(::px4_msgs::msg::McVirtualAttitudeSetpoint::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_McVirtualAttitudeSetpoint_roll_body(msg_);
  }

private:
  ::px4_msgs::msg::McVirtualAttitudeSetpoint msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::McVirtualAttitudeSetpoint>()
{
  return px4_msgs::msg::builder::Init_McVirtualAttitudeSetpoint_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__MC_VIRTUAL_ATTITUDE_SETPOINT__BUILDER_HPP_
