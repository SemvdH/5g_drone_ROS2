// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/TestMotor.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TEST_MOTOR__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__TEST_MOTOR__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/test_motor__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_TestMotor_driver_instance
{
public:
  explicit Init_TestMotor_driver_instance(::px4_msgs::msg::TestMotor & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::TestMotor driver_instance(::px4_msgs::msg::TestMotor::_driver_instance_type arg)
  {
    msg_.driver_instance = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::TestMotor msg_;
};

class Init_TestMotor_timeout_ms
{
public:
  explicit Init_TestMotor_timeout_ms(::px4_msgs::msg::TestMotor & msg)
  : msg_(msg)
  {}
  Init_TestMotor_driver_instance timeout_ms(::px4_msgs::msg::TestMotor::_timeout_ms_type arg)
  {
    msg_.timeout_ms = std::move(arg);
    return Init_TestMotor_driver_instance(msg_);
  }

private:
  ::px4_msgs::msg::TestMotor msg_;
};

class Init_TestMotor_value
{
public:
  explicit Init_TestMotor_value(::px4_msgs::msg::TestMotor & msg)
  : msg_(msg)
  {}
  Init_TestMotor_timeout_ms value(::px4_msgs::msg::TestMotor::_value_type arg)
  {
    msg_.value = std::move(arg);
    return Init_TestMotor_timeout_ms(msg_);
  }

private:
  ::px4_msgs::msg::TestMotor msg_;
};

class Init_TestMotor_motor_number
{
public:
  explicit Init_TestMotor_motor_number(::px4_msgs::msg::TestMotor & msg)
  : msg_(msg)
  {}
  Init_TestMotor_value motor_number(::px4_msgs::msg::TestMotor::_motor_number_type arg)
  {
    msg_.motor_number = std::move(arg);
    return Init_TestMotor_value(msg_);
  }

private:
  ::px4_msgs::msg::TestMotor msg_;
};

class Init_TestMotor_action
{
public:
  explicit Init_TestMotor_action(::px4_msgs::msg::TestMotor & msg)
  : msg_(msg)
  {}
  Init_TestMotor_motor_number action(::px4_msgs::msg::TestMotor::_action_type arg)
  {
    msg_.action = std::move(arg);
    return Init_TestMotor_motor_number(msg_);
  }

private:
  ::px4_msgs::msg::TestMotor msg_;
};

class Init_TestMotor_timestamp
{
public:
  Init_TestMotor_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TestMotor_action timestamp(::px4_msgs::msg::TestMotor::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_TestMotor_action(msg_);
  }

private:
  ::px4_msgs::msg::TestMotor msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::TestMotor>()
{
  return px4_msgs::msg::builder::Init_TestMotor_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__TEST_MOTOR__BUILDER_HPP_
