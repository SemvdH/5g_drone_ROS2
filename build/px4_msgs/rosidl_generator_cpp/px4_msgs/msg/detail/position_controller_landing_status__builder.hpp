// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/PositionControllerLandingStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__POSITION_CONTROLLER_LANDING_STATUS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__POSITION_CONTROLLER_LANDING_STATUS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/position_controller_landing_status__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_PositionControllerLandingStatus_abort_landing
{
public:
  explicit Init_PositionControllerLandingStatus_abort_landing(::px4_msgs::msg::PositionControllerLandingStatus & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::PositionControllerLandingStatus abort_landing(::px4_msgs::msg::PositionControllerLandingStatus::_abort_landing_type arg)
  {
    msg_.abort_landing = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::PositionControllerLandingStatus msg_;
};

class Init_PositionControllerLandingStatus_flare_length
{
public:
  explicit Init_PositionControllerLandingStatus_flare_length(::px4_msgs::msg::PositionControllerLandingStatus & msg)
  : msg_(msg)
  {}
  Init_PositionControllerLandingStatus_abort_landing flare_length(::px4_msgs::msg::PositionControllerLandingStatus::_flare_length_type arg)
  {
    msg_.flare_length = std::move(arg);
    return Init_PositionControllerLandingStatus_abort_landing(msg_);
  }

private:
  ::px4_msgs::msg::PositionControllerLandingStatus msg_;
};

class Init_PositionControllerLandingStatus_slope_angle_rad
{
public:
  explicit Init_PositionControllerLandingStatus_slope_angle_rad(::px4_msgs::msg::PositionControllerLandingStatus & msg)
  : msg_(msg)
  {}
  Init_PositionControllerLandingStatus_flare_length slope_angle_rad(::px4_msgs::msg::PositionControllerLandingStatus::_slope_angle_rad_type arg)
  {
    msg_.slope_angle_rad = std::move(arg);
    return Init_PositionControllerLandingStatus_flare_length(msg_);
  }

private:
  ::px4_msgs::msg::PositionControllerLandingStatus msg_;
};

class Init_PositionControllerLandingStatus_horizontal_slope_displacement
{
public:
  explicit Init_PositionControllerLandingStatus_horizontal_slope_displacement(::px4_msgs::msg::PositionControllerLandingStatus & msg)
  : msg_(msg)
  {}
  Init_PositionControllerLandingStatus_slope_angle_rad horizontal_slope_displacement(::px4_msgs::msg::PositionControllerLandingStatus::_horizontal_slope_displacement_type arg)
  {
    msg_.horizontal_slope_displacement = std::move(arg);
    return Init_PositionControllerLandingStatus_slope_angle_rad(msg_);
  }

private:
  ::px4_msgs::msg::PositionControllerLandingStatus msg_;
};

class Init_PositionControllerLandingStatus_timestamp
{
public:
  Init_PositionControllerLandingStatus_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PositionControllerLandingStatus_horizontal_slope_displacement timestamp(::px4_msgs::msg::PositionControllerLandingStatus::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_PositionControllerLandingStatus_horizontal_slope_displacement(msg_);
  }

private:
  ::px4_msgs::msg::PositionControllerLandingStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::PositionControllerLandingStatus>()
{
  return px4_msgs::msg::builder::Init_PositionControllerLandingStatus_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__POSITION_CONTROLLER_LANDING_STATUS__BUILDER_HPP_
