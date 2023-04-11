// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/VehicleStatusFlags.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_STATUS_FLAGS__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_STATUS_FLAGS__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "px4_msgs/msg/detail/vehicle_status_flags__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_VehicleStatusFlags_parachute_system_healthy
{
public:
  explicit Init_VehicleStatusFlags_parachute_system_healthy(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::VehicleStatusFlags parachute_system_healthy(::px4_msgs::msg::VehicleStatusFlags::_parachute_system_healthy_type arg)
  {
    msg_.parachute_system_healthy = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_parachute_system_present
{
public:
  explicit Init_VehicleStatusFlags_parachute_system_present(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_parachute_system_healthy parachute_system_present(::px4_msgs::msg::VehicleStatusFlags::_parachute_system_present_type arg)
  {
    msg_.parachute_system_present = std::move(arg);
    return Init_VehicleStatusFlags_parachute_system_healthy(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_avoidance_system_valid
{
public:
  explicit Init_VehicleStatusFlags_avoidance_system_valid(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_parachute_system_present avoidance_system_valid(::px4_msgs::msg::VehicleStatusFlags::_avoidance_system_valid_type arg)
  {
    msg_.avoidance_system_valid = std::move(arg);
    return Init_VehicleStatusFlags_parachute_system_present(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_avoidance_system_required
{
public:
  explicit Init_VehicleStatusFlags_avoidance_system_required(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_avoidance_system_valid avoidance_system_required(::px4_msgs::msg::VehicleStatusFlags::_avoidance_system_required_type arg)
  {
    msg_.avoidance_system_required = std::move(arg);
    return Init_VehicleStatusFlags_avoidance_system_valid(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_sd_card_detected_once
{
public:
  explicit Init_VehicleStatusFlags_sd_card_detected_once(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_avoidance_system_required sd_card_detected_once(::px4_msgs::msg::VehicleStatusFlags::_sd_card_detected_once_type arg)
  {
    msg_.sd_card_detected_once = std::move(arg);
    return Init_VehicleStatusFlags_avoidance_system_required(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_usb_connected
{
public:
  explicit Init_VehicleStatusFlags_usb_connected(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_sd_card_detected_once usb_connected(::px4_msgs::msg::VehicleStatusFlags::_usb_connected_type arg)
  {
    msg_.usb_connected = std::move(arg);
    return Init_VehicleStatusFlags_sd_card_detected_once(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_vtol_transition_failure
{
public:
  explicit Init_VehicleStatusFlags_vtol_transition_failure(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_usb_connected vtol_transition_failure(::px4_msgs::msg::VehicleStatusFlags::_vtol_transition_failure_type arg)
  {
    msg_.vtol_transition_failure = std::move(arg);
    return Init_VehicleStatusFlags_usb_connected(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_rc_calibration_valid
{
public:
  explicit Init_VehicleStatusFlags_rc_calibration_valid(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_vtol_transition_failure rc_calibration_valid(::px4_msgs::msg::VehicleStatusFlags::_rc_calibration_valid_type arg)
  {
    msg_.rc_calibration_valid = std::move(arg);
    return Init_VehicleStatusFlags_vtol_transition_failure(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_rc_calibration_in_progress
{
public:
  explicit Init_VehicleStatusFlags_rc_calibration_in_progress(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_rc_calibration_valid rc_calibration_in_progress(::px4_msgs::msg::VehicleStatusFlags::_rc_calibration_in_progress_type arg)
  {
    msg_.rc_calibration_in_progress = std::move(arg);
    return Init_VehicleStatusFlags_rc_calibration_valid(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_rc_signal_found_once
{
public:
  explicit Init_VehicleStatusFlags_rc_signal_found_once(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_rc_calibration_in_progress rc_signal_found_once(::px4_msgs::msg::VehicleStatusFlags::_rc_signal_found_once_type arg)
  {
    msg_.rc_signal_found_once = std::move(arg);
    return Init_VehicleStatusFlags_rc_calibration_in_progress(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_offboard_control_signal_lost
{
public:
  explicit Init_VehicleStatusFlags_offboard_control_signal_lost(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_rc_signal_found_once offboard_control_signal_lost(::px4_msgs::msg::VehicleStatusFlags::_offboard_control_signal_lost_type arg)
  {
    msg_.offboard_control_signal_lost = std::move(arg);
    return Init_VehicleStatusFlags_rc_signal_found_once(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_circuit_breaker_vtol_fw_arming_check
{
public:
  explicit Init_VehicleStatusFlags_circuit_breaker_vtol_fw_arming_check(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_offboard_control_signal_lost circuit_breaker_vtol_fw_arming_check(::px4_msgs::msg::VehicleStatusFlags::_circuit_breaker_vtol_fw_arming_check_type arg)
  {
    msg_.circuit_breaker_vtol_fw_arming_check = std::move(arg);
    return Init_VehicleStatusFlags_offboard_control_signal_lost(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_circuit_breaker_engaged_posfailure_check
{
public:
  explicit Init_VehicleStatusFlags_circuit_breaker_engaged_posfailure_check(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_circuit_breaker_vtol_fw_arming_check circuit_breaker_engaged_posfailure_check(::px4_msgs::msg::VehicleStatusFlags::_circuit_breaker_engaged_posfailure_check_type arg)
  {
    msg_.circuit_breaker_engaged_posfailure_check = std::move(arg);
    return Init_VehicleStatusFlags_circuit_breaker_vtol_fw_arming_check(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_circuit_breaker_engaged_usb_check
{
public:
  explicit Init_VehicleStatusFlags_circuit_breaker_engaged_usb_check(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_circuit_breaker_engaged_posfailure_check circuit_breaker_engaged_usb_check(::px4_msgs::msg::VehicleStatusFlags::_circuit_breaker_engaged_usb_check_type arg)
  {
    msg_.circuit_breaker_engaged_usb_check = std::move(arg);
    return Init_VehicleStatusFlags_circuit_breaker_engaged_posfailure_check(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_circuit_breaker_flight_termination_disabled
{
public:
  explicit Init_VehicleStatusFlags_circuit_breaker_flight_termination_disabled(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_circuit_breaker_engaged_usb_check circuit_breaker_flight_termination_disabled(::px4_msgs::msg::VehicleStatusFlags::_circuit_breaker_flight_termination_disabled_type arg)
  {
    msg_.circuit_breaker_flight_termination_disabled = std::move(arg);
    return Init_VehicleStatusFlags_circuit_breaker_engaged_usb_check(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_circuit_breaker_engaged_enginefailure_check
{
public:
  explicit Init_VehicleStatusFlags_circuit_breaker_engaged_enginefailure_check(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_circuit_breaker_flight_termination_disabled circuit_breaker_engaged_enginefailure_check(::px4_msgs::msg::VehicleStatusFlags::_circuit_breaker_engaged_enginefailure_check_type arg)
  {
    msg_.circuit_breaker_engaged_enginefailure_check = std::move(arg);
    return Init_VehicleStatusFlags_circuit_breaker_flight_termination_disabled(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_circuit_breaker_engaged_airspd_check
{
public:
  explicit Init_VehicleStatusFlags_circuit_breaker_engaged_airspd_check(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_circuit_breaker_engaged_enginefailure_check circuit_breaker_engaged_airspd_check(::px4_msgs::msg::VehicleStatusFlags::_circuit_breaker_engaged_airspd_check_type arg)
  {
    msg_.circuit_breaker_engaged_airspd_check = std::move(arg);
    return Init_VehicleStatusFlags_circuit_breaker_engaged_enginefailure_check(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_circuit_breaker_engaged_power_check
{
public:
  explicit Init_VehicleStatusFlags_circuit_breaker_engaged_power_check(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_circuit_breaker_engaged_airspd_check circuit_breaker_engaged_power_check(::px4_msgs::msg::VehicleStatusFlags::_circuit_breaker_engaged_power_check_type arg)
  {
    msg_.circuit_breaker_engaged_power_check = std::move(arg);
    return Init_VehicleStatusFlags_circuit_breaker_engaged_airspd_check(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_flight_terminated
{
public:
  explicit Init_VehicleStatusFlags_flight_terminated(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_circuit_breaker_engaged_power_check flight_terminated(::px4_msgs::msg::VehicleStatusFlags::_flight_terminated_type arg)
  {
    msg_.flight_terminated = std::move(arg);
    return Init_VehicleStatusFlags_circuit_breaker_engaged_power_check(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_dead_reckoning
{
public:
  explicit Init_VehicleStatusFlags_dead_reckoning(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_flight_terminated dead_reckoning(::px4_msgs::msg::VehicleStatusFlags::_dead_reckoning_type arg)
  {
    msg_.dead_reckoning = std::move(arg);
    return Init_VehicleStatusFlags_flight_terminated(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_position_reliant_on_vision_position
{
public:
  explicit Init_VehicleStatusFlags_position_reliant_on_vision_position(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_dead_reckoning position_reliant_on_vision_position(::px4_msgs::msg::VehicleStatusFlags::_position_reliant_on_vision_position_type arg)
  {
    msg_.position_reliant_on_vision_position = std::move(arg);
    return Init_VehicleStatusFlags_dead_reckoning(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_position_reliant_on_optical_flow
{
public:
  explicit Init_VehicleStatusFlags_position_reliant_on_optical_flow(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_position_reliant_on_vision_position position_reliant_on_optical_flow(::px4_msgs::msg::VehicleStatusFlags::_position_reliant_on_optical_flow_type arg)
  {
    msg_.position_reliant_on_optical_flow = std::move(arg);
    return Init_VehicleStatusFlags_position_reliant_on_vision_position(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_position_reliant_on_gps
{
public:
  explicit Init_VehicleStatusFlags_position_reliant_on_gps(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_position_reliant_on_optical_flow position_reliant_on_gps(::px4_msgs::msg::VehicleStatusFlags::_position_reliant_on_gps_type arg)
  {
    msg_.position_reliant_on_gps = std::move(arg);
    return Init_VehicleStatusFlags_position_reliant_on_optical_flow(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_escs_failure
{
public:
  explicit Init_VehicleStatusFlags_escs_failure(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_position_reliant_on_gps escs_failure(::px4_msgs::msg::VehicleStatusFlags::_escs_failure_type arg)
  {
    msg_.escs_failure = std::move(arg);
    return Init_VehicleStatusFlags_position_reliant_on_gps(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_escs_error
{
public:
  explicit Init_VehicleStatusFlags_escs_error(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_escs_failure escs_error(::px4_msgs::msg::VehicleStatusFlags::_escs_error_type arg)
  {
    msg_.escs_error = std::move(arg);
    return Init_VehicleStatusFlags_escs_failure(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_battery_healthy
{
public:
  explicit Init_VehicleStatusFlags_battery_healthy(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_escs_error battery_healthy(::px4_msgs::msg::VehicleStatusFlags::_battery_healthy_type arg)
  {
    msg_.battery_healthy = std::move(arg);
    return Init_VehicleStatusFlags_escs_error(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_power_input_valid
{
public:
  explicit Init_VehicleStatusFlags_power_input_valid(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_battery_healthy power_input_valid(::px4_msgs::msg::VehicleStatusFlags::_power_input_valid_type arg)
  {
    msg_.power_input_valid = std::move(arg);
    return Init_VehicleStatusFlags_battery_healthy(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_home_position_valid
{
public:
  explicit Init_VehicleStatusFlags_home_position_valid(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_power_input_valid home_position_valid(::px4_msgs::msg::VehicleStatusFlags::_home_position_valid_type arg)
  {
    msg_.home_position_valid = std::move(arg);
    return Init_VehicleStatusFlags_power_input_valid(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_gps_position_valid
{
public:
  explicit Init_VehicleStatusFlags_gps_position_valid(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_home_position_valid gps_position_valid(::px4_msgs::msg::VehicleStatusFlags::_gps_position_valid_type arg)
  {
    msg_.gps_position_valid = std::move(arg);
    return Init_VehicleStatusFlags_home_position_valid(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_global_position_valid
{
public:
  explicit Init_VehicleStatusFlags_global_position_valid(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_gps_position_valid global_position_valid(::px4_msgs::msg::VehicleStatusFlags::_global_position_valid_type arg)
  {
    msg_.global_position_valid = std::move(arg);
    return Init_VehicleStatusFlags_gps_position_valid(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_local_velocity_valid
{
public:
  explicit Init_VehicleStatusFlags_local_velocity_valid(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_global_position_valid local_velocity_valid(::px4_msgs::msg::VehicleStatusFlags::_local_velocity_valid_type arg)
  {
    msg_.local_velocity_valid = std::move(arg);
    return Init_VehicleStatusFlags_global_position_valid(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_local_position_valid
{
public:
  explicit Init_VehicleStatusFlags_local_position_valid(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_local_velocity_valid local_position_valid(::px4_msgs::msg::VehicleStatusFlags::_local_position_valid_type arg)
  {
    msg_.local_position_valid = std::move(arg);
    return Init_VehicleStatusFlags_local_velocity_valid(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_local_altitude_valid
{
public:
  explicit Init_VehicleStatusFlags_local_altitude_valid(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_local_position_valid local_altitude_valid(::px4_msgs::msg::VehicleStatusFlags::_local_altitude_valid_type arg)
  {
    msg_.local_altitude_valid = std::move(arg);
    return Init_VehicleStatusFlags_local_position_valid(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_attitude_valid
{
public:
  explicit Init_VehicleStatusFlags_attitude_valid(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_local_altitude_valid attitude_valid(::px4_msgs::msg::VehicleStatusFlags::_attitude_valid_type arg)
  {
    msg_.attitude_valid = std::move(arg);
    return Init_VehicleStatusFlags_local_altitude_valid(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_angular_velocity_valid
{
public:
  explicit Init_VehicleStatusFlags_angular_velocity_valid(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_attitude_valid angular_velocity_valid(::px4_msgs::msg::VehicleStatusFlags::_angular_velocity_valid_type arg)
  {
    msg_.angular_velocity_valid = std::move(arg);
    return Init_VehicleStatusFlags_attitude_valid(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_auto_mission_available
{
public:
  explicit Init_VehicleStatusFlags_auto_mission_available(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_angular_velocity_valid auto_mission_available(::px4_msgs::msg::VehicleStatusFlags::_auto_mission_available_type arg)
  {
    msg_.auto_mission_available = std::move(arg);
    return Init_VehicleStatusFlags_angular_velocity_valid(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_system_hotplug_timeout
{
public:
  explicit Init_VehicleStatusFlags_system_hotplug_timeout(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_auto_mission_available system_hotplug_timeout(::px4_msgs::msg::VehicleStatusFlags::_system_hotplug_timeout_type arg)
  {
    msg_.system_hotplug_timeout = std::move(arg);
    return Init_VehicleStatusFlags_auto_mission_available(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_system_sensors_initialized
{
public:
  explicit Init_VehicleStatusFlags_system_sensors_initialized(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_system_hotplug_timeout system_sensors_initialized(::px4_msgs::msg::VehicleStatusFlags::_system_sensors_initialized_type arg)
  {
    msg_.system_sensors_initialized = std::move(arg);
    return Init_VehicleStatusFlags_system_hotplug_timeout(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_calibration_enabled
{
public:
  explicit Init_VehicleStatusFlags_calibration_enabled(::px4_msgs::msg::VehicleStatusFlags & msg)
  : msg_(msg)
  {}
  Init_VehicleStatusFlags_system_sensors_initialized calibration_enabled(::px4_msgs::msg::VehicleStatusFlags::_calibration_enabled_type arg)
  {
    msg_.calibration_enabled = std::move(arg);
    return Init_VehicleStatusFlags_system_sensors_initialized(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

class Init_VehicleStatusFlags_timestamp
{
public:
  Init_VehicleStatusFlags_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_VehicleStatusFlags_calibration_enabled timestamp(::px4_msgs::msg::VehicleStatusFlags::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_VehicleStatusFlags_calibration_enabled(msg_);
  }

private:
  ::px4_msgs::msg::VehicleStatusFlags msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::VehicleStatusFlags>()
{
  return px4_msgs::msg::builder::Init_VehicleStatusFlags_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_STATUS_FLAGS__BUILDER_HPP_
