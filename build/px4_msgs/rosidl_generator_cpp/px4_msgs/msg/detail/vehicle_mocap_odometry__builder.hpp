// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/VehicleMocapOdometry.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_MOCAP_ODOMETRY__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_MOCAP_ODOMETRY__BUILDER_HPP_

#include "px4_msgs/msg/detail/vehicle_mocap_odometry__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleMocapOdometry_reset_counter
{
public:
  explicit Init_VehicleMocapOdometry_reset_counter(::px4_msgs::msg::VehicleMocapOdometry & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::VehicleMocapOdometry reset_counter(::px4_msgs::msg::VehicleMocapOdometry::_reset_counter_type arg)
  {
    msg_.reset_counter = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::VehicleMocapOdometry msg_;
};

class Init_VehicleMocapOdometry_velocity_covariance
{
public:
  explicit Init_VehicleMocapOdometry_velocity_covariance(::px4_msgs::msg::VehicleMocapOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleMocapOdometry_reset_counter velocity_covariance(::px4_msgs::msg::VehicleMocapOdometry::_velocity_covariance_type arg)
  {
    msg_.velocity_covariance = std::move(arg);
    return Init_VehicleMocapOdometry_reset_counter(msg_);
  }

private:
  ::px4_msgs::msg::VehicleMocapOdometry msg_;
};

class Init_VehicleMocapOdometry_yawspeed
{
public:
  explicit Init_VehicleMocapOdometry_yawspeed(::px4_msgs::msg::VehicleMocapOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleMocapOdometry_velocity_covariance yawspeed(::px4_msgs::msg::VehicleMocapOdometry::_yawspeed_type arg)
  {
    msg_.yawspeed = std::move(arg);
    return Init_VehicleMocapOdometry_velocity_covariance(msg_);
  }

private:
  ::px4_msgs::msg::VehicleMocapOdometry msg_;
};

class Init_VehicleMocapOdometry_pitchspeed
{
public:
  explicit Init_VehicleMocapOdometry_pitchspeed(::px4_msgs::msg::VehicleMocapOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleMocapOdometry_yawspeed pitchspeed(::px4_msgs::msg::VehicleMocapOdometry::_pitchspeed_type arg)
  {
    msg_.pitchspeed = std::move(arg);
    return Init_VehicleMocapOdometry_yawspeed(msg_);
  }

private:
  ::px4_msgs::msg::VehicleMocapOdometry msg_;
};

class Init_VehicleMocapOdometry_rollspeed
{
public:
  explicit Init_VehicleMocapOdometry_rollspeed(::px4_msgs::msg::VehicleMocapOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleMocapOdometry_pitchspeed rollspeed(::px4_msgs::msg::VehicleMocapOdometry::_rollspeed_type arg)
  {
    msg_.rollspeed = std::move(arg);
    return Init_VehicleMocapOdometry_pitchspeed(msg_);
  }

private:
  ::px4_msgs::msg::VehicleMocapOdometry msg_;
};

class Init_VehicleMocapOdometry_vz
{
public:
  explicit Init_VehicleMocapOdometry_vz(::px4_msgs::msg::VehicleMocapOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleMocapOdometry_rollspeed vz(::px4_msgs::msg::VehicleMocapOdometry::_vz_type arg)
  {
    msg_.vz = std::move(arg);
    return Init_VehicleMocapOdometry_rollspeed(msg_);
  }

private:
  ::px4_msgs::msg::VehicleMocapOdometry msg_;
};

class Init_VehicleMocapOdometry_vy
{
public:
  explicit Init_VehicleMocapOdometry_vy(::px4_msgs::msg::VehicleMocapOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleMocapOdometry_vz vy(::px4_msgs::msg::VehicleMocapOdometry::_vy_type arg)
  {
    msg_.vy = std::move(arg);
    return Init_VehicleMocapOdometry_vz(msg_);
  }

private:
  ::px4_msgs::msg::VehicleMocapOdometry msg_;
};

class Init_VehicleMocapOdometry_vx
{
public:
  explicit Init_VehicleMocapOdometry_vx(::px4_msgs::msg::VehicleMocapOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleMocapOdometry_vy vx(::px4_msgs::msg::VehicleMocapOdometry::_vx_type arg)
  {
    msg_.vx = std::move(arg);
    return Init_VehicleMocapOdometry_vy(msg_);
  }

private:
  ::px4_msgs::msg::VehicleMocapOdometry msg_;
};

class Init_VehicleMocapOdometry_velocity_frame
{
public:
  explicit Init_VehicleMocapOdometry_velocity_frame(::px4_msgs::msg::VehicleMocapOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleMocapOdometry_vx velocity_frame(::px4_msgs::msg::VehicleMocapOdometry::_velocity_frame_type arg)
  {
    msg_.velocity_frame = std::move(arg);
    return Init_VehicleMocapOdometry_vx(msg_);
  }

private:
  ::px4_msgs::msg::VehicleMocapOdometry msg_;
};

class Init_VehicleMocapOdometry_pose_covariance
{
public:
  explicit Init_VehicleMocapOdometry_pose_covariance(::px4_msgs::msg::VehicleMocapOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleMocapOdometry_velocity_frame pose_covariance(::px4_msgs::msg::VehicleMocapOdometry::_pose_covariance_type arg)
  {
    msg_.pose_covariance = std::move(arg);
    return Init_VehicleMocapOdometry_velocity_frame(msg_);
  }

private:
  ::px4_msgs::msg::VehicleMocapOdometry msg_;
};

class Init_VehicleMocapOdometry_q_offset
{
public:
  explicit Init_VehicleMocapOdometry_q_offset(::px4_msgs::msg::VehicleMocapOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleMocapOdometry_pose_covariance q_offset(::px4_msgs::msg::VehicleMocapOdometry::_q_offset_type arg)
  {
    msg_.q_offset = std::move(arg);
    return Init_VehicleMocapOdometry_pose_covariance(msg_);
  }

private:
  ::px4_msgs::msg::VehicleMocapOdometry msg_;
};

class Init_VehicleMocapOdometry_q
{
public:
  explicit Init_VehicleMocapOdometry_q(::px4_msgs::msg::VehicleMocapOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleMocapOdometry_q_offset q(::px4_msgs::msg::VehicleMocapOdometry::_q_type arg)
  {
    msg_.q = std::move(arg);
    return Init_VehicleMocapOdometry_q_offset(msg_);
  }

private:
  ::px4_msgs::msg::VehicleMocapOdometry msg_;
};

class Init_VehicleMocapOdometry_z
{
public:
  explicit Init_VehicleMocapOdometry_z(::px4_msgs::msg::VehicleMocapOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleMocapOdometry_q z(::px4_msgs::msg::VehicleMocapOdometry::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_VehicleMocapOdometry_q(msg_);
  }

private:
  ::px4_msgs::msg::VehicleMocapOdometry msg_;
};

class Init_VehicleMocapOdometry_y
{
public:
  explicit Init_VehicleMocapOdometry_y(::px4_msgs::msg::VehicleMocapOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleMocapOdometry_z y(::px4_msgs::msg::VehicleMocapOdometry::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_VehicleMocapOdometry_z(msg_);
  }

private:
  ::px4_msgs::msg::VehicleMocapOdometry msg_;
};

class Init_VehicleMocapOdometry_x
{
public:
  explicit Init_VehicleMocapOdometry_x(::px4_msgs::msg::VehicleMocapOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleMocapOdometry_y x(::px4_msgs::msg::VehicleMocapOdometry::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_VehicleMocapOdometry_y(msg_);
  }

private:
  ::px4_msgs::msg::VehicleMocapOdometry msg_;
};

class Init_VehicleMocapOdometry_local_frame
{
public:
  explicit Init_VehicleMocapOdometry_local_frame(::px4_msgs::msg::VehicleMocapOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleMocapOdometry_x local_frame(::px4_msgs::msg::VehicleMocapOdometry::_local_frame_type arg)
  {
    msg_.local_frame = std::move(arg);
    return Init_VehicleMocapOdometry_x(msg_);
  }

private:
  ::px4_msgs::msg::VehicleMocapOdometry msg_;
};

class Init_VehicleMocapOdometry_timestamp_sample
{
public:
  explicit Init_VehicleMocapOdometry_timestamp_sample(::px4_msgs::msg::VehicleMocapOdometry & msg)
  : msg_(msg)
  {}
  Init_VehicleMocapOdometry_local_frame timestamp_sample(::px4_msgs::msg::VehicleMocapOdometry::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_VehicleMocapOdometry_local_frame(msg_);
  }

private:
  ::px4_msgs::msg::VehicleMocapOdometry msg_;
};

class Init_VehicleMocapOdometry_timestamp
{
public:
  Init_VehicleMocapOdometry_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleMocapOdometry_timestamp_sample timestamp(::px4_msgs::msg::VehicleMocapOdometry::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_VehicleMocapOdometry_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::VehicleMocapOdometry msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::VehicleMocapOdometry>()
{
  return px4_msgs::msg::builder::Init_VehicleMocapOdometry_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_MOCAP_ODOMETRY__BUILDER_HPP_
