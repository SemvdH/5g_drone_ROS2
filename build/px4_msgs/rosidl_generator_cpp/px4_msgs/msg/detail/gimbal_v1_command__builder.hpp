// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/GimbalV1Command.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__GIMBAL_V1_COMMAND__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__GIMBAL_V1_COMMAND__BUILDER_HPP_

#include "px4_msgs/msg/detail/gimbal_v1_command__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_GimbalV1Command_from_external
{
public:
  explicit Init_GimbalV1Command_from_external(::px4_msgs::msg::GimbalV1Command & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::GimbalV1Command from_external(::px4_msgs::msg::GimbalV1Command::_from_external_type arg)
  {
    msg_.from_external = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::GimbalV1Command msg_;
};

class Init_GimbalV1Command_confirmation
{
public:
  explicit Init_GimbalV1Command_confirmation(::px4_msgs::msg::GimbalV1Command & msg)
  : msg_(msg)
  {}
  Init_GimbalV1Command_from_external confirmation(::px4_msgs::msg::GimbalV1Command::_confirmation_type arg)
  {
    msg_.confirmation = std::move(arg);
    return Init_GimbalV1Command_from_external(msg_);
  }

private:
  ::px4_msgs::msg::GimbalV1Command msg_;
};

class Init_GimbalV1Command_source_component
{
public:
  explicit Init_GimbalV1Command_source_component(::px4_msgs::msg::GimbalV1Command & msg)
  : msg_(msg)
  {}
  Init_GimbalV1Command_confirmation source_component(::px4_msgs::msg::GimbalV1Command::_source_component_type arg)
  {
    msg_.source_component = std::move(arg);
    return Init_GimbalV1Command_confirmation(msg_);
  }

private:
  ::px4_msgs::msg::GimbalV1Command msg_;
};

class Init_GimbalV1Command_source_system
{
public:
  explicit Init_GimbalV1Command_source_system(::px4_msgs::msg::GimbalV1Command & msg)
  : msg_(msg)
  {}
  Init_GimbalV1Command_source_component source_system(::px4_msgs::msg::GimbalV1Command::_source_system_type arg)
  {
    msg_.source_system = std::move(arg);
    return Init_GimbalV1Command_source_component(msg_);
  }

private:
  ::px4_msgs::msg::GimbalV1Command msg_;
};

class Init_GimbalV1Command_target_component
{
public:
  explicit Init_GimbalV1Command_target_component(::px4_msgs::msg::GimbalV1Command & msg)
  : msg_(msg)
  {}
  Init_GimbalV1Command_source_system target_component(::px4_msgs::msg::GimbalV1Command::_target_component_type arg)
  {
    msg_.target_component = std::move(arg);
    return Init_GimbalV1Command_source_system(msg_);
  }

private:
  ::px4_msgs::msg::GimbalV1Command msg_;
};

class Init_GimbalV1Command_target_system
{
public:
  explicit Init_GimbalV1Command_target_system(::px4_msgs::msg::GimbalV1Command & msg)
  : msg_(msg)
  {}
  Init_GimbalV1Command_target_component target_system(::px4_msgs::msg::GimbalV1Command::_target_system_type arg)
  {
    msg_.target_system = std::move(arg);
    return Init_GimbalV1Command_target_component(msg_);
  }

private:
  ::px4_msgs::msg::GimbalV1Command msg_;
};

class Init_GimbalV1Command_command
{
public:
  explicit Init_GimbalV1Command_command(::px4_msgs::msg::GimbalV1Command & msg)
  : msg_(msg)
  {}
  Init_GimbalV1Command_target_system command(::px4_msgs::msg::GimbalV1Command::_command_type arg)
  {
    msg_.command = std::move(arg);
    return Init_GimbalV1Command_target_system(msg_);
  }

private:
  ::px4_msgs::msg::GimbalV1Command msg_;
};

class Init_GimbalV1Command_param7
{
public:
  explicit Init_GimbalV1Command_param7(::px4_msgs::msg::GimbalV1Command & msg)
  : msg_(msg)
  {}
  Init_GimbalV1Command_command param7(::px4_msgs::msg::GimbalV1Command::_param7_type arg)
  {
    msg_.param7 = std::move(arg);
    return Init_GimbalV1Command_command(msg_);
  }

private:
  ::px4_msgs::msg::GimbalV1Command msg_;
};

class Init_GimbalV1Command_param6
{
public:
  explicit Init_GimbalV1Command_param6(::px4_msgs::msg::GimbalV1Command & msg)
  : msg_(msg)
  {}
  Init_GimbalV1Command_param7 param6(::px4_msgs::msg::GimbalV1Command::_param6_type arg)
  {
    msg_.param6 = std::move(arg);
    return Init_GimbalV1Command_param7(msg_);
  }

private:
  ::px4_msgs::msg::GimbalV1Command msg_;
};

class Init_GimbalV1Command_param5
{
public:
  explicit Init_GimbalV1Command_param5(::px4_msgs::msg::GimbalV1Command & msg)
  : msg_(msg)
  {}
  Init_GimbalV1Command_param6 param5(::px4_msgs::msg::GimbalV1Command::_param5_type arg)
  {
    msg_.param5 = std::move(arg);
    return Init_GimbalV1Command_param6(msg_);
  }

private:
  ::px4_msgs::msg::GimbalV1Command msg_;
};

class Init_GimbalV1Command_param4
{
public:
  explicit Init_GimbalV1Command_param4(::px4_msgs::msg::GimbalV1Command & msg)
  : msg_(msg)
  {}
  Init_GimbalV1Command_param5 param4(::px4_msgs::msg::GimbalV1Command::_param4_type arg)
  {
    msg_.param4 = std::move(arg);
    return Init_GimbalV1Command_param5(msg_);
  }

private:
  ::px4_msgs::msg::GimbalV1Command msg_;
};

class Init_GimbalV1Command_param3
{
public:
  explicit Init_GimbalV1Command_param3(::px4_msgs::msg::GimbalV1Command & msg)
  : msg_(msg)
  {}
  Init_GimbalV1Command_param4 param3(::px4_msgs::msg::GimbalV1Command::_param3_type arg)
  {
    msg_.param3 = std::move(arg);
    return Init_GimbalV1Command_param4(msg_);
  }

private:
  ::px4_msgs::msg::GimbalV1Command msg_;
};

class Init_GimbalV1Command_param2
{
public:
  explicit Init_GimbalV1Command_param2(::px4_msgs::msg::GimbalV1Command & msg)
  : msg_(msg)
  {}
  Init_GimbalV1Command_param3 param2(::px4_msgs::msg::GimbalV1Command::_param2_type arg)
  {
    msg_.param2 = std::move(arg);
    return Init_GimbalV1Command_param3(msg_);
  }

private:
  ::px4_msgs::msg::GimbalV1Command msg_;
};

class Init_GimbalV1Command_param1
{
public:
  explicit Init_GimbalV1Command_param1(::px4_msgs::msg::GimbalV1Command & msg)
  : msg_(msg)
  {}
  Init_GimbalV1Command_param2 param1(::px4_msgs::msg::GimbalV1Command::_param1_type arg)
  {
    msg_.param1 = std::move(arg);
    return Init_GimbalV1Command_param2(msg_);
  }

private:
  ::px4_msgs::msg::GimbalV1Command msg_;
};

class Init_GimbalV1Command_timestamp
{
public:
  Init_GimbalV1Command_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_GimbalV1Command_param1 timestamp(::px4_msgs::msg::GimbalV1Command::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_GimbalV1Command_param1(msg_);
  }

private:
  ::px4_msgs::msg::GimbalV1Command msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::GimbalV1Command>()
{
  return px4_msgs::msg::builder::Init_GimbalV1Command_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__GIMBAL_V1_COMMAND__BUILDER_HPP_
