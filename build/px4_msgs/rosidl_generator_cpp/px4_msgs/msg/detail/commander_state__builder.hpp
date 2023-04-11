// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/CommanderState.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__COMMANDER_STATE__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__COMMANDER_STATE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/commander_state__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_CommanderState_main_state_changes
{
public:
  explicit Init_CommanderState_main_state_changes(::px4_msgs::msg::CommanderState & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::CommanderState main_state_changes(::px4_msgs::msg::CommanderState::_main_state_changes_type arg)
  {
    msg_.main_state_changes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::CommanderState msg_;
};

class Init_CommanderState_main_state
{
public:
  explicit Init_CommanderState_main_state(::px4_msgs::msg::CommanderState & msg)
  : msg_(msg)
  {}
  Init_CommanderState_main_state_changes main_state(::px4_msgs::msg::CommanderState::_main_state_type arg)
  {
    msg_.main_state = std::move(arg);
    return Init_CommanderState_main_state_changes(msg_);
  }

private:
  ::px4_msgs::msg::CommanderState msg_;
};

class Init_CommanderState_timestamp
{
public:
  Init_CommanderState_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_CommanderState_main_state timestamp(::px4_msgs::msg::CommanderState::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_CommanderState_main_state(msg_);
  }

private:
  ::px4_msgs::msg::CommanderState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::CommanderState>()
{
  return px4_msgs::msg::builder::Init_CommanderState_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__COMMANDER_STATE__BUILDER_HPP_
