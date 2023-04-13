// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/VehicleTrajectoryWaypointDesired.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_TRAJECTORY_WAYPOINT_DESIRED__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_TRAJECTORY_WAYPOINT_DESIRED__BUILDER_HPP_

#include "px4_msgs/msg/detail/vehicle_trajectory_waypoint_desired__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleTrajectoryWaypointDesired_waypoints
{
public:
  explicit Init_VehicleTrajectoryWaypointDesired_waypoints(::px4_msgs::msg::VehicleTrajectoryWaypointDesired & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::VehicleTrajectoryWaypointDesired waypoints(::px4_msgs::msg::VehicleTrajectoryWaypointDesired::_waypoints_type arg)
  {
    msg_.waypoints = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::VehicleTrajectoryWaypointDesired msg_;
};

class Init_VehicleTrajectoryWaypointDesired_type
{
public:
  explicit Init_VehicleTrajectoryWaypointDesired_type(::px4_msgs::msg::VehicleTrajectoryWaypointDesired & msg)
  : msg_(msg)
  {}
  Init_VehicleTrajectoryWaypointDesired_waypoints type(::px4_msgs::msg::VehicleTrajectoryWaypointDesired::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_VehicleTrajectoryWaypointDesired_waypoints(msg_);
  }

private:
  ::px4_msgs::msg::VehicleTrajectoryWaypointDesired msg_;
};

class Init_VehicleTrajectoryWaypointDesired_timestamp
{
public:
  Init_VehicleTrajectoryWaypointDesired_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleTrajectoryWaypointDesired_type timestamp(::px4_msgs::msg::VehicleTrajectoryWaypointDesired::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_VehicleTrajectoryWaypointDesired_type(msg_);
  }

private:
  ::px4_msgs::msg::VehicleTrajectoryWaypointDesired msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::VehicleTrajectoryWaypointDesired>()
{
  return px4_msgs::msg::builder::Init_VehicleTrajectoryWaypointDesired_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_TRAJECTORY_WAYPOINT_DESIRED__BUILDER_HPP_
