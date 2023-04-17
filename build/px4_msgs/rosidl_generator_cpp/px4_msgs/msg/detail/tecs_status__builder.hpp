// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/TecsStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TECS_STATUS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__TECS_STATUS__BUILDER_HPP_

#include "px4_msgs/msg/detail/tecs_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_TecsStatus_mode
{
public:
  explicit Init_TecsStatus_mode(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::TecsStatus mode(::px4_msgs::msg::TecsStatus::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_pitch_sp_rad
{
public:
  explicit Init_TecsStatus_pitch_sp_rad(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_mode pitch_sp_rad(::px4_msgs::msg::TecsStatus::_pitch_sp_rad_type arg)
  {
    msg_.pitch_sp_rad = std::move(arg);
    return Init_TecsStatus_mode(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_throttle_sp
{
public:
  explicit Init_TecsStatus_throttle_sp(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_pitch_sp_rad throttle_sp(::px4_msgs::msg::TecsStatus::_throttle_sp_type arg)
  {
    msg_.throttle_sp = std::move(arg);
    return Init_TecsStatus_pitch_sp_rad(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_pitch_integ
{
public:
  explicit Init_TecsStatus_pitch_integ(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_throttle_sp pitch_integ(::px4_msgs::msg::TecsStatus::_pitch_integ_type arg)
  {
    msg_.pitch_integ = std::move(arg);
    return Init_TecsStatus_throttle_sp(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_throttle_integ
{
public:
  explicit Init_TecsStatus_throttle_integ(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_pitch_integ throttle_integ(::px4_msgs::msg::TecsStatus::_throttle_integ_type arg)
  {
    msg_.throttle_integ = std::move(arg);
    return Init_TecsStatus_pitch_integ(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_total_energy_balance_rate_sp
{
public:
  explicit Init_TecsStatus_total_energy_balance_rate_sp(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_throttle_integ total_energy_balance_rate_sp(::px4_msgs::msg::TecsStatus::_total_energy_balance_rate_sp_type arg)
  {
    msg_.total_energy_balance_rate_sp = std::move(arg);
    return Init_TecsStatus_throttle_integ(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_total_energy_balance_sp
{
public:
  explicit Init_TecsStatus_total_energy_balance_sp(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_total_energy_balance_rate_sp total_energy_balance_sp(::px4_msgs::msg::TecsStatus::_total_energy_balance_sp_type arg)
  {
    msg_.total_energy_balance_sp = std::move(arg);
    return Init_TecsStatus_total_energy_balance_rate_sp(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_total_energy_rate_sp
{
public:
  explicit Init_TecsStatus_total_energy_rate_sp(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_total_energy_balance_sp total_energy_rate_sp(::px4_msgs::msg::TecsStatus::_total_energy_rate_sp_type arg)
  {
    msg_.total_energy_rate_sp = std::move(arg);
    return Init_TecsStatus_total_energy_balance_sp(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_total_energy_sp
{
public:
  explicit Init_TecsStatus_total_energy_sp(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_total_energy_rate_sp total_energy_sp(::px4_msgs::msg::TecsStatus::_total_energy_sp_type arg)
  {
    msg_.total_energy_sp = std::move(arg);
    return Init_TecsStatus_total_energy_rate_sp(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_total_energy_balance_rate
{
public:
  explicit Init_TecsStatus_total_energy_balance_rate(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_total_energy_sp total_energy_balance_rate(::px4_msgs::msg::TecsStatus::_total_energy_balance_rate_type arg)
  {
    msg_.total_energy_balance_rate = std::move(arg);
    return Init_TecsStatus_total_energy_sp(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_total_energy_balance
{
public:
  explicit Init_TecsStatus_total_energy_balance(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_total_energy_balance_rate total_energy_balance(::px4_msgs::msg::TecsStatus::_total_energy_balance_type arg)
  {
    msg_.total_energy_balance = std::move(arg);
    return Init_TecsStatus_total_energy_balance_rate(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_total_energy_rate
{
public:
  explicit Init_TecsStatus_total_energy_rate(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_total_energy_balance total_energy_rate(::px4_msgs::msg::TecsStatus::_total_energy_rate_type arg)
  {
    msg_.total_energy_rate = std::move(arg);
    return Init_TecsStatus_total_energy_balance(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_total_energy
{
public:
  explicit Init_TecsStatus_total_energy(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_total_energy_rate total_energy(::px4_msgs::msg::TecsStatus::_total_energy_type arg)
  {
    msg_.total_energy = std::move(arg);
    return Init_TecsStatus_total_energy_rate(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_energy_distribution_rate_error
{
public:
  explicit Init_TecsStatus_energy_distribution_rate_error(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_total_energy energy_distribution_rate_error(::px4_msgs::msg::TecsStatus::_energy_distribution_rate_error_type arg)
  {
    msg_.energy_distribution_rate_error = std::move(arg);
    return Init_TecsStatus_total_energy(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_total_energy_rate_error
{
public:
  explicit Init_TecsStatus_total_energy_rate_error(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_energy_distribution_rate_error total_energy_rate_error(::px4_msgs::msg::TecsStatus::_total_energy_rate_error_type arg)
  {
    msg_.total_energy_rate_error = std::move(arg);
    return Init_TecsStatus_energy_distribution_rate_error(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_energy_distribution_error
{
public:
  explicit Init_TecsStatus_energy_distribution_error(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_total_energy_rate_error energy_distribution_error(::px4_msgs::msg::TecsStatus::_energy_distribution_error_type arg)
  {
    msg_.energy_distribution_error = std::move(arg);
    return Init_TecsStatus_total_energy_rate_error(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_total_energy_error
{
public:
  explicit Init_TecsStatus_total_energy_error(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_energy_distribution_error total_energy_error(::px4_msgs::msg::TecsStatus::_total_energy_error_type arg)
  {
    msg_.total_energy_error = std::move(arg);
    return Init_TecsStatus_energy_distribution_error(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_true_airspeed_innovation
{
public:
  explicit Init_TecsStatus_true_airspeed_innovation(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_total_energy_error true_airspeed_innovation(::px4_msgs::msg::TecsStatus::_true_airspeed_innovation_type arg)
  {
    msg_.true_airspeed_innovation = std::move(arg);
    return Init_TecsStatus_total_energy_error(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_true_airspeed_derivative_raw
{
public:
  explicit Init_TecsStatus_true_airspeed_derivative_raw(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_true_airspeed_innovation true_airspeed_derivative_raw(::px4_msgs::msg::TecsStatus::_true_airspeed_derivative_raw_type arg)
  {
    msg_.true_airspeed_derivative_raw = std::move(arg);
    return Init_TecsStatus_true_airspeed_innovation(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_true_airspeed_derivative
{
public:
  explicit Init_TecsStatus_true_airspeed_derivative(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_true_airspeed_derivative_raw true_airspeed_derivative(::px4_msgs::msg::TecsStatus::_true_airspeed_derivative_type arg)
  {
    msg_.true_airspeed_derivative = std::move(arg);
    return Init_TecsStatus_true_airspeed_derivative_raw(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_true_airspeed_derivative_sp
{
public:
  explicit Init_TecsStatus_true_airspeed_derivative_sp(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_true_airspeed_derivative true_airspeed_derivative_sp(::px4_msgs::msg::TecsStatus::_true_airspeed_derivative_sp_type arg)
  {
    msg_.true_airspeed_derivative_sp = std::move(arg);
    return Init_TecsStatus_true_airspeed_derivative(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_true_airspeed_filtered
{
public:
  explicit Init_TecsStatus_true_airspeed_filtered(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_true_airspeed_derivative_sp true_airspeed_filtered(::px4_msgs::msg::TecsStatus::_true_airspeed_filtered_type arg)
  {
    msg_.true_airspeed_filtered = std::move(arg);
    return Init_TecsStatus_true_airspeed_derivative_sp(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_true_airspeed_sp
{
public:
  explicit Init_TecsStatus_true_airspeed_sp(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_true_airspeed_filtered true_airspeed_sp(::px4_msgs::msg::TecsStatus::_true_airspeed_sp_type arg)
  {
    msg_.true_airspeed_sp = std::move(arg);
    return Init_TecsStatus_true_airspeed_filtered(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_equivalent_airspeed_sp
{
public:
  explicit Init_TecsStatus_equivalent_airspeed_sp(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_true_airspeed_sp equivalent_airspeed_sp(::px4_msgs::msg::TecsStatus::_equivalent_airspeed_sp_type arg)
  {
    msg_.equivalent_airspeed_sp = std::move(arg);
    return Init_TecsStatus_true_airspeed_sp(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_height_rate
{
public:
  explicit Init_TecsStatus_height_rate(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_equivalent_airspeed_sp height_rate(::px4_msgs::msg::TecsStatus::_height_rate_type arg)
  {
    msg_.height_rate = std::move(arg);
    return Init_TecsStatus_equivalent_airspeed_sp(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_height_rate_setpoint
{
public:
  explicit Init_TecsStatus_height_rate_setpoint(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_height_rate height_rate_setpoint(::px4_msgs::msg::TecsStatus::_height_rate_setpoint_type arg)
  {
    msg_.height_rate_setpoint = std::move(arg);
    return Init_TecsStatus_height_rate(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_altitude_filtered
{
public:
  explicit Init_TecsStatus_altitude_filtered(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_height_rate_setpoint altitude_filtered(::px4_msgs::msg::TecsStatus::_altitude_filtered_type arg)
  {
    msg_.altitude_filtered = std::move(arg);
    return Init_TecsStatus_height_rate_setpoint(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_altitude_sp
{
public:
  explicit Init_TecsStatus_altitude_sp(::px4_msgs::msg::TecsStatus & msg)
  : msg_(msg)
  {}
  Init_TecsStatus_altitude_filtered altitude_sp(::px4_msgs::msg::TecsStatus::_altitude_sp_type arg)
  {
    msg_.altitude_sp = std::move(arg);
    return Init_TecsStatus_altitude_filtered(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

class Init_TecsStatus_timestamp
{
public:
  Init_TecsStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TecsStatus_altitude_sp timestamp(::px4_msgs::msg::TecsStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_TecsStatus_altitude_sp(msg_);
  }

private:
  ::px4_msgs::msg::TecsStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::TecsStatus>()
{
  return px4_msgs::msg::builder::Init_TecsStatus_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__TECS_STATUS__BUILDER_HPP_
