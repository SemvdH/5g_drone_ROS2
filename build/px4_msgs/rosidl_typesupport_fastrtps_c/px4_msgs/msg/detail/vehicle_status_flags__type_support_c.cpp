// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from px4_msgs:msg/VehicleStatusFlags.idl
// generated code does not contain a copyright notice
#include "px4_msgs/msg/detail/vehicle_status_flags__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "px4_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "px4_msgs/msg/detail/vehicle_status_flags__struct.h"
#include "px4_msgs/msg/detail/vehicle_status_flags__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _VehicleStatusFlags__ros_msg_type = px4_msgs__msg__VehicleStatusFlags;

static bool _VehicleStatusFlags__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _VehicleStatusFlags__ros_msg_type * ros_message = static_cast<const _VehicleStatusFlags__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr << ros_message->timestamp;
  }

  // Field name: calibration_enabled
  {
    cdr << (ros_message->calibration_enabled ? true : false);
  }

  // Field name: system_sensors_initialized
  {
    cdr << (ros_message->system_sensors_initialized ? true : false);
  }

  // Field name: system_hotplug_timeout
  {
    cdr << (ros_message->system_hotplug_timeout ? true : false);
  }

  // Field name: auto_mission_available
  {
    cdr << (ros_message->auto_mission_available ? true : false);
  }

  // Field name: angular_velocity_valid
  {
    cdr << (ros_message->angular_velocity_valid ? true : false);
  }

  // Field name: attitude_valid
  {
    cdr << (ros_message->attitude_valid ? true : false);
  }

  // Field name: local_altitude_valid
  {
    cdr << (ros_message->local_altitude_valid ? true : false);
  }

  // Field name: local_position_valid
  {
    cdr << (ros_message->local_position_valid ? true : false);
  }

  // Field name: local_velocity_valid
  {
    cdr << (ros_message->local_velocity_valid ? true : false);
  }

  // Field name: global_position_valid
  {
    cdr << (ros_message->global_position_valid ? true : false);
  }

  // Field name: gps_position_valid
  {
    cdr << (ros_message->gps_position_valid ? true : false);
  }

  // Field name: home_position_valid
  {
    cdr << (ros_message->home_position_valid ? true : false);
  }

  // Field name: power_input_valid
  {
    cdr << (ros_message->power_input_valid ? true : false);
  }

  // Field name: battery_healthy
  {
    cdr << (ros_message->battery_healthy ? true : false);
  }

  // Field name: escs_error
  {
    cdr << (ros_message->escs_error ? true : false);
  }

  // Field name: escs_failure
  {
    cdr << (ros_message->escs_failure ? true : false);
  }

  // Field name: position_reliant_on_gps
  {
    cdr << (ros_message->position_reliant_on_gps ? true : false);
  }

  // Field name: position_reliant_on_optical_flow
  {
    cdr << (ros_message->position_reliant_on_optical_flow ? true : false);
  }

  // Field name: position_reliant_on_vision_position
  {
    cdr << (ros_message->position_reliant_on_vision_position ? true : false);
  }

  // Field name: dead_reckoning
  {
    cdr << (ros_message->dead_reckoning ? true : false);
  }

  // Field name: flight_terminated
  {
    cdr << (ros_message->flight_terminated ? true : false);
  }

  // Field name: circuit_breaker_engaged_power_check
  {
    cdr << (ros_message->circuit_breaker_engaged_power_check ? true : false);
  }

  // Field name: circuit_breaker_engaged_airspd_check
  {
    cdr << (ros_message->circuit_breaker_engaged_airspd_check ? true : false);
  }

  // Field name: circuit_breaker_engaged_enginefailure_check
  {
    cdr << (ros_message->circuit_breaker_engaged_enginefailure_check ? true : false);
  }

  // Field name: circuit_breaker_flight_termination_disabled
  {
    cdr << (ros_message->circuit_breaker_flight_termination_disabled ? true : false);
  }

  // Field name: circuit_breaker_engaged_usb_check
  {
    cdr << (ros_message->circuit_breaker_engaged_usb_check ? true : false);
  }

  // Field name: circuit_breaker_engaged_posfailure_check
  {
    cdr << (ros_message->circuit_breaker_engaged_posfailure_check ? true : false);
  }

  // Field name: circuit_breaker_vtol_fw_arming_check
  {
    cdr << (ros_message->circuit_breaker_vtol_fw_arming_check ? true : false);
  }

  // Field name: offboard_control_signal_lost
  {
    cdr << (ros_message->offboard_control_signal_lost ? true : false);
  }

  // Field name: rc_signal_found_once
  {
    cdr << (ros_message->rc_signal_found_once ? true : false);
  }

  // Field name: rc_calibration_in_progress
  {
    cdr << (ros_message->rc_calibration_in_progress ? true : false);
  }

  // Field name: rc_calibration_valid
  {
    cdr << (ros_message->rc_calibration_valid ? true : false);
  }

  // Field name: vtol_transition_failure
  {
    cdr << (ros_message->vtol_transition_failure ? true : false);
  }

  // Field name: usb_connected
  {
    cdr << (ros_message->usb_connected ? true : false);
  }

  // Field name: sd_card_detected_once
  {
    cdr << (ros_message->sd_card_detected_once ? true : false);
  }

  // Field name: avoidance_system_required
  {
    cdr << (ros_message->avoidance_system_required ? true : false);
  }

  // Field name: avoidance_system_valid
  {
    cdr << (ros_message->avoidance_system_valid ? true : false);
  }

  // Field name: parachute_system_present
  {
    cdr << (ros_message->parachute_system_present ? true : false);
  }

  // Field name: parachute_system_healthy
  {
    cdr << (ros_message->parachute_system_healthy ? true : false);
  }

  return true;
}

