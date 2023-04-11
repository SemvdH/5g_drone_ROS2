// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/ManualControlInput.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__MANUAL_CONTROL_INPUT__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__MANUAL_CONTROL_INPUT__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/manual_control_input__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_ManualControlInput_sticks_moving
{
public:
  explicit Init_ManualControlInput_sticks_moving(::px4_msgs::msg::ManualControlInput & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::ManualControlInput sticks_moving(::px4_msgs::msg::ManualControlInput::_sticks_moving_type arg)
  {
    msg_.sticks_moving = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::ManualControlInput msg_;
};

class Init_ManualControlInput_aux6
{
public:
  explicit Init_ManualControlInput_aux6(::px4_msgs::msg::ManualControlInput & msg)
  : msg_(msg)
  {}
  Init_ManualControlInput_sticks_moving aux6(::px4_msgs::msg::ManualControlInput::_aux6_type arg)
  {
    msg_.aux6 = std::move(arg);
    return Init_ManualControlInput_sticks_moving(msg_);
  }

private:
  ::px4_msgs::msg::ManualControlInput msg_;
};

class Init_ManualControlInput_aux5
{
public:
  explicit Init_ManualControlInput_aux5(::px4_msgs::msg::ManualControlInput & msg)
  : msg_(msg)
  {}
  Init_ManualControlInput_aux6 aux5(::px4_msgs::msg::ManualControlInput::_aux5_type arg)
  {
    msg_.aux5 = std::move(arg);
    return Init_ManualControlInput_aux6(msg_);
  }

private:
  ::px4_msgs::msg::ManualControlInput msg_;
};

class Init_ManualControlInput_aux4
{
public:
  explicit Init_ManualControlInput_aux4(::px4_msgs::msg::ManualControlInput & msg)
  : msg_(msg)
  {}
  Init_ManualControlInput_aux5 aux4(::px4_msgs::msg::ManualControlInput::_aux4_type arg)
  {
    msg_.aux4 = std::move(arg);
    return Init_ManualControlInput_aux5(msg_);
  }

private:
  ::px4_msgs::msg::ManualControlInput msg_;
};

class Init_ManualControlInput_aux3
{
public:
  explicit Init_ManualControlInput_aux3(::px4_msgs::msg::ManualControlInput & msg)
  : msg_(msg)
  {}
  Init_ManualControlInput_aux4 aux3(::px4_msgs::msg::ManualControlInput::_aux3_type arg)
  {
    msg_.aux3 = std::move(arg);
    return Init_ManualControlInput_aux4(msg_);
  }

private:
  ::px4_msgs::msg::ManualControlInput msg_;
};

class Init_ManualControlInput_aux2
{
public:
  explicit Init_ManualControlInput_aux2(::px4_msgs::msg::ManualControlInput & msg)
  : msg_(msg)
  {}
  Init_ManualControlInput_aux3 aux2(::px4_msgs::msg::ManualControlInput::_aux2_type arg)
  {
    msg_.aux2 = std::move(arg);
    return Init_ManualControlInput_aux3(msg_);
  }

private:
  ::px4_msgs::msg::ManualControlInput msg_;
};

class Init_ManualControlInput_aux1
{
public:
  explicit Init_ManualControlInput_aux1(::px4_msgs::msg::ManualControlInput & msg)
  : msg_(msg)
  {}
  Init_ManualControlInput_aux2 aux1(::px4_msgs::msg::ManualControlInput::_aux1_type arg)
  {
    msg_.aux1 = std::move(arg);
    return Init_ManualControlInput_aux2(msg_);
  }

private:
  ::px4_msgs::msg::ManualControlInput msg_;
};

class Init_ManualControlInput_flaps
{
public:
  explicit Init_ManualControlInput_flaps(::px4_msgs::msg::ManualControlInput & msg)
  : msg_(msg)
  {}
  Init_ManualControlInput_aux1 flaps(::px4_msgs::msg::ManualControlInput::_flaps_type arg)
  {
    msg_.flaps = std::move(arg);
    return Init_ManualControlInput_aux1(msg_);
  }

private:
  ::px4_msgs::msg::ManualControlInput msg_;
};

class Init_ManualControlInput_r
{
public:
  explicit Init_ManualControlInput_r(::px4_msgs::msg::ManualControlInput & msg)
  : msg_(msg)
  {}
  Init_ManualControlInput_flaps r(::px4_msgs::msg::ManualControlInput::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_ManualControlInput_flaps(msg_);
  }

private:
  ::px4_msgs::msg::ManualControlInput msg_;
};

class Init_ManualControlInput_z
{
public:
  explicit Init_ManualControlInput_z(::px4_msgs::msg::ManualControlInput & msg)
  : msg_(msg)
  {}
  Init_ManualControlInput_r z(::px4_msgs::msg::ManualControlInput::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_ManualControlInput_r(msg_);
  }

private:
  ::px4_msgs::msg::ManualControlInput msg_;
};

class Init_ManualControlInput_y
{
public:
  explicit Init_ManualControlInput_y(::px4_msgs::msg::ManualControlInput & msg)
  : msg_(msg)
  {}
  Init_ManualControlInput_z y(::px4_msgs::msg::ManualControlInput::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_ManualControlInput_z(msg_);
  }

private:
  ::px4_msgs::msg::ManualControlInput msg_;
};

class Init_ManualControlInput_x
{
public:
  explicit Init_ManualControlInput_x(::px4_msgs::msg::ManualControlInput & msg)
  : msg_(msg)
  {}
  Init_ManualControlInput_y x(::px4_msgs::msg::ManualControlInput::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_ManualControlInput_y(msg_);
  }

private:
  ::px4_msgs::msg::ManualControlInput msg_;
};

class Init_ManualControlInput_data_source
{
public:
  explicit Init_ManualControlInput_data_source(::px4_msgs::msg::ManualControlInput & msg)
  : msg_(msg)
  {}
  Init_ManualControlInput_x data_source(::px4_msgs::msg::ManualControlInput::_data_source_type arg)
  {
    msg_.data_source = std::move(arg);
    return Init_ManualControlInput_x(msg_);
  }

private:
  ::px4_msgs::msg::ManualControlInput msg_;
};

class Init_ManualControlInput_valid
{
public:
  explicit Init_ManualControlInput_valid(::px4_msgs::msg::ManualControlInput & msg)
  : msg_(msg)
  {}
  Init_ManualControlInput_data_source valid(::px4_msgs::msg::ManualControlInput::_valid_type arg)
  {
    msg_.valid = std::move(arg);
    return Init_ManualControlInput_data_source(msg_);
  }

private:
  ::px4_msgs::msg::ManualControlInput msg_;
};

class Init_ManualControlInput_timestamp_sample
{
public:
  explicit Init_ManualControlInput_timestamp_sample(::px4_msgs::msg::ManualControlInput & msg)
  : msg_(msg)
  {}
  Init_ManualControlInput_valid timestamp_sample(::px4_msgs::msg::ManualControlInput::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_ManualControlInput_valid(msg_);
  }

private:
  ::px4_msgs::msg::ManualControlInput msg_;
};

class Init_ManualControlInput_timestamp
{
public:
  Init_ManualControlInput_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ManualControlInput_timestamp_sample timestamp(::px4_msgs::msg::ManualControlInput::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_ManualControlInput_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::ManualControlInput msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::ManualControlInput>()
{
  return px4_msgs::msg::builder::Init_ManualControlInput_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__MANUAL_CONTROL_INPUT__BUILDER_HPP_
