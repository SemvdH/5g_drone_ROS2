// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/VtolVehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VTOL_VEHICLE_STATUS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__VTOL_VEHICLE_STATUS__BUILDER_HPP_

#include "px4_msgs/msg/detail/vtol_vehicle_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_VtolVehicleStatus_fw_permanent_stab
{
public:
  explicit Init_VtolVehicleStatus_fw_permanent_stab(::px4_msgs::msg::VtolVehicleStatus & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::VtolVehicleStatus fw_permanent_stab(::px4_msgs::msg::VtolVehicleStatus::_fw_permanent_stab_type arg)
  {
    msg_.fw_permanent_stab = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::VtolVehicleStatus msg_;
};

class Init_VtolVehicleStatus_vtol_transition_failsafe
{
public:
  explicit Init_VtolVehicleStatus_vtol_transition_failsafe(::px4_msgs::msg::VtolVehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VtolVehicleStatus_fw_permanent_stab vtol_transition_failsafe(::px4_msgs::msg::VtolVehicleStatus::_vtol_transition_failsafe_type arg)
  {
    msg_.vtol_transition_failsafe = std::move(arg);
    return Init_VtolVehicleStatus_fw_permanent_stab(msg_);
  }

private:
  ::px4_msgs::msg::VtolVehicleStatus msg_;
};

class Init_VtolVehicleStatus_in_transition_to_fw
{
public:
  explicit Init_VtolVehicleStatus_in_transition_to_fw(::px4_msgs::msg::VtolVehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VtolVehicleStatus_vtol_transition_failsafe in_transition_to_fw(::px4_msgs::msg::VtolVehicleStatus::_in_transition_to_fw_type arg)
  {
    msg_.in_transition_to_fw = std::move(arg);
    return Init_VtolVehicleStatus_vtol_transition_failsafe(msg_);
  }

private:
  ::px4_msgs::msg::VtolVehicleStatus msg_;
};

class Init_VtolVehicleStatus_vtol_in_trans_mode
{
public:
  explicit Init_VtolVehicleStatus_vtol_in_trans_mode(::px4_msgs::msg::VtolVehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VtolVehicleStatus_in_transition_to_fw vtol_in_trans_mode(::px4_msgs::msg::VtolVehicleStatus::_vtol_in_trans_mode_type arg)
  {
    msg_.vtol_in_trans_mode = std::move(arg);
    return Init_VtolVehicleStatus_in_transition_to_fw(msg_);
  }

private:
  ::px4_msgs::msg::VtolVehicleStatus msg_;
};

class Init_VtolVehicleStatus_vtol_in_rw_mode
{
public:
  explicit Init_VtolVehicleStatus_vtol_in_rw_mode(::px4_msgs::msg::VtolVehicleStatus & msg)
  : msg_(msg)
  {}
  Init_VtolVehicleStatus_vtol_in_trans_mode vtol_in_rw_mode(::px4_msgs::msg::VtolVehicleStatus::_vtol_in_rw_mode_type arg)
  {
    msg_.vtol_in_rw_mode = std::move(arg);
    return Init_VtolVehicleStatus_vtol_in_trans_mode(msg_);
  }

private:
  ::px4_msgs::msg::VtolVehicleStatus msg_;
};

class Init_VtolVehicleStatus_timestamp
{
public:
  Init_VtolVehicleStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VtolVehicleStatus_vtol_in_rw_mode timestamp(::px4_msgs::msg::VtolVehicleStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_VtolVehicleStatus_vtol_in_rw_mode(msg_);
  }

private:
  ::px4_msgs::msg::VtolVehicleStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::VtolVehicleStatus>()
{
  return px4_msgs::msg::builder::Init_VtolVehicleStatus_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VTOL_VEHICLE_STATUS__BUILDER_HPP_
