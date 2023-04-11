// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/VehicleLocalPositionGroundtruth.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_LOCAL_POSITION_GROUNDTRUTH__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_LOCAL_POSITION_GROUNDTRUTH__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/vehicle_local_position_groundtruth__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleLocalPositionGroundtruth_hagl_max
{
public:
  explicit Init_VehicleLocalPositionGroundtruth_hagl_max(::px4_msgs::msg::VehicleLocalPositionGroundtruth & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::VehicleLocalPositionGroundtruth hagl_max(::px4_msgs::msg::VehicleLocalPositionGroundtruth::_hagl_max_type arg)
  {
    msg_.hagl_max = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLocalPositionGroundtruth msg_;
};

class Init_VehicleLocalPositionGroundtruth_hagl_min
{
public:
  explicit Init_VehicleLocalPositionGroundtruth_hagl_min(::px4_msgs::msg::VehicleLocalPositionGroundtruth & msg)
  : msg_(msg)
  {}
  Init_VehicleLocalPositionGroundtruth_hagl_max hagl_min(::px4_msgs::msg::VehicleLocalPositionGroundtruth::_hagl_min_type arg)
  {
    msg_.hagl_min = std::move(arg);
    return Init_VehicleLocalPositionGroundtruth_hagl_max(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLocalPositionGroundtruth msg_;
};

class Init_VehicleLocalPositionGroundtruth_vz_max
{
public:
  explicit Init_VehicleLocalPositionGroundtruth_vz_max(::px4_msgs::msg::VehicleLocalPositionGroundtruth & msg)
  : msg_(msg)
  {}
  Init_VehicleLocalPositionGroundtruth_hagl_min vz_max(::px4_msgs::msg::VehicleLocalPositionGroundtruth::_vz_max_type arg)
  {
    msg_.vz_max = std::move(arg);
    return Init_VehicleLocalPositionGroundtruth_hagl_min(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLocalPositionGroundtruth msg_;
};

class Init_VehicleLocalPositionGroundtruth_vxy_max
{
public:
  explicit Init_VehicleLocalPositionGroundtruth_vxy_max(::px4_msgs::msg::VehicleLocalPositionGroundtruth & msg)
  : msg_(msg)
  {}
  Init_VehicleLocalPositionGroundtruth_vz_max vxy_max(::px4_msgs::msg::VehicleLocalPositionGroundtruth::_vxy_max_type arg)
  {
    msg_.vxy_max = std::move(arg);
    return Init_VehicleLocalPositionGroundtruth_vz_max(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLocalPositionGroundtruth msg_;
};

class Init_VehicleLocalPositionGroundtruth_evv
{
public:
  explicit Init_VehicleLocalPositionGroundtruth_evv(::px4_msgs::msg::VehicleLocalPositionGroundtruth & msg)
  : msg_(msg)
  {}
  Init_VehicleLocalPositionGroundtruth_vxy_max evv(::px4_msgs::msg::VehicleLocalPositionGroundtruth::_evv_type arg)
  {
    msg_.evv = std::move(arg);
    return Init_VehicleLocalPositionGroundtruth_vxy_max(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLocalPositionGroundtruth msg_;
};

class Init_VehicleLocalPositionGroundtruth_evh
{
public:
  explicit Init_VehicleLocalPositionGroundtruth_evh(::px4_msgs::msg::VehicleLocalPositionGroundtruth & msg)
  : msg_(msg)
  {}
  Init_VehicleLocalPositionGroundtruth_evv evh(::px4_msgs::msg::VehicleLocalPositionGroundtruth::_evh_type arg)
  {
    msg_.evh = std::move(arg);
    return Init_VehicleLocalPositionGroundtruth_evv(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLocalPositionGroundtruth msg_;
};

class Init_VehicleLocalPositionGroundtruth_epv
{
public:
  explicit Init_VehicleLocalPositionGroundtruth_epv(::px4_msgs::msg::VehicleLocalPositionGroundtruth & msg)
  : msg_(msg)
  {}
  Init_VehicleLocalPositionGroundtruth_evh epv(::px4_msgs::msg::VehicleLocalPositionGroundtruth::_epv_type arg)
  {
    msg_.epv = std::move(arg);
    return Init_VehicleLocalPositionGroundtruth_evh(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLocalPositionGroundtruth msg_;
};

class Init_VehicleLocalPositionGroundtruth_eph
{
public:
  explicit Init_VehicleLocalPositionGroundtruth_eph(::px4_msgs::msg::VehicleLocalPositionGroundtruth & msg)
  : msg_(msg)
  {}
  Init_VehicleLocalPositionGroundtruth_epv eph(::px4_msgs::msg::VehicleLocalPositionGroundtruth::_eph_type arg)
  {
    msg_.eph = std::move(arg);
    return Init_VehicleLocalPositionGroundtruth_epv(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLocalPositionGroundtruth msg_;
};

class Init_VehicleLocalPositionGroundtruth_dist_bottom_sensor_bitfield
{
public:
  explicit Init_VehicleLocalPositionGroundtruth_dist_bottom_sensor_bitfield(::px4_msgs::msg::VehicleLocalPositionGroundtruth & msg)
  : msg_(msg)
  {}
  Init_VehicleLocalPositionGroundtruth_eph dist_bottom_sensor_bitfield(::px4_msgs::msg::VehicleLocalPositionGroundtruth::_dist_bottom_sensor_bitfield_type arg)
  {
    msg_.dist_bottom_sensor_bitfield = std::move(arg);
    return Init_VehicleLocalPositionGroundtruth_eph(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLocalPositionGroundtruth msg_;
};

class Init_VehicleLocalPositionGroundtruth_dist_bottom_valid
{
public:
  explicit Init_VehicleLocalPositionGroundtruth_dist_bottom_valid(::px4_msgs::msg::VehicleLocalPositionGroundtruth & msg)
  : msg_(msg)
  {}
  Init_VehicleLocalPositionGroundtruth_dist_bottom_sensor_bitfield dist_bottom_valid(::px4_msgs::msg::VehicleLocalPositionGroundtruth::_dist_bottom_valid_type arg)
  {
    msg_.dist_bottom_valid = std::move(arg);
    return Init_VehicleLocalPositionGroundtruth_dist_bottom_sensor_bitfield(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLocalPositionGroundtruth msg_;
};

class Init_VehicleLocalPositionGroundtruth_dist_bottom
{
public:
  explicit Init_VehicleLocalPositionGroundtruth_dist_bottom(::px4_msgs::msg::VehicleLocalPositionGroundtruth & msg)
  : msg_(msg)
  {}
  Init_VehicleLocalPositionGroundtruth_dist_bottom_valid dist_bottom(::px4_msgs::msg::VehicleLocalPositionGroundtruth::_dist_bottom_type arg)
  {
    msg_.dist_bottom = std::move(arg);
    return Init_VehicleLocalPositionGroundtruth_dist_bottom_valid(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLocalPositionGroundtruth msg_;
};

class Init_VehicleLocalPositionGroundtruth_ref_alt
{
public:
  explicit Init_VehicleLocalPositionGroundtruth_ref_alt(::px4_msgs::msg::VehicleLocalPositionGroundtruth & msg)
  : msg_(msg)
  {}
  Init_VehicleLocalPositionGroundtruth_dist_bottom ref_alt(::px4_msgs::msg::VehicleLocalPositionGroundtruth::_ref_alt_type arg)
  {
    msg_.ref_alt = std::move(arg);
    return Init_VehicleLocalPositionGroundtruth_dist_bottom(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLocalPositionGroundtruth msg_;
};

class Init_VehicleLocalPositionGroundtruth_ref_lon
{
public:
  explicit Init_VehicleLocalPositionGroundtruth_ref_lon(::px4_msgs::msg::VehicleLocalPositionGroundtruth & msg)
  : msg_(msg)
  {}
  Init_VehicleLocalPositionGroundtruth_ref_alt ref_lon(::px4_msgs::msg::VehicleLocalPositionGroundtruth::_ref_lon_type arg)
  {
    msg_.ref_lon = std::move(arg);
    return Init_VehicleLocalPositionGroundtruth_ref_alt(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLocalPositionGroundtruth msg_;
};

class Init_VehicleLocalPositionGroundtruth_ref_lat
{
public:
  explicit Init_VehicleLocalPositionGroundtruth_ref_lat(::px4_msgs::msg::VehicleLocalPositionGroundtruth & msg)
  : msg_(msg)
  {}
  Init_VehicleLocalPositionGroundtruth_ref_lon ref_lat(::px4_msgs::msg::VehicleLocalPositionGroundtruth::_ref_lat_type arg)
  {
    msg_.ref_lat = std::move(arg);
    return Init_VehicleLocalPositionGroundtruth_ref_lon(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLocalPositionGroundtruth msg_;
};

class Init_VehicleLocalPositionGroundtruth_ref_timestamp
{
public:
  explicit Init_VehicleLocalPositionGroundtruth_ref_timestamp(::px4_msgs::msg::VehicleLocalPositionGroundtruth & msg)
  : msg_(msg)
  {}
  Init_VehicleLocalPositionGroundtruth_ref_lat ref_timestamp(::px4_msgs::msg::VehicleLocalPositionGroundtruth::_ref_timestamp_type arg)
  {
    msg_.ref_timestamp = std::move(arg);
    return Init_VehicleLocalPositionGroundtruth_ref_lat(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLocalPositionGroundtruth msg_;
};

class Init_VehicleLocalPositionGroundtruth_z_global
{
public:
  explicit Init_VehicleLocalPositionGroundtruth_z_global(::px4_msgs::msg::VehicleLocalPositionGroundtruth & msg)
  : msg_(msg)
  {}
  Init_VehicleLocalPositionGroundtruth_ref_timestamp z_global(::px4_msgs::msg::VehicleLocalPositionGroundtruth::_z_global_type arg)
  {
    msg_.z_global = std::move(arg);
    return Init_VehicleLocalPositionGroundtruth_ref_timestamp(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLocalPositionGroundtruth msg_;
};

class Init_VehicleLocalPositionGroundtruth_xy_global
{
public:
  explicit Init_VehicleLocalPositionGroundtruth_xy_global(::px4_msgs::msg::VehicleLocalPositionGroundtruth & msg)
  : msg_(msg)
  {}
  Init_VehicleLocalPositionGroundtruth_z_global xy_global(::px4_msgs::msg::VehicleLocalPositionGroundtruth::_xy_global_type arg)
  {
    msg_.xy_global = std::move(arg);
    return Init_VehicleLocalPositionGroundtruth_z_global(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLocalPositionGroundtruth msg_;
};

class Init_VehicleLocalPositionGroundtruth_heading_good_for_control
{
public:
  explicit Init_VehicleLocalPositionGroundtruth_heading_good_for_control(::px4_msgs::msg::VehicleLocalPositionGroundtruth & msg)
  : msg_(msg)
  {}
  Init_VehicleLocalPositionGroundtruth_xy_global heading_good_for_control(::px4_msgs::msg::VehicleLocalPositionGroundtruth::_heading_good_for_control_type arg)
  {
    msg_.heading_good_for_control = std::move(arg);
    return Init_VehicleLocalPositionGroundtruth_xy_global(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLocalPositionGroundtruth msg_;
};

class Init_VehicleLocalPositionGroundtruth_heading_reset_counter
{
public:
  explicit Init_VehicleLocalPositionGroundtruth_heading_reset_counter(::px4_msgs::msg::VehicleLocalPositionGroundtruth & msg)
  : msg_(msg)
  {}
  Init_VehicleLocalPositionGroundtruth_heading_good_for_control heading_reset_counter(::px4_msgs::msg::VehicleLocalPositionGroundtruth::_heading_reset_counter_type arg)
  {
    msg_.heading_reset_counter = std::move(arg);
    return Init_VehicleLocalPositionGroundtruth_heading_good_for_control(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLocalPositionGroundtruth msg_;
};

class Init_VehicleLocalPositionGroundtruth_delta_heading
{
public:
  explicit Init_VehicleLocalPositionGroundtruth_delta_heading(::px4_msgs::msg::VehicleLocalPositionGroundtruth & msg)
  : msg_(msg)
  {}
  Init_VehicleLocalPositionGroundtruth_heading_reset_counter delta_heading(::px4_msgs::msg::VehicleLocalPositionGroundtruth::_delta_heading_type arg)
  {
    msg_.delta_heading = std::move(arg);
    return Init_VehicleLocalPositionGroundtruth_heading_reset_counter(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLocalPositionGroundtruth msg_;
};

class Init_VehicleLocalPositionGroundtruth_heading
{
public:
  explicit Init_VehicleLocalPositionGroundtruth_heading(::px4_msgs::msg::VehicleLocalPositionGroundtruth & msg)
  : msg_(msg)
  {}
  Init_VehicleLocalPositionGroundtruth_delta_heading heading(::px4_msgs::msg::VehicleLocalPositionGroundtruth::_heading_type arg)
  {
    msg_.heading = std::move(arg);
    return Init_VehicleLocalPositionGroundtruth_delta_heading(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLocalPositionGroundtruth msg_;
};

class Init_VehicleLocalPositionGroundtruth_az
{
public:
  explicit Init_VehicleLocalPositionGroundtruth_az(::px4_msgs::msg::VehicleLocalPositionGroundtruth & msg)
  : msg_(msg)
  {}
  Init_VehicleLocalPositionGroundtruth_heading az(::px4_msgs::msg::VehicleLocalPositionGroundtruth::_az_type arg)
  {
    msg_.az = std::move(arg);
    return Init_VehicleLocalPositionGroundtruth_heading(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLocalPositionGroundtruth msg_;
};

class Init_VehicleLocalPositionGroundtruth_ay
{
public:
  explicit Init_VehicleLocalPositionGroundtruth_ay(::px4_msgs::msg::VehicleLocalPositionGroundtruth & msg)
  : msg_(msg)
  {}
  Init_VehicleLocalPositionGroundtruth_az ay(::px4_msgs::msg::VehicleLocalPositionGroundtruth::_ay_type arg)
  {
    msg_.ay = std::move(arg);
    return Init_VehicleLocalPositionGroundtruth_az(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLocalPositionGroundtruth msg_;
};

class Init_VehicleLocalPositionGroundtruth_ax
{
public:
  explicit Init_VehicleLocalPositionGroundtruth_ax(::px4_msgs::msg::VehicleLocalPositionGroundtruth & msg)
  : msg_(msg)
  {}
  Init_VehicleLocalPositionGroundtruth_ay ax(::px4_msgs::msg::VehicleLocalPositionGroundtruth::_ax_type arg)
  {
    msg_.ax = std::move(arg);
    return Init_VehicleLocalPositionGroundtruth_ay(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLocalPositionGroundtruth msg_;
};

class Init_VehicleLocalPositionGroundtruth_vz_reset_counter
{
public:
  explicit Init_VehicleLocalPositionGroundtruth_vz_reset_counter(::px4_msgs::msg::VehicleLocalPositionGroundtruth & msg)
  : msg_(msg)
  {}
  Init_VehicleLocalPositionGroundtruth_ax vz_reset_counter(::px4_msgs::msg::VehicleLocalPositionGroundtruth::_vz_reset_counter_type arg)
  {
    msg_.vz_reset_counter = std::move(arg);
    return Init_VehicleLocalPositionGroundtruth_ax(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLocalPositionGroundtruth msg_;
};

class Init_VehicleLocalPositionGroundtruth_delta_vz
{
public:
  explicit Init_VehicleLocalPositionGroundtruth_delta_vz(::px4_msgs::msg::VehicleLocalPositionGroundtruth & msg)
  : msg_(msg)
  {}
  Init_VehicleLocalPositionGroundtruth_vz_reset_counter delta_vz(::px4_msgs::msg::VehicleLocalPositionGroundtruth::_delta_vz_type arg)
  {
    msg_.delta_vz = std::move(arg);
    return Init_VehicleLocalPositionGroundtruth_vz_reset_counter(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLocalPositionGroundtruth msg_;
};

class Init_VehicleLocalPositionGroundtruth_vxy_reset_counter
{
public:
  explicit Init_VehicleLocalPositionGroundtruth_vxy_reset_counter(::px4_msgs::msg::VehicleLocalPositionGroundtruth & msg)
  : msg_(msg)
  {}
  Init_VehicleLocalPositionGroundtruth_delta_vz vxy_reset_counter(::px4_msgs::msg::VehicleLocalPositionGroundtruth::_vxy_reset_counter_type arg)
  {
    msg_.vxy_reset_counter = std::move(arg);
    return Init_VehicleLocalPositionGroundtruth_delta_vz(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLocalPositionGroundtruth msg_;
};

class Init_VehicleLocalPositionGroundtruth_delta_vxy
{
public:
  explicit Init_VehicleLocalPositionGroundtruth_delta_vxy(::px4_msgs::msg::VehicleLocalPositionGroundtruth & msg)
  : msg_(msg)
  {}
  Init_VehicleLocalPositionGroundtruth_vxy_reset_counter delta_vxy(::px4_msgs::msg::VehicleLocalPositionGroundtruth::_delta_vxy_type arg)
  {
    msg_.delta_vxy = std::move(arg);
    return Init_VehicleLocalPositionGroundtruth_vxy_reset_counter(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLocalPositionGroundtruth msg_;
};

class Init_VehicleLocalPositionGroundtruth_z_deriv
{
public:
  explicit Init_VehicleLocalPositionGroundtruth_z_deriv(::px4_msgs::msg::VehicleLocalPositionGroundtruth & msg)
  : msg_(msg)
  {}
  Init_VehicleLocalPositionGroundtruth_delta_vxy z_deriv(::px4_msgs::msg::VehicleLocalPositionGroundtruth::_z_deriv_type arg)
  {
    msg_.z_deriv = std::move(arg);
    return Init_VehicleLocalPositionGroundtruth_delta_vxy(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLocalPositionGroundtruth msg_;
};

class Init_VehicleLocalPositionGroundtruth_vz
{
public:
  explicit Init_VehicleLocalPositionGroundtruth_vz(::px4_msgs::msg::VehicleLocalPositionGroundtruth & msg)
  : msg_(msg)
  {}
  Init_VehicleLocalPositionGroundtruth_z_deriv vz(::px4_msgs::msg::VehicleLocalPositionGroundtruth::_vz_type arg)
  {
    msg_.vz = std::move(arg);
    return Init_VehicleLocalPositionGroundtruth_z_deriv(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLocalPositionGroundtruth msg_;
};

class Init_VehicleLocalPositionGroundtruth_vy
{
public:
  explicit Init_VehicleLocalPositionGroundtruth_vy(::px4_msgs::msg::VehicleLocalPositionGroundtruth & msg)
  : msg_(msg)
  {}
  Init_VehicleLocalPositionGroundtruth_vz vy(::px4_msgs::msg::VehicleLocalPositionGroundtruth::_vy_type arg)
  {
    msg_.vy = std::move(arg);
    return Init_VehicleLocalPositionGroundtruth_vz(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLocalPositionGroundtruth msg_;
};

class Init_VehicleLocalPositionGroundtruth_vx
{
public:
  explicit Init_VehicleLocalPositionGroundtruth_vx(::px4_msgs::msg::VehicleLocalPositionGroundtruth & msg)
  : msg_(msg)
  {}
  Init_VehicleLocalPositionGroundtruth_vy vx(::px4_msgs::msg::VehicleLocalPositionGroundtruth::_vx_type arg)
  {
    msg_.vx = std::move(arg);
    return Init_VehicleLocalPositionGroundtruth_vy(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLocalPositionGroundtruth msg_;
};

class Init_VehicleLocalPositionGroundtruth_z_reset_counter
{
public:
  explicit Init_VehicleLocalPositionGroundtruth_z_reset_counter(::px4_msgs::msg::VehicleLocalPositionGroundtruth & msg)
  : msg_(msg)
  {}
  Init_VehicleLocalPositionGroundtruth_vx z_reset_counter(::px4_msgs::msg::VehicleLocalPositionGroundtruth::_z_reset_counter_type arg)
  {
    msg_.z_reset_counter = std::move(arg);
    return Init_VehicleLocalPositionGroundtruth_vx(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLocalPositionGroundtruth msg_;
};

class Init_VehicleLocalPositionGroundtruth_delta_z
{
public:
  explicit Init_VehicleLocalPositionGroundtruth_delta_z(::px4_msgs::msg::VehicleLocalPositionGroundtruth & msg)
  : msg_(msg)
  {}
  Init_VehicleLocalPositionGroundtruth_z_reset_counter delta_z(::px4_msgs::msg::VehicleLocalPositionGroundtruth::_delta_z_type arg)
  {
    msg_.delta_z = std::move(arg);
    return Init_VehicleLocalPositionGroundtruth_z_reset_counter(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLocalPositionGroundtruth msg_;
};

class Init_VehicleLocalPositionGroundtruth_xy_reset_counter
{
public:
  explicit Init_VehicleLocalPositionGroundtruth_xy_reset_counter(::px4_msgs::msg::VehicleLocalPositionGroundtruth & msg)
  : msg_(msg)
  {}
  Init_VehicleLocalPositionGroundtruth_delta_z xy_reset_counter(::px4_msgs::msg::VehicleLocalPositionGroundtruth::_xy_reset_counter_type arg)
  {
    msg_.xy_reset_counter = std::move(arg);
    return Init_VehicleLocalPositionGroundtruth_delta_z(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLocalPositionGroundtruth msg_;
};

class Init_VehicleLocalPositionGroundtruth_delta_xy
{
public:
  explicit Init_VehicleLocalPositionGroundtruth_delta_xy(::px4_msgs::msg::VehicleLocalPositionGroundtruth & msg)
  : msg_(msg)
  {}
  Init_VehicleLocalPositionGroundtruth_xy_reset_counter delta_xy(::px4_msgs::msg::VehicleLocalPositionGroundtruth::_delta_xy_type arg)
  {
    msg_.delta_xy = std::move(arg);
    return Init_VehicleLocalPositionGroundtruth_xy_reset_counter(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLocalPositionGroundtruth msg_;
};

class Init_VehicleLocalPositionGroundtruth_z
{
public:
  explicit Init_VehicleLocalPositionGroundtruth_z(::px4_msgs::msg::VehicleLocalPositionGroundtruth & msg)
  : msg_(msg)
  {}
  Init_VehicleLocalPositionGroundtruth_delta_xy z(::px4_msgs::msg::VehicleLocalPositionGroundtruth::_z_type arg)
  {
    msg_.z = std::move(arg);
    return Init_VehicleLocalPositionGroundtruth_delta_xy(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLocalPositionGroundtruth msg_;
};

class Init_VehicleLocalPositionGroundtruth_y
{
public:
  explicit Init_VehicleLocalPositionGroundtruth_y(::px4_msgs::msg::VehicleLocalPositionGroundtruth & msg)
  : msg_(msg)
  {}
  Init_VehicleLocalPositionGroundtruth_z y(::px4_msgs::msg::VehicleLocalPositionGroundtruth::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_VehicleLocalPositionGroundtruth_z(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLocalPositionGroundtruth msg_;
};

class Init_VehicleLocalPositionGroundtruth_x
{
public:
  explicit Init_VehicleLocalPositionGroundtruth_x(::px4_msgs::msg::VehicleLocalPositionGroundtruth & msg)
  : msg_(msg)
  {}
  Init_VehicleLocalPositionGroundtruth_y x(::px4_msgs::msg::VehicleLocalPositionGroundtruth::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_VehicleLocalPositionGroundtruth_y(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLocalPositionGroundtruth msg_;
};

class Init_VehicleLocalPositionGroundtruth_v_z_valid
{
public:
  explicit Init_VehicleLocalPositionGroundtruth_v_z_valid(::px4_msgs::msg::VehicleLocalPositionGroundtruth & msg)
  : msg_(msg)
  {}
  Init_VehicleLocalPositionGroundtruth_x v_z_valid(::px4_msgs::msg::VehicleLocalPositionGroundtruth::_v_z_valid_type arg)
  {
    msg_.v_z_valid = std::move(arg);
    return Init_VehicleLocalPositionGroundtruth_x(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLocalPositionGroundtruth msg_;
};

class Init_VehicleLocalPositionGroundtruth_v_xy_valid
{
public:
  explicit Init_VehicleLocalPositionGroundtruth_v_xy_valid(::px4_msgs::msg::VehicleLocalPositionGroundtruth & msg)
  : msg_(msg)
  {}
  Init_VehicleLocalPositionGroundtruth_v_z_valid v_xy_valid(::px4_msgs::msg::VehicleLocalPositionGroundtruth::_v_xy_valid_type arg)
  {
    msg_.v_xy_valid = std::move(arg);
    return Init_VehicleLocalPositionGroundtruth_v_z_valid(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLocalPositionGroundtruth msg_;
};

class Init_VehicleLocalPositionGroundtruth_z_valid
{
public:
  explicit Init_VehicleLocalPositionGroundtruth_z_valid(::px4_msgs::msg::VehicleLocalPositionGroundtruth & msg)
  : msg_(msg)
  {}
  Init_VehicleLocalPositionGroundtruth_v_xy_valid z_valid(::px4_msgs::msg::VehicleLocalPositionGroundtruth::_z_valid_type arg)
  {
    msg_.z_valid = std::move(arg);
    return Init_VehicleLocalPositionGroundtruth_v_xy_valid(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLocalPositionGroundtruth msg_;
};

class Init_VehicleLocalPositionGroundtruth_xy_valid
{
public:
  explicit Init_VehicleLocalPositionGroundtruth_xy_valid(::px4_msgs::msg::VehicleLocalPositionGroundtruth & msg)
  : msg_(msg)
  {}
  Init_VehicleLocalPositionGroundtruth_z_valid xy_valid(::px4_msgs::msg::VehicleLocalPositionGroundtruth::_xy_valid_type arg)
  {
    msg_.xy_valid = std::move(arg);
    return Init_VehicleLocalPositionGroundtruth_z_valid(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLocalPositionGroundtruth msg_;
};

class Init_VehicleLocalPositionGroundtruth_timestamp_sample
{
public:
  explicit Init_VehicleLocalPositionGroundtruth_timestamp_sample(::px4_msgs::msg::VehicleLocalPositionGroundtruth & msg)
  : msg_(msg)
  {}
  Init_VehicleLocalPositionGroundtruth_xy_valid timestamp_sample(::px4_msgs::msg::VehicleLocalPositionGroundtruth::_timestamp_sample_type arg)
  {
    msg_.timestamp_sample = std::move(arg);
    return Init_VehicleLocalPositionGroundtruth_xy_valid(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLocalPositionGroundtruth msg_;
};

class Init_VehicleLocalPositionGroundtruth_timestamp
{
public:
  Init_VehicleLocalPositionGroundtruth_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleLocalPositionGroundtruth_timestamp_sample timestamp(::px4_msgs::msg::VehicleLocalPositionGroundtruth::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_VehicleLocalPositionGroundtruth_timestamp_sample(msg_);
  }

private:
  ::px4_msgs::msg::VehicleLocalPositionGroundtruth msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::VehicleLocalPositionGroundtruth>()
{
  return px4_msgs::msg::builder::Init_VehicleLocalPositionGroundtruth_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_LOCAL_POSITION_GROUNDTRUTH__BUILDER_HPP_
