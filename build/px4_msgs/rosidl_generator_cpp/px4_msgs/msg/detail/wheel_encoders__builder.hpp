// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/WheelEncoders.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__WHEEL_ENCODERS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__WHEEL_ENCODERS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/wheel_encoders__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_WheelEncoders_pulses_per_rev
{
public:
  explicit Init_WheelEncoders_pulses_per_rev(::px4_msgs::msg::WheelEncoders & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::WheelEncoders pulses_per_rev(::px4_msgs::msg::WheelEncoders::_pulses_per_rev_type arg)
  {
    msg_.pulses_per_rev = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::WheelEncoders msg_;
};

class Init_WheelEncoders_speed
{
public:
  explicit Init_WheelEncoders_speed(::px4_msgs::msg::WheelEncoders & msg)
  : msg_(msg)
  {}
  Init_WheelEncoders_pulses_per_rev speed(::px4_msgs::msg::WheelEncoders::_speed_type arg)
  {
    msg_.speed = std::move(arg);
    return Init_WheelEncoders_pulses_per_rev(msg_);
  }

private:
  ::px4_msgs::msg::WheelEncoders msg_;
};

class Init_WheelEncoders_encoder_position
{
public:
  explicit Init_WheelEncoders_encoder_position(::px4_msgs::msg::WheelEncoders & msg)
  : msg_(msg)
  {}
  Init_WheelEncoders_speed encoder_position(::px4_msgs::msg::WheelEncoders::_encoder_position_type arg)
  {
    msg_.encoder_position = std::move(arg);
    return Init_WheelEncoders_speed(msg_);
  }

private:
  ::px4_msgs::msg::WheelEncoders msg_;
};

class Init_WheelEncoders_timestamp
{
public:
  Init_WheelEncoders_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_WheelEncoders_encoder_position timestamp(::px4_msgs::msg::WheelEncoders::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_WheelEncoders_encoder_position(msg_);
  }

private:
  ::px4_msgs::msg::WheelEncoders msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::WheelEncoders>()
{
  return px4_msgs::msg::builder::Init_WheelEncoders_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__WHEEL_ENCODERS__BUILDER_HPP_
