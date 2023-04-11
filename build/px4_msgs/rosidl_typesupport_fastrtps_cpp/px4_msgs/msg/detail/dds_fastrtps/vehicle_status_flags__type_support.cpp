// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from px4_msgs:msg/VehicleStatusFlags.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/vehicle_status_flags__rosidl_typesupport_fastrtps_cpp.hpp"
#include "px4_msgs/msg/detail/vehicle_status_flags__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace px4_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_serialize(
  const px4_msgs::msg::VehicleStatusFlags & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: timestamp
  cdr << ros_message.timestamp;
  // Member: calibration_enabled
  cdr << (ros_message.calibration_enabled ? true : false);
  // Member: system_sensors_initialized
  cdr << (ros_message.system_sensors_initialized ? true : false);
  // Member: system_hotplug_timeout
  cdr << (ros_message.system_hotplug_timeout ? true : false);
  // Member: auto_mission_available
  cdr << (ros_message.auto_mission_available ? true : false);
  // Member: angular_velocity_valid
  cdr << (ros_message.angular_velocity_valid ? true : false);
  // Member: attitude_valid
  cdr << (ros_message.attitude_valid ? true : false);
  // Member: local_altitude_valid
  cdr << (ros_message.local_altitude_valid ? true : false);
  // Member: local_position_valid
  cdr << (ros_message.local_position_valid ? true : false);
  // Member: local_velocity_valid
  cdr << (ros_message.local_velocity_valid ? true : false);
  // Member: global_position_valid
  cdr << (ros_message.global_position_valid ? true : false);
  // Member: gps_position_valid
  cdr << (ros_message.gps_position_valid ? true : false);
  // Member: home_position_valid
  cdr << (ros_message.home_position_valid ? true : false);
  // Member: power_input_valid
  cdr << (ros_message.power_input_valid ? true : false);
  // Member: battery_healthy
  cdr << (ros_message.battery_healthy ? true : false);
  // Member: escs_error
  cdr << (ros_message.escs_error ? true : false);
  // Member: escs_failure
  cdr << (ros_message.escs_failure ? true : false);
  // Member: position_reliant_on_gps
  cdr << (ros_message.position_reliant_on_gps ? true : false);
  // Member: position_reliant_on_optical_flow
  cdr << (ros_message.position_reliant_on_optical_flow ? true : false);
  // Member: position_reliant_on_vision_position
  cdr << (ros_message.position_reliant_on_vision_position ? true : false);
  // Member: dead_reckoning
  cdr << (ros_message.dead_reckoning ? true : false);
  // Member: flight_terminated
  cdr << (ros_message.flight_terminated ? true : false);
  // Member: circuit_breaker_engaged_power_check
  cdr << (ros_message.circuit_breaker_engaged_power_check ? true : false);
  // Member: circuit_breaker_engaged_airspd_check
  cdr << (ros_message.circuit_breaker_engaged_airspd_check ? true : false);
  // Member: circuit_breaker_engaged_enginefailure_check
  cdr << (ros_message.circuit_breaker_engaged_enginefailure_check ? true : false);
  // Member: circuit_breaker_flight_termination_disabled
  cdr << (ros_message.circuit_breaker_flight_termination_disabled ? true : false);
  // Member: circuit_breaker_engaged_usb_check
  cdr << (ros_message.circuit_breaker_engaged_usb_check ? true : false);
  // Member: circuit_breaker_engaged_posfailure_check
  cdr << (ros_message.circuit_breaker_engaged_posfailure_check ? true : false);
  // Member: circuit_breaker_vtol_fw_arming_check
  cdr << (ros_message.circuit_breaker_vtol_fw_arming_check ? true : false);
  // Member: offboard_control_signal_lost
  cdr << (ros_message.offboard_control_signal_lost ? true : false);
  // Member: rc_signal_found_once
  cdr << (ros_message.rc_signal_found_once ? true : false);
  // Member: rc_calibration_in_progress
  cdr << (ros_message.rc_calibration_in_progress ? true : false);
  // Member: rc_calibration_valid
  cdr << (ros_message.rc_calibration_valid ? true : false);
  // Member: vtol_transition_failure
  cdr << (ros_message.vtol_transition_failure ? true : false);
  // Member: usb_connected
  cdr << (ros_message.usb_connected ? true : false);
  // Member: sd_card_detected_once
  cdr << (ros_message.sd_card_detected_once ? true : false);
  // Member: avoidance_system_required
  cdr << (ros_message.avoidance_system_required ? true : false);
  // Member: avoidance_system_valid
  cdr << (ros_message.avoidance_system_valid ? true : false);
  // Member: parachute_system_present
  cdr << (ros_message.parachute_system_present ? true : false);
  // Member: parachute_system_healthy
  cdr << (ros_message.parachute_system_healthy ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  px4_msgs::msg::VehicleStatusFlags & ros_message)
{
  // Member: timestamp
  cdr >> ros_message.timestamp;

  // Member: calibration_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.calibration_enabled = tmp ? true : false;
  }

  // Member: system_sensors_initialized
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.system_sensors_initialized = tmp ? true : false;
  }

  // Member: system_hotplug_timeout
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.system_hotplug_timeout = tmp ? true : false;
  }

  // Member: auto_mission_available
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.auto_mission_available = tmp ? true : false;
  }

  // Member: angular_velocity_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.angular_velocity_valid = tmp ? true : false;
  }

  // Member: attitude_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.attitude_valid = tmp ? true : false;
  }

  // Member: local_altitude_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.local_altitude_valid = tmp ? true : false;
  }

  // Member: local_position_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.local_position_valid = tmp ? true : false;
  }

  // Member: local_velocity_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.local_velocity_valid = tmp ? true : false;
  }

  // Member: global_position_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.global_position_valid = tmp ? true : false;
  }

  // Member: gps_position_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.gps_position_valid = tmp ? true : false;
  }

  // Member: home_position_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.home_position_valid = tmp ? true : false;
  }

  // Member: power_input_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.power_input_valid = tmp ? true : false;
  }

  // Member: battery_healthy
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.battery_healthy = tmp ? true : false;
  }

  // Member: escs_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.escs_error = tmp ? true : false;
  }

  // Member: escs_failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.escs_failure = tmp ? true : false;
  }

  // Member: position_reliant_on_gps
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.position_reliant_on_gps = tmp ? true : false;
  }

  // Member: position_reliant_on_optical_flow
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.position_reliant_on_optical_flow = tmp ? true : false;
  }

  // Member: position_reliant_on_vision_position
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.position_reliant_on_vision_position = tmp ? true : false;
  }

  // Member: dead_reckoning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.dead_reckoning = tmp ? true : false;
  }

  // Member: flight_terminated
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.flight_terminated = tmp ? true : false;
  }

  // Member: circuit_breaker_engaged_power_check
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.circuit_breaker_engaged_power_check = tmp ? true : false;
  }

  // Member: circuit_breaker_engaged_airspd_check
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.circuit_breaker_engaged_airspd_check = tmp ? true : false;
  }

  // Member: circuit_breaker_engaged_enginefailure_check
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.circuit_breaker_engaged_enginefailure_check = tmp ? true : false;
  }

  // Member: circuit_breaker_flight_termination_disabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.circuit_breaker_flight_termination_disabled = tmp ? true : false;
  }

  // Member: circuit_breaker_engaged_usb_check
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.circuit_breaker_engaged_usb_check = tmp ? true : false;
  }

  // Member: circuit_breaker_engaged_posfailure_check
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.circuit_breaker_engaged_posfailure_check = tmp ? true : false;
  }

  // Member: circuit_breaker_vtol_fw_arming_check
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.circuit_breaker_vtol_fw_arming_check = tmp ? true : false;
  }

  // Member: offboard_control_signal_lost
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.offboard_control_signal_lost = tmp ? true : false;
  }

  // Member: rc_signal_found_once
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.rc_signal_found_once = tmp ? true : false;
  }

  // Member: rc_calibration_in_progress
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.rc_calibration_in_progress = tmp ? true : false;
  }

  // Member: rc_calibration_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.rc_calibration_valid = tmp ? true : false;
  }

  // Member: vtol_transition_failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.vtol_transition_failure = tmp ? true : false;
  }

  // Member: usb_connected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.usb_connected = tmp ? true : false;
  }

  // Member: sd_card_detected_once
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.sd_card_detected_once = tmp ? true : false;
  }

  // Member: avoidance_system_required
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.avoidance_system_required = tmp ? true : false;
  }

  // Member: avoidance_system_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.avoidance_system_valid = tmp ? true : false;
  }

  // Member: parachute_system_present
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.parachute_system_present = tmp ? true : false;
  }

  // Member: parachute_system_healthy
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.parachute_system_healthy = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
get_serialized_size(
  const px4_msgs::msg::VehicleStatusFlags & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: timestamp
  {
    size_t item_size = sizeof(ros_message.timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: calibration_enabled
  {
    size_t item_size = sizeof(ros_message.calibration_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: system_sensors_initialized
  {
    size_t item_size = sizeof(ros_message.system_sensors_initialized);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: system_hotplug_timeout
  {
    size_t item_size = sizeof(ros_message.system_hotplug_timeout);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: auto_mission_available
  {
    size_t item_size = sizeof(ros_message.auto_mission_available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angular_velocity_valid
  {
    size_t item_size = sizeof(ros_message.angular_velocity_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: attitude_valid
  {
    size_t item_size = sizeof(ros_message.attitude_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: local_altitude_valid
  {
    size_t item_size = sizeof(ros_message.local_altitude_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: local_position_valid
  {
    size_t item_size = sizeof(ros_message.local_position_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: local_velocity_valid
  {
    size_t item_size = sizeof(ros_message.local_velocity_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: global_position_valid
  {
    size_t item_size = sizeof(ros_message.global_position_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: gps_position_valid
  {
    size_t item_size = sizeof(ros_message.gps_position_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: home_position_valid
  {
    size_t item_size = sizeof(ros_message.home_position_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: power_input_valid
  {
    size_t item_size = sizeof(ros_message.power_input_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: battery_healthy
  {
    size_t item_size = sizeof(ros_message.battery_healthy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: escs_error
  {
    size_t item_size = sizeof(ros_message.escs_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: escs_failure
  {
    size_t item_size = sizeof(ros_message.escs_failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: position_reliant_on_gps
  {
    size_t item_size = sizeof(ros_message.position_reliant_on_gps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: position_reliant_on_optical_flow
  {
    size_t item_size = sizeof(ros_message.position_reliant_on_optical_flow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: position_reliant_on_vision_position
  {
    size_t item_size = sizeof(ros_message.position_reliant_on_vision_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: dead_reckoning
  {
    size_t item_size = sizeof(ros_message.dead_reckoning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: flight_terminated
  {
    size_t item_size = sizeof(ros_message.flight_terminated);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: circuit_breaker_engaged_power_check
  {
    size_t item_size = sizeof(ros_message.circuit_breaker_engaged_power_check);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: circuit_breaker_engaged_airspd_check
  {
    size_t item_size = sizeof(ros_message.circuit_breaker_engaged_airspd_check);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: circuit_breaker_engaged_enginefailure_check
  {
    size_t item_size = sizeof(ros_message.circuit_breaker_engaged_enginefailure_check);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: circuit_breaker_flight_termination_disabled
  {
    size_t item_size = sizeof(ros_message.circuit_breaker_flight_termination_disabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: circuit_breaker_engaged_usb_check
  {
    size_t item_size = sizeof(ros_message.circuit_breaker_engaged_usb_check);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: circuit_breaker_engaged_posfailure_check
  {
    size_t item_size = sizeof(ros_message.circuit_breaker_engaged_posfailure_check);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: circuit_breaker_vtol_fw_arming_check
  {
    size_t item_size = sizeof(ros_message.circuit_breaker_vtol_fw_arming_check);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: offboard_control_signal_lost
  {
    size_t item_size = sizeof(ros_message.offboard_control_signal_lost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rc_signal_found_once
  {
    size_t item_size = sizeof(ros_message.rc_signal_found_once);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rc_calibration_in_progress
  {
    size_t item_size = sizeof(ros_message.rc_calibration_in_progress);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: rc_calibration_valid
  {
    size_t item_size = sizeof(ros_message.rc_calibration_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: vtol_transition_failure
  {
    size_t item_size = sizeof(ros_message.vtol_transition_failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: usb_connected
  {
    size_t item_size = sizeof(ros_message.usb_connected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sd_card_detected_once
  {
    size_t item_size = sizeof(ros_message.sd_card_detected_once);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: avoidance_system_required
  {
    size_t item_size = sizeof(ros_message.avoidance_system_required);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: avoidance_system_valid
  {
    size_t item_size = sizeof(ros_message.avoidance_system_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: parachute_system_present
  {
    size_t item_size = sizeof(ros_message.parachute_system_present);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: parachute_system_healthy
  {
    size_t item_size = sizeof(ros_message.parachute_system_healthy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_px4_msgs
max_serialized_size_VehicleStatusFlags(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  // Member: calibration_enabled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: system_sensors_initialized
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: system_hotplug_timeout
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: auto_mission_available
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: angular_velocity_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: attitude_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: local_altitude_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: local_position_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: local_velocity_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: global_position_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: gps_position_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: home_position_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: power_input_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: battery_healthy
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: escs_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: escs_failure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: position_reliant_on_gps
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: position_reliant_on_optical_flow
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: position_reliant_on_vision_position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: dead_reckoning
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: flight_terminated
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: circuit_breaker_engaged_power_check
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: circuit_breaker_engaged_airspd_check
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: circuit_breaker_engaged_enginefailure_check
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: circuit_breaker_flight_termination_disabled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: circuit_breaker_engaged_usb_check
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: circuit_breaker_engaged_posfailure_check
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: circuit_breaker_vtol_fw_arming_check
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: offboard_control_signal_lost
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rc_signal_found_once
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rc_calibration_in_progress
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: rc_calibration_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: vtol_transition_failure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: usb_connected
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: sd_card_detected_once
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: avoidance_system_required
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: avoidance_system_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: parachute_system_present
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: parachute_system_healthy
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _VehicleStatusFlags__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::VehicleStatusFlags *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _VehicleStatusFlags__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<px4_msgs::msg::VehicleStatusFlags *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _VehicleStatusFlags__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const px4_msgs::msg::VehicleStatusFlags *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _VehicleStatusFlags__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_VehicleStatusFlags(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _VehicleStatusFlags__callbacks = {
  "px4_msgs::msg",
  "VehicleStatusFlags",
  _VehicleStatusFlags__cdr_serialize,
  _VehicleStatusFlags__cdr_deserialize,
  _VehicleStatusFlags__get_serialized_size,
  _VehicleStatusFlags__max_serialized_size
};

static rosidl_message_type_support_t _VehicleStatusFlags__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_VehicleStatusFlags__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace px4_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_px4_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<px4_msgs::msg::VehicleStatusFlags>()
{
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_VehicleStatusFlags__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, px4_msgs, msg, VehicleStatusFlags)() {
  return &px4_msgs::msg::typesupport_fastrtps_cpp::_VehicleStatusFlags__handle;
}

#ifdef __cplusplus
}
#endif
