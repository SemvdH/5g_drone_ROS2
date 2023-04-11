// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from px4_msgs:msg/VehicleStatusFlags.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_STATUS_FLAGS__TRAITS_HPP_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_STATUS_FLAGS__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "px4_msgs/msg/detail/vehicle_status_flags__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace px4_msgs
{

namespace msg
{

inline void to_flow_style_yaml(
  const VehicleStatusFlags & msg,
  std::ostream & out)
{
  out << "{";
  // member: timestamp
  {
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << ", ";
  }

  // member: calibration_enabled
  {
    out << "calibration_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.calibration_enabled, out);
    out << ", ";
  }

  // member: system_sensors_initialized
  {
    out << "system_sensors_initialized: ";
    rosidl_generator_traits::value_to_yaml(msg.system_sensors_initialized, out);
    out << ", ";
  }

  // member: system_hotplug_timeout
  {
    out << "system_hotplug_timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.system_hotplug_timeout, out);
    out << ", ";
  }

  // member: auto_mission_available
  {
    out << "auto_mission_available: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_mission_available, out);
    out << ", ";
  }

  // member: angular_velocity_valid
  {
    out << "angular_velocity_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_velocity_valid, out);
    out << ", ";
  }

  // member: attitude_valid
  {
    out << "attitude_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.attitude_valid, out);
    out << ", ";
  }

  // member: local_altitude_valid
  {
    out << "local_altitude_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.local_altitude_valid, out);
    out << ", ";
  }

  // member: local_position_valid
  {
    out << "local_position_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.local_position_valid, out);
    out << ", ";
  }

  // member: local_velocity_valid
  {
    out << "local_velocity_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.local_velocity_valid, out);
    out << ", ";
  }

  // member: global_position_valid
  {
    out << "global_position_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.global_position_valid, out);
    out << ", ";
  }

  // member: gps_position_valid
  {
    out << "gps_position_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_position_valid, out);
    out << ", ";
  }

  // member: home_position_valid
  {
    out << "home_position_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.home_position_valid, out);
    out << ", ";
  }

  // member: power_input_valid
  {
    out << "power_input_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.power_input_valid, out);
    out << ", ";
  }

  // member: battery_healthy
  {
    out << "battery_healthy: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_healthy, out);
    out << ", ";
  }

  // member: escs_error
  {
    out << "escs_error: ";
    rosidl_generator_traits::value_to_yaml(msg.escs_error, out);
    out << ", ";
  }

  // member: escs_failure
  {
    out << "escs_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.escs_failure, out);
    out << ", ";
  }

  // member: position_reliant_on_gps
  {
    out << "position_reliant_on_gps: ";
    rosidl_generator_traits::value_to_yaml(msg.position_reliant_on_gps, out);
    out << ", ";
  }

  // member: position_reliant_on_optical_flow
  {
    out << "position_reliant_on_optical_flow: ";
    rosidl_generator_traits::value_to_yaml(msg.position_reliant_on_optical_flow, out);
    out << ", ";
  }

  // member: position_reliant_on_vision_position
  {
    out << "position_reliant_on_vision_position: ";
    rosidl_generator_traits::value_to_yaml(msg.position_reliant_on_vision_position, out);
    out << ", ";
  }

  // member: dead_reckoning
  {
    out << "dead_reckoning: ";
    rosidl_generator_traits::value_to_yaml(msg.dead_reckoning, out);
    out << ", ";
  }

  // member: flight_terminated
  {
    out << "flight_terminated: ";
    rosidl_generator_traits::value_to_yaml(msg.flight_terminated, out);
    out << ", ";
  }

  // member: circuit_breaker_engaged_power_check
  {
    out << "circuit_breaker_engaged_power_check: ";
    rosidl_generator_traits::value_to_yaml(msg.circuit_breaker_engaged_power_check, out);
    out << ", ";
  }

  // member: circuit_breaker_engaged_airspd_check
  {
    out << "circuit_breaker_engaged_airspd_check: ";
    rosidl_generator_traits::value_to_yaml(msg.circuit_breaker_engaged_airspd_check, out);
    out << ", ";
  }

  // member: circuit_breaker_engaged_enginefailure_check
  {
    out << "circuit_breaker_engaged_enginefailure_check: ";
    rosidl_generator_traits::value_to_yaml(msg.circuit_breaker_engaged_enginefailure_check, out);
    out << ", ";
  }

  // member: circuit_breaker_flight_termination_disabled
  {
    out << "circuit_breaker_flight_termination_disabled: ";
    rosidl_generator_traits::value_to_yaml(msg.circuit_breaker_flight_termination_disabled, out);
    out << ", ";
  }

  // member: circuit_breaker_engaged_usb_check
  {
    out << "circuit_breaker_engaged_usb_check: ";
    rosidl_generator_traits::value_to_yaml(msg.circuit_breaker_engaged_usb_check, out);
    out << ", ";
  }

  // member: circuit_breaker_engaged_posfailure_check
  {
    out << "circuit_breaker_engaged_posfailure_check: ";
    rosidl_generator_traits::value_to_yaml(msg.circuit_breaker_engaged_posfailure_check, out);
    out << ", ";
  }

  // member: circuit_breaker_vtol_fw_arming_check
  {
    out << "circuit_breaker_vtol_fw_arming_check: ";
    rosidl_generator_traits::value_to_yaml(msg.circuit_breaker_vtol_fw_arming_check, out);
    out << ", ";
  }

  // member: offboard_control_signal_lost
  {
    out << "offboard_control_signal_lost: ";
    rosidl_generator_traits::value_to_yaml(msg.offboard_control_signal_lost, out);
    out << ", ";
  }

  // member: rc_signal_found_once
  {
    out << "rc_signal_found_once: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_signal_found_once, out);
    out << ", ";
  }

  // member: rc_calibration_in_progress
  {
    out << "rc_calibration_in_progress: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_calibration_in_progress, out);
    out << ", ";
  }

  // member: rc_calibration_valid
  {
    out << "rc_calibration_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_calibration_valid, out);
    out << ", ";
  }

  // member: vtol_transition_failure
  {
    out << "vtol_transition_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.vtol_transition_failure, out);
    out << ", ";
  }

  // member: usb_connected
  {
    out << "usb_connected: ";
    rosidl_generator_traits::value_to_yaml(msg.usb_connected, out);
    out << ", ";
  }

  // member: sd_card_detected_once
  {
    out << "sd_card_detected_once: ";
    rosidl_generator_traits::value_to_yaml(msg.sd_card_detected_once, out);
    out << ", ";
  }

  // member: avoidance_system_required
  {
    out << "avoidance_system_required: ";
    rosidl_generator_traits::value_to_yaml(msg.avoidance_system_required, out);
    out << ", ";
  }

  // member: avoidance_system_valid
  {
    out << "avoidance_system_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.avoidance_system_valid, out);
    out << ", ";
  }

  // member: parachute_system_present
  {
    out << "parachute_system_present: ";
    rosidl_generator_traits::value_to_yaml(msg.parachute_system_present, out);
    out << ", ";
  }

  // member: parachute_system_healthy
  {
    out << "parachute_system_healthy: ";
    rosidl_generator_traits::value_to_yaml(msg.parachute_system_healthy, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const VehicleStatusFlags & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: timestamp
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "timestamp: ";
    rosidl_generator_traits::value_to_yaml(msg.timestamp, out);
    out << "\n";
  }

  // member: calibration_enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "calibration_enabled: ";
    rosidl_generator_traits::value_to_yaml(msg.calibration_enabled, out);
    out << "\n";
  }

  // member: system_sensors_initialized
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "system_sensors_initialized: ";
    rosidl_generator_traits::value_to_yaml(msg.system_sensors_initialized, out);
    out << "\n";
  }

  // member: system_hotplug_timeout
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "system_hotplug_timeout: ";
    rosidl_generator_traits::value_to_yaml(msg.system_hotplug_timeout, out);
    out << "\n";
  }

  // member: auto_mission_available
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "auto_mission_available: ";
    rosidl_generator_traits::value_to_yaml(msg.auto_mission_available, out);
    out << "\n";
  }

  // member: angular_velocity_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_velocity_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_velocity_valid, out);
    out << "\n";
  }

  // member: attitude_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attitude_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.attitude_valid, out);
    out << "\n";
  }

  // member: local_altitude_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "local_altitude_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.local_altitude_valid, out);
    out << "\n";
  }

  // member: local_position_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "local_position_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.local_position_valid, out);
    out << "\n";
  }

  // member: local_velocity_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "local_velocity_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.local_velocity_valid, out);
    out << "\n";
  }

  // member: global_position_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "global_position_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.global_position_valid, out);
    out << "\n";
  }

  // member: gps_position_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "gps_position_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.gps_position_valid, out);
    out << "\n";
  }

  // member: home_position_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "home_position_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.home_position_valid, out);
    out << "\n";
  }

  // member: power_input_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power_input_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.power_input_valid, out);
    out << "\n";
  }

  // member: battery_healthy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "battery_healthy: ";
    rosidl_generator_traits::value_to_yaml(msg.battery_healthy, out);
    out << "\n";
  }

  // member: escs_error
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "escs_error: ";
    rosidl_generator_traits::value_to_yaml(msg.escs_error, out);
    out << "\n";
  }

  // member: escs_failure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "escs_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.escs_failure, out);
    out << "\n";
  }

  // member: position_reliant_on_gps
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_reliant_on_gps: ";
    rosidl_generator_traits::value_to_yaml(msg.position_reliant_on_gps, out);
    out << "\n";
  }

  // member: position_reliant_on_optical_flow
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_reliant_on_optical_flow: ";
    rosidl_generator_traits::value_to_yaml(msg.position_reliant_on_optical_flow, out);
    out << "\n";
  }

  // member: position_reliant_on_vision_position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position_reliant_on_vision_position: ";
    rosidl_generator_traits::value_to_yaml(msg.position_reliant_on_vision_position, out);
    out << "\n";
  }

  // member: dead_reckoning
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dead_reckoning: ";
    rosidl_generator_traits::value_to_yaml(msg.dead_reckoning, out);
    out << "\n";
  }

  // member: flight_terminated
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flight_terminated: ";
    rosidl_generator_traits::value_to_yaml(msg.flight_terminated, out);
    out << "\n";
  }

  // member: circuit_breaker_engaged_power_check
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "circuit_breaker_engaged_power_check: ";
    rosidl_generator_traits::value_to_yaml(msg.circuit_breaker_engaged_power_check, out);
    out << "\n";
  }

  // member: circuit_breaker_engaged_airspd_check
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "circuit_breaker_engaged_airspd_check: ";
    rosidl_generator_traits::value_to_yaml(msg.circuit_breaker_engaged_airspd_check, out);
    out << "\n";
  }

  // member: circuit_breaker_engaged_enginefailure_check
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "circuit_breaker_engaged_enginefailure_check: ";
    rosidl_generator_traits::value_to_yaml(msg.circuit_breaker_engaged_enginefailure_check, out);
    out << "\n";
  }

  // member: circuit_breaker_flight_termination_disabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "circuit_breaker_flight_termination_disabled: ";
    rosidl_generator_traits::value_to_yaml(msg.circuit_breaker_flight_termination_disabled, out);
    out << "\n";
  }

  // member: circuit_breaker_engaged_usb_check
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "circuit_breaker_engaged_usb_check: ";
    rosidl_generator_traits::value_to_yaml(msg.circuit_breaker_engaged_usb_check, out);
    out << "\n";
  }

  // member: circuit_breaker_engaged_posfailure_check
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "circuit_breaker_engaged_posfailure_check: ";
    rosidl_generator_traits::value_to_yaml(msg.circuit_breaker_engaged_posfailure_check, out);
    out << "\n";
  }

  // member: circuit_breaker_vtol_fw_arming_check
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "circuit_breaker_vtol_fw_arming_check: ";
    rosidl_generator_traits::value_to_yaml(msg.circuit_breaker_vtol_fw_arming_check, out);
    out << "\n";
  }

  // member: offboard_control_signal_lost
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "offboard_control_signal_lost: ";
    rosidl_generator_traits::value_to_yaml(msg.offboard_control_signal_lost, out);
    out << "\n";
  }

  // member: rc_signal_found_once
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rc_signal_found_once: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_signal_found_once, out);
    out << "\n";
  }

  // member: rc_calibration_in_progress
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rc_calibration_in_progress: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_calibration_in_progress, out);
    out << "\n";
  }

  // member: rc_calibration_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "rc_calibration_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.rc_calibration_valid, out);
    out << "\n";
  }

  // member: vtol_transition_failure
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "vtol_transition_failure: ";
    rosidl_generator_traits::value_to_yaml(msg.vtol_transition_failure, out);
    out << "\n";
  }

  // member: usb_connected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "usb_connected: ";
    rosidl_generator_traits::value_to_yaml(msg.usb_connected, out);
    out << "\n";
  }

  // member: sd_card_detected_once
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sd_card_detected_once: ";
    rosidl_generator_traits::value_to_yaml(msg.sd_card_detected_once, out);
    out << "\n";
  }

  // member: avoidance_system_required
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "avoidance_system_required: ";
    rosidl_generator_traits::value_to_yaml(msg.avoidance_system_required, out);
    out << "\n";
  }

  // member: avoidance_system_valid
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "avoidance_system_valid: ";
    rosidl_generator_traits::value_to_yaml(msg.avoidance_system_valid, out);
    out << "\n";
  }

  // member: parachute_system_present
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parachute_system_present: ";
    rosidl_generator_traits::value_to_yaml(msg.parachute_system_present, out);
    out << "\n";
  }

  // member: parachute_system_healthy
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "parachute_system_healthy: ";
    rosidl_generator_traits::value_to_yaml(msg.parachute_system_healthy, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const VehicleStatusFlags & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace px4_msgs

namespace rosidl_generator_traits
{

[[deprecated("use px4_msgs::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const px4_msgs::msg::VehicleStatusFlags & msg,
  std::ostream & out, size_t indentation = 0)
{
  px4_msgs::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use px4_msgs::msg::to_yaml() instead")]]
inline std::string to_yaml(const px4_msgs::msg::VehicleStatusFlags & msg)
{
  return px4_msgs::msg::to_yaml(msg);
}

template<>
inline const char * data_type<px4_msgs::msg::VehicleStatusFlags>()
{
  return "px4_msgs::msg::VehicleStatusFlags";
}

template<>
inline const char * name<px4_msgs::msg::VehicleStatusFlags>()
{
  return "px4_msgs/msg/VehicleStatusFlags";
}

template<>
struct has_fixed_size<px4_msgs::msg::VehicleStatusFlags>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<px4_msgs::msg::VehicleStatusFlags>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<px4_msgs::msg::VehicleStatusFlags>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_STATUS_FLAGS__TRAITS_HPP_
