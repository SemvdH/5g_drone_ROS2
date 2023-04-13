// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/EstimatorLocalPosition.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_LOCAL_POSITION__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_LOCAL_POSITION__BUILDER_HPP_

#include "px4_msgs/msg/detail/estimator_local_position__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_EstimatorLocalPosition_hagl_max
{
public:
  explicit Init_EstimatorLocalPosition_hagl_max(::px4_msgs::msg::EstimatorLocalPosition & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::EstimatorLocalPosition hagl_max(::px4_msgs::msg::EstimatorLocalPosition::_hagl_max_type arg)
  {
    msg_.hagl_max = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorLocalPosition msg_;
};

class Init_EstimatorLocalPosition_hagl_min
{
public:
  explicit Init_EstimatorLocalPosition_hagl_min(::px4_msgs::msg::EstimatorLocalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorLocalPosition_hagl_max hagl_min(::px4_msgs::msg::EstimatorLocalPosition::_hagl_min_type arg)
  {
    msg_.hagl_min = std::move(arg);
    return Init_EstimatorLocalPosition_hagl_max(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorLocalPosition msg_;
};

class Init_EstimatorLocalPosition_vz_max
{
public:
  explicit Init_EstimatorLocalPosition_vz_max(::px4_msgs::msg::EstimatorLocalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorLocalPosition_hagl_min vz_max(::px4_msgs::msg::EstimatorLocalPosition::_vz_max_type arg)
  {
    msg_.vz_max = std::move(arg);
    return Init_EstimatorLocalPosition_hagl_min(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorLocalPosition msg_;
};

class Init_EstimatorLocalPosition_vxy_max
{
public:
  explicit Init_EstimatorLocalPosition_vxy_max(::px4_msgs::msg::EstimatorLocalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorLocalPosition_vz_max vxy_max(::px4_msgs::msg::EstimatorLocalPosition::_vxy_max_type arg)
  {
    msg_.vxy_max = std::move(arg);
    return Init_EstimatorLocalPosition_vz_max(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorLocalPosition msg_;
};

class Init_EstimatorLocalPosition_evv
{
public:
  explicit Init_EstimatorLocalPosition_evv(::px4_msgs::msg::EstimatorLocalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorLocalPosition_vxy_max evv(::px4_msgs::msg::EstimatorLocalPosition::_evv_type arg)
  {
    msg_.evv = std::move(arg);
    return Init_EstimatorLocalPosition_vxy_max(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorLocalPosition msg_;
};

class Init_EstimatorLocalPosition_evh
{
public:
  explicit Init_EstimatorLocalPosition_evh(::px4_msgs::msg::EstimatorLocalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorLocalPosition_evv evh(::px4_msgs::msg::EstimatorLocalPosition::_evh_type arg)
  {
    msg_.evh = std::move(arg);
    return Init_EstimatorLocalPosition_evv(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorLocalPosition msg_;
};

class Init_EstimatorLocalPosition_epv
{
public:
  explicit Init_EstimatorLocalPosition_epv(::px4_msgs::msg::EstimatorLocalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorLocalPosition_evh epv(::px4_msgs::msg::EstimatorLocalPosition::_epv_type arg)
  {
    msg_.epv = std::move(arg);
    return Init_EstimatorLocalPosition_evh(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorLocalPosition msg_;
};

class Init_EstimatorLocalPosition_eph
{
public:
  explicit Init_EstimatorLocalPosition_eph(::px4_msgs::msg::EstimatorLocalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorLocalPosition_epv eph(::px4_msgs::msg::EstimatorLocalPosition::_eph_type arg)
  {
    msg_.eph = std::move(arg);
    return Init_EstimatorLocalPosition_epv(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorLocalPosition msg_;
};

class Init_EstimatorLocalPosition_dist_bottom_sensor_bitfield
{
public:
  explicit Init_EstimatorLocalPosition_dist_bottom_sensor_bitfield(::px4_msgs::msg::EstimatorLocalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorLocalPosition_eph dist_bottom_sensor_bitfield(::px4_msgs::msg::EstimatorLocalPosition::_dist_bottom_sensor_bitfield_type arg)
  {
    msg_.dist_bottom_sensor_bitfield = std::move(arg);
    return Init_EstimatorLocalPosition_eph(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorLocalPosition msg_;
};

class Init_EstimatorLocalPosition_dist_bottom_valid
{
public:
  explicit Init_EstimatorLocalPosition_dist_bottom_valid(::px4_msgs::msg::EstimatorLocalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorLocalPosition_dist_bottom_sensor_bitfield dist_bottom_valid(::px4_msgs::msg::EstimatorLocalPosition::_dist_bottom_valid_type arg)
  {
    msg_.dist_bottom_valid = std::move(arg);
    return Init_EstimatorLocalPosition_dist_bottom_sensor_bitfield(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorLocalPosition msg_;
};

class Init_EstimatorLocalPosition_dist_bottom
{
public:
  explicit Init_EstimatorLocalPosition_dist_bottom(::px4_msgs::msg::EstimatorLocalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorLocalPosition_dist_bottom_valid dist_bottom(::px4_msgs::msg::EstimatorLocalPosition::_dist_bottom_type arg)
  {
    msg_.dist_bottom = std::move(arg);
    return Init_EstimatorLocalPosition_dist_bottom_valid(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorLocalPosition msg_;
};

class Init_EstimatorLocalPosition_ref_alt
{
public:
  explicit Init_EstimatorLocalPosition_ref_alt(::px4_msgs::msg::EstimatorLocalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorLocalPosition_dist_bottom ref_alt(::px4_msgs::msg::EstimatorLocalPosition::_ref_alt_type arg)
  {
    msg_.ref_alt = std::move(arg);
    return Init_EstimatorLocalPosition_dist_bottom(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorLocalPosition msg_;
};

class Init_EstimatorLocalPosition_ref_lon
{
public:
  explicit Init_EstimatorLocalPosition_ref_lon(::px4_msgs::msg::EstimatorLocalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorLocalPosition_ref_alt ref_lon(::px4_msgs::msg::EstimatorLocalPosition::_ref_lon_type arg)
  {
    msg_.ref_lon = std::move(arg);
    return Init_EstimatorLocalPosition_ref_alt(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorLocalPosition msg_;
};

class Init_EstimatorLocalPosition_ref_lat
{
public:
  explicit Init_EstimatorLocalPosition_ref_lat(::px4_msgs::msg::EstimatorLocalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorLocalPosition_ref_lon ref_lat(::px4_msgs::msg::EstimatorLocalPosition::_ref_lat_type arg)
  {
    msg_.ref_lat = std::move(arg);
    return Init_EstimatorLocalPosition_ref_lon(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorLocalPosition msg_;
};

class Init_EstimatorLocalPosition_ref_timestamp
{
public:
  explicit Init_EstimatorLocalPosition_ref_timestamp(::px4_msgs::msg::EstimatorLocalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorLocalPosition_ref_lat ref_timestamp(::px4_msgs::msg::EstimatorLocalPosition::_ref_timestamp_type arg)
  {
    msg_.ref_timestamp = std::move(arg);
    return Init_EstimatorLocalPosition_ref_lat(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorLocalPosition msg_;
};

class Init_EstimatorLocalPosition_z_global
{
public:
  explicit Init_EstimatorLocalPosition_z_global(::px4_msgs::msg::EstimatorLocalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorLocalPosition_ref_timestamp z_global(::px4_msgs::msg::EstimatorLocalPosition::_z_global_type arg)
  {
    msg_.z_global = std::move(arg);
    return Init_EstimatorLocalPosition_ref_timestamp(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorLocalPosition msg_;
};

class Init_EstimatorLocalPosition_xy_global
{
public:
  explicit Init_EstimatorLocalPosition_xy_global(::px4_msgs::msg::EstimatorLocalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorLocalPosition_z_global xy_global(::px4_msgs::msg::EstimatorLocalPosition::_xy_global_type arg)
  {
    msg_.xy_global = std::move(arg);
    return Init_EstimatorLocalPosition_z_global(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorLocalPosition msg_;
};

class Init_EstimatorLocalPosition_heading_good_for_control
{
public:
  explicit Init_EstimatorLocalPosition_heading_good_for_control(::px4_msgs::msg::EstimatorLocalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorLocalPosition_xy_global heading_good_for_control(::px4_msgs::msg::EstimatorLocalPosition::_heading_good_for_control_type arg)
  {
    msg_.heading_good_for_control = std::move(arg);
    return Init_EstimatorLocalPosition_xy_global(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorLocalPosition msg_;
};

class Init_EstimatorLocalPosition_heading_reset_counter
{
public:
  explicit Init_EstimatorLocalPosition_heading_reset_counter(::px4_msgs::msg::EstimatorLocalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorLocalPosition_heading_good_for_control heading_reset_counter(::px4_msgs::msg::EstimatorLocalPosition::_heading_reset_counter_type arg)
  {
    msg_.heading_reset_counter = std::move(arg);
    return Init_EstimatorLocalPosition_heading_good_for_control(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorLocalPosition msg_;
};

class Init_EstimatorLocalPosition_delta_heading
{
public:
  explicit Init_EstimatorLocalPosition_delta_heading(::px4_msgs::msg::EstimatorLocalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorLocalPosition_heading_reset_counter delta_heading(::px4_msgs::msg::EstimatorLocalPosition::_delta_heading_type arg)
  {
    msg_.delta_heading = std::move(arg);
    return Init_EstimatorLocalPosition_heading_reset_counter(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorLocalPosition msg_;
};

class Init_EstimatorLocalPosition_heading
{
public:
  explicit Init_EstimatorLocalPosition_heading(::px4_msgs::msg::EstimatorLocalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorLocalPosition_delta_heading heading(::px4_msgs::msg::EstimatorLocalPosition::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_EstimatorLocalPosition_delta_heading(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorLocalPosition msg_;
};

class Init_EstimatorLocalPosition_az
{
public:
  explicit Init_EstimatorLocalPosition_az(::px4_msgs::msg::EstimatorLocalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorLocalPosition_heading az(::px4_msgs::msg::EstimatorLocalPosition::_az_type arg)
  {
    msg_.az = std::move(arg);
    return Init_EstimatorLocalPosition_heading(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorLocalPosition msg_;
};

class Init_EstimatorLocalPosition_ay
{
public:
  explicit Init_EstimatorLocalPosition_ay(::px4_msgs::msg::EstimatorLocalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorLocalPosition_az ay(::px4_msgs::msg::EstimatorLocalPosition::_ay_type arg)
  {
    msg_.ay = std::move(arg);
    return Init_EstimatorLocalPosition_az(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorLocalPosition msg_;
};

class Init_EstimatorLocalPosition_ax
{
public:
  explicit Init_EstimatorLocalPosition_ax(::px4_msgs::msg::EstimatorLocalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorLocalPosition_ay ax(::px4_msgs::msg::EstimatorLocalPosition::_ax_type arg)
  {
    msg_.ax = std::move(arg);
    return Init_EstimatorLocalPosition_ay(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorLocalPosition msg_;
};

class Init_EstimatorLocalPosition_vz_reset_counter
{
public:
  explicit Init_EstimatorLocalPosition_vz_reset_counter(::px4_msgs::msg::EstimatorLocalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorLocalPosition_ax vz_reset_counter(::px4_msgs::msg::EstimatorLocalPosition::_vz_reset_counter_type arg)
  {
    msg_.vz_reset_counter = std::move(arg);
    return Init_EstimatorLocalPosition_ax(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorLocalPosition msg_;
};

class Init_EstimatorLocalPosition_delta_vz
{
public:
  explicit Init_EstimatorLocalPosition_delta_vz(::px4_msgs::msg::EstimatorLocalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorLocalPosition_vz_reset_counter delta_vz(::px4_msgs::msg::EstimatorLocalPosition::_delta_vz_type arg)
  {
    msg_.delta_vz = std::move(arg);
    return Init_EstimatorLocalPosition_vz_reset_counter(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorLocalPosition msg_;
};

class Init_EstimatorLocalPosition_vxy_reset_counter
{
public:
  explicit Init_EstimatorLocalPosition_vxy_reset_counter(::px4_msgs::msg::EstimatorLocalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorLocalPosition_delta_vz vxy_reset_counter(::px4_msgs::msg::EstimatorLocalPosition::_vxy_reset_counter_type arg)
  {
    msg_.vxy_reset_counter = std::move(arg);
    return Init_EstimatorLocalPosition_delta_vz(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorLocalPosition msg_;
};

class Init_EstimatorLocalPosition_delta_vxy
{
public:
  explicit Init_EstimatorLocalPosition_delta_vxy(::px4_msgs::msg::EstimatorLocalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorLocalPosition_vxy_reset_counter delta_vxy(::px4_msgs::msg::EstimatorLocalPosition::_delta_vxy_type arg)
  {
    msg_.delta_vxy = std::move(arg);
    return Init_EstimatorLocalPosition_vxy_reset_counter(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorLocalPosition msg_;
};

class Init_EstimatorLocalPosition_z_deriv
{
public:
  explicit Init_EstimatorLocalPosition_z_deriv(::px4_msgs::msg::EstimatorLocalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorLocalPosition_delta_vxy z_deriv(::px4_msgs::msg::EstimatorLocalPosition::_z_deriv_type arg)
  {
    msg_.z_deriv = std::move(arg);
    return Init_EstimatorLocalPosition_delta_vxy(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorLocalPosition msg_;
};

class Init_EstimatorLocalPosition_vz
{
public:
  explicit Init_EstimatorLocalPosition_vz(::px4_msgs::msg::EstimatorLocalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorLocalPosition_z_deriv vz(::px4_msgs::msg::EstimatorLocalPosition::_vz_type arg)
  {
    msg_.vz = std::move(arg);
    return Init_EstimatorLocalPosition_z_deriv(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorLocalPosition msg_;
};

class Init_EstimatorLocalPosition_vy
{
public:
  explicit Init_EstimatorLocalPosition_vy(::px4_msgs::msg::EstimatorLocalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorLocalPosition_vz vy(::px4_msgs::msg::EstimatorLocalPosition::_vy_type arg)
  {
    msg_.vy = std::move(arg);
    return Init_EstimatorLocalPosition_vz(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorLocalPosition msg_;
};

class Init_EstimatorLocalPosition_vx
{
public:
  explicit Init_EstimatorLocalPosition_vx(::px4_msgs::msg::EstimatorLocalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorLocalPosition_vy vx(::px4_msgs::msg::EstimatorLocalPosition::_vx_type arg)
  {
    msg_.vx = std::move(arg);
    return Init_EstimatorLocalPosition_vy(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorLocalPosition msg_;
};

class Init_EstimatorLocalPosition_z_reset_counter
{
public:
  explicit Init_EstimatorLocalPosition_z_reset_counter(::px4_msgs::msg::EstimatorLocalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorLocalPosition_vx z_reset_counter(::px4_msgs::msg::EstimatorLocalPosition::_z_reset_counter_type arg)
  {
    msg_.z_reset_counter = std::move(arg);
    return Init_EstimatorLocalPosition_vx(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorLocalPosition msg_;
};

class Init_EstimatorLocalPosition_delta_z
{
public:
  explicit Init_EstimatorLocalPosition_delta_z(::px4_msgs::msg::EstimatorLocalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorLocalPosition_z_reset_counter delta_z(::px4_msgs::msg::EstimatorLocalPosition::_delta_z_type arg)
  {
    msg_.delta_z = std::move(arg);
    return Init_EstimatorLocalPosition_z_reset_counter(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorLocalPosition msg_;
};

class Init_EstimatorLocalPosition_xy_reset_counter
{
public:
  explicit Init_EstimatorLocalPosition_xy_reset_counter(::px4_msgs::msg::EstimatorLocalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorLocalPosition_delta_z xy_reset_counter(::px4_msgs::msg::EstimatorLocalPosition::_xy_reset_counter_type arg)
  {
    msg_.xy_reset_counter = std::move(arg);
    return Init_EstimatorLocalPosition_delta_z(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorLocalPosition msg_;
};

class Init_EstimatorLocalPosition_delta_xy
{
public:
  explicit Init_EstimatorLocalPosition_delta_xy(::px4_msgs::msg::EstimatorLocalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorLocalPosition_xy_reset_counter delta_xy(::px4_msgs::msg::EstimatorLocalPosition::_delta_xy_type arg)
  {
    msg_.delta_xy = std::move(arg);
    return Init_EstimatorLocalPosition_xy_reset_counter(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorLocalPosition msg_;
};

class Init_EstimatorLocalPosition_z
{
public:
  explicit Init_EstimatorLocalPosition_z(::px4_msgs::msg::EstimatorLocalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorLocalPosition_delta_xy z(::px4_msgs::msg::EstimatorLocalPosition::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_EstimatorLocalPosition_delta_xy(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorLocalPosition msg_;
};

class Init_EstimatorLocalPosition_y
{
public:
  explicit Init_EstimatorLocalPosition_y(::px4_msgs::msg::EstimatorLocalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorLocalPosition_z y(::px4_msgs::msg::EstimatorLocalPosition::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_EstimatorLocalPosition_z(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorLocalPosition msg_;
};

class Init_EstimatorLocalPosition_x
{
public:
  explicit Init_EstimatorLocalPosition_x(::px4_msgs::msg::EstimatorLocalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorLocalPosition_y x(::px4_msgs::msg::EstimatorLocalPosition::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_EstimatorLocalPosition_y(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorLocalPosition msg_;
};

class Init_EstimatorLocalPosition_v_z_valid
{
public:
  explicit Init_EstimatorLocalPosition_v_z_valid(::px4_msgs::msg::EstimatorLocalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorLocalPosition_x v_z_valid(::px4_msgs::msg::EstimatorLocalPosition::_v_z_valid_type arg)
  {
    msg_.v_z_valid = std::move(arg);
    return Init_EstimatorLocalPosition_x(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorLocalPosition msg_;
};

class Init_EstimatorLocalPosition_v_xy_valid
{
public:
  explicit Init_EstimatorLocalPosition_v_xy_valid(::px4_msgs::msg::EstimatorLocalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorLocalPosition_v_z_valid v_xy_valid(::px4_msgs::msg::EstimatorLocalPosition::_v_xy_valid_type arg)
  {
    msg_.v_xy_valid = std::move(arg);
    return Init_EstimatorLocalPosition_v_z_valid(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorLocalPosition msg_;
};

class Init_EstimatorLocalPosition_z_valid
{
public:
  explicit Init_EstimatorLocalPosition_z_valid(::px4_msgs::msg::EstimatorLocalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorLocalPosition_v_xy_valid z_valid(::px4_msgs::msg::EstimatorLocalPosition::_z_valid_type arg)
  {
    msg_.z_valid = std::move(arg);
    return Init_EstimatorLocalPosition_v_xy_valid(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorLocalPosition msg_;
};

class Init_EstimatorLocalPosition_xy_valid
{
public:
  explicit Init_EstimatorLocalPosition_xy_valid(::px4_msgs::msg::EstimatorLocalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorLocalPosition_z_valid xy_valid(::px4_msgs::msg::EstimatorLocalPosition::_xy_valid_type arg)
  {
    msg_.xy_valid = std::move(arg);
    return Init_EstimatorLocalPosition_z_valid(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorLocalPosition msg_;
};

class Init_EstimatorLocalPosition_timestamp_sample
{
public:
  explicit Init_EstimatorLocalPosition_timestamp_sample(::px4_msgs::msg::EstimatorLocalPosition & msg)
  : msg_(msg)
  {}
  Init_EstimatorLocalPosition_xy_valid timestamp_sample(::px4_msgs::msg::EstimatorLocalPosition::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_EstimatorLocalPosition_xy_valid(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorLocalPosition msg_;
};

class Init_EstimatorLocalPosition_timestamp
{
public:
  Init_EstimatorLocalPosition_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EstimatorLocalPosition_timestamp_sample timestamp(::px4_msgs::msg::EstimatorLocalPosition::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_EstimatorLocalPosition_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::EstimatorLocalPosition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::EstimatorLocalPosition>()
{
  return px4_msgs::msg::builder::Init_EstimatorLocalPosition_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_LOCAL_POSITION__BUILDER_HPP_