static bool _VehicleStatusFlags__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _VehicleStatusFlags__ros_msg_type * ros_message = static_cast<_VehicleStatusFlags__ros_msg_type *>(untyped_ros_message);
  // Field name: timestamp
  {
    cdr >> ros_message->timestamp;
  }

  // Field name: calibration_enabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->calibration_enabled = tmp ? true : false;
  }

  // Field name: system_sensors_initialized
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->system_sensors_initialized = tmp ? true : false;
  }

  // Field name: system_hotplug_timeout
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->system_hotplug_timeout = tmp ? true : false;
  }

  // Field name: auto_mission_available
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->auto_mission_available = tmp ? true : false;
  }

  // Field name: angular_velocity_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->angular_velocity_valid = tmp ? true : false;
  }

  // Field name: attitude_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->attitude_valid = tmp ? true : false;
  }

  // Field name: local_altitude_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->local_altitude_valid = tmp ? true : false;
  }

  // Field name: local_position_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->local_position_valid = tmp ? true : false;
  }

  // Field name: local_velocity_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->local_velocity_valid = tmp ? true : false;
  }

  // Field name: global_position_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->global_position_valid = tmp ? true : false;
  }

  // Field name: gps_position_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->gps_position_valid = tmp ? true : false;
  }

  // Field name: home_position_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->home_position_valid = tmp ? true : false;
  }

  // Field name: power_input_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->power_input_valid = tmp ? true : false;
  }

  // Field name: battery_healthy
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->battery_healthy = tmp ? true : false;
  }

  // Field name: escs_error
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->escs_error = tmp ? true : false;
  }

  // Field name: escs_failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->escs_failure = tmp ? true : false;
  }

  // Field name: position_reliant_on_gps
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->position_reliant_on_gps = tmp ? true : false;
  }

  // Field name: position_reliant_on_optical_flow
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->position_reliant_on_optical_flow = tmp ? true : false;
  }

  // Field name: position_reliant_on_vision_position
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->position_reliant_on_vision_position = tmp ? true : false;
  }

  // Field name: dead_reckoning
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->dead_reckoning = tmp ? true : false;
  }

  // Field name: flight_terminated
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->flight_terminated = tmp ? true : false;
  }

  // Field name: circuit_breaker_engaged_power_check
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->circuit_breaker_engaged_power_check = tmp ? true : false;
  }

  // Field name: circuit_breaker_engaged_airspd_check
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->circuit_breaker_engaged_airspd_check = tmp ? true : false;
  }

  // Field name: circuit_breaker_engaged_enginefailure_check
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->circuit_breaker_engaged_enginefailure_check = tmp ? true : false;
  }

  // Field name: circuit_breaker_flight_termination_disabled
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->circuit_breaker_flight_termination_disabled = tmp ? true : false;
  }

  // Field name: circuit_breaker_engaged_usb_check
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->circuit_breaker_engaged_usb_check = tmp ? true : false;
  }

  // Field name: circuit_breaker_engaged_posfailure_check
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->circuit_breaker_engaged_posfailure_check = tmp ? true : false;
  }

  // Field name: circuit_breaker_vtol_fw_arming_check
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->circuit_breaker_vtol_fw_arming_check = tmp ? true : false;
  }

  // Field name: offboard_control_signal_lost
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->offboard_control_signal_lost = tmp ? true : false;
  }

  // Field name: rc_signal_found_once
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->rc_signal_found_once = tmp ? true : false;
  }

  // Field name: rc_calibration_in_progress
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->rc_calibration_in_progress = tmp ? true : false;
  }

  // Field name: rc_calibration_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->rc_calibration_valid = tmp ? true : false;
  }

  // Field name: vtol_transition_failure
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->vtol_transition_failure = tmp ? true : false;
  }

  // Field name: usb_connected
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->usb_connected = tmp ? true : false;
  }

  // Field name: sd_card_detected_once
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->sd_card_detected_once = tmp ? true : false;
  }

  // Field name: avoidance_system_required
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->avoidance_system_required = tmp ? true : false;
  }

  // Field name: avoidance_system_valid
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->avoidance_system_valid = tmp ? true : false;
  }

  // Field name: parachute_system_present
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->parachute_system_present = tmp ? true : false;
  }

  // Field name: parachute_system_healthy
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->parachute_system_healthy = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t get_serialized_size_px4_msgs__msg__VehicleStatusFlags(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _VehicleStatusFlags__ros_msg_type * ros_message = static_cast<const _VehicleStatusFlags__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name timestamp
  {
    size_t item_size = sizeof(ros_message->timestamp);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name calibration_enabled
  {
    size_t item_size = sizeof(ros_message->calibration_enabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name system_sensors_initialized
  {
    size_t item_size = sizeof(ros_message->system_sensors_initialized);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name system_hotplug_timeout
  {
    size_t item_size = sizeof(ros_message->system_hotplug_timeout);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name auto_mission_available
  {
    size_t item_size = sizeof(ros_message->auto_mission_available);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angular_velocity_valid
  {
    size_t item_size = sizeof(ros_message->angular_velocity_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name attitude_valid
  {
    size_t item_size = sizeof(ros_message->attitude_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name local_altitude_valid
  {
    size_t item_size = sizeof(ros_message->local_altitude_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name local_position_valid
  {
    size_t item_size = sizeof(ros_message->local_position_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name local_velocity_valid
  {
    size_t item_size = sizeof(ros_message->local_velocity_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name global_position_valid
  {
    size_t item_size = sizeof(ros_message->global_position_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name gps_position_valid
  {
    size_t item_size = sizeof(ros_message->gps_position_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name home_position_valid
  {
    size_t item_size = sizeof(ros_message->home_position_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name power_input_valid
  {
    size_t item_size = sizeof(ros_message->power_input_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name battery_healthy
  {
    size_t item_size = sizeof(ros_message->battery_healthy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name escs_error
  {
    size_t item_size = sizeof(ros_message->escs_error);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name escs_failure
  {
    size_t item_size = sizeof(ros_message->escs_failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position_reliant_on_gps
  {
    size_t item_size = sizeof(ros_message->position_reliant_on_gps);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position_reliant_on_optical_flow
  {
    size_t item_size = sizeof(ros_message->position_reliant_on_optical_flow);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name position_reliant_on_vision_position
  {
    size_t item_size = sizeof(ros_message->position_reliant_on_vision_position);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name dead_reckoning
  {
    size_t item_size = sizeof(ros_message->dead_reckoning);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name flight_terminated
  {
    size_t item_size = sizeof(ros_message->flight_terminated);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name circuit_breaker_engaged_power_check
  {
    size_t item_size = sizeof(ros_message->circuit_breaker_engaged_power_check);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name circuit_breaker_engaged_airspd_check
  {
    size_t item_size = sizeof(ros_message->circuit_breaker_engaged_airspd_check);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name circuit_breaker_engaged_enginefailure_check
  {
    size_t item_size = sizeof(ros_message->circuit_breaker_engaged_enginefailure_check);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name circuit_breaker_flight_termination_disabled
  {
    size_t item_size = sizeof(ros_message->circuit_breaker_flight_termination_disabled);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name circuit_breaker_engaged_usb_check
  {
    size_t item_size = sizeof(ros_message->circuit_breaker_engaged_usb_check);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name circuit_breaker_engaged_posfailure_check
  {
    size_t item_size = sizeof(ros_message->circuit_breaker_engaged_posfailure_check);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name circuit_breaker_vtol_fw_arming_check
  {
    size_t item_size = sizeof(ros_message->circuit_breaker_vtol_fw_arming_check);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name offboard_control_signal_lost
  {
    size_t item_size = sizeof(ros_message->offboard_control_signal_lost);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rc_signal_found_once
  {
    size_t item_size = sizeof(ros_message->rc_signal_found_once);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rc_calibration_in_progress
  {
    size_t item_size = sizeof(ros_message->rc_calibration_in_progress);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name rc_calibration_valid
  {
    size_t item_size = sizeof(ros_message->rc_calibration_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name vtol_transition_failure
  {
    size_t item_size = sizeof(ros_message->vtol_transition_failure);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name usb_connected
  {
    size_t item_size = sizeof(ros_message->usb_connected);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name sd_card_detected_once
  {
    size_t item_size = sizeof(ros_message->sd_card_detected_once);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name avoidance_system_required
  {
    size_t item_size = sizeof(ros_message->avoidance_system_required);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name avoidance_system_valid
  {
    size_t item_size = sizeof(ros_message->avoidance_system_valid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name parachute_system_present
  {
    size_t item_size = sizeof(ros_message->parachute_system_present);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name parachute_system_healthy
  {
    size_t item_size = sizeof(ros_message->parachute_system_healthy);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _VehicleStatusFlags__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_px4_msgs__msg__VehicleStatusFlags(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_px4_msgs
size_t max_serialized_size_px4_msgs__msg__VehicleStatusFlags(
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

  // member: timestamp
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }
  // member: calibration_enabled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: system_sensors_initialized
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: system_hotplug_timeout
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: auto_mission_available
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: angular_velocity_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: attitude_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: local_altitude_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: local_position_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: local_velocity_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: global_position_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: gps_position_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: home_position_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: power_input_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: battery_healthy
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: escs_error
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: escs_failure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: position_reliant_on_gps
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: position_reliant_on_optical_flow
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: position_reliant_on_vision_position
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: dead_reckoning
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: flight_terminated
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: circuit_breaker_engaged_power_check
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: circuit_breaker_engaged_airspd_check
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: circuit_breaker_engaged_enginefailure_check
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: circuit_breaker_flight_termination_disabled
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: circuit_breaker_engaged_usb_check
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: circuit_breaker_engaged_posfailure_check
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: circuit_breaker_vtol_fw_arming_check
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: offboard_control_signal_lost
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rc_signal_found_once
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rc_calibration_in_progress
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: rc_calibration_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: vtol_transition_failure
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: usb_connected
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: sd_card_detected_once
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: avoidance_system_required
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: avoidance_system_valid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: parachute_system_present
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }
  // member: parachute_system_healthy
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _VehicleStatusFlags__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_px4_msgs__msg__VehicleStatusFlags(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_VehicleStatusFlags = {
  "px4_msgs::msg",
  "VehicleStatusFlags",
  _VehicleStatusFlags__cdr_serialize,
  _VehicleStatusFlags__cdr_deserialize,
  _VehicleStatusFlags__get_serialized_size,
  _VehicleStatusFlags__max_serialized_size
};

static rosidl_message_type_support_t _VehicleStatusFlags__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_VehicleStatusFlags,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, px4_msgs, msg, VehicleStatusFlags)() {
  return &_VehicleStatusFlags__type_support;
}

#if defined(__cplusplus)
}
#endif
