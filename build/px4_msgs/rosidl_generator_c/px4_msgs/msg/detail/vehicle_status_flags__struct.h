// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/VehicleStatusFlags.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_STATUS_FLAGS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_STATUS_FLAGS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/VehicleStatusFlags in the package px4_msgs.
/**
  * This is a struct used by the commander internally.
 */
typedef struct px4_msgs__msg__VehicleStatusFlags
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  bool calibration_enabled;
  bool system_sensors_initialized;
  /// true if the hotplug sensor search is over
  bool system_hotplug_timeout;
  bool auto_mission_available;
  bool angular_velocity_valid;
  bool attitude_valid;
  bool local_altitude_valid;
  /// set to true by the commander app if the quality of the local position estimate is good enough to use for navigation
  bool local_position_valid;
  /// set to true by the commander app if the quality of the local horizontal velocity data is good enough to use for navigation
  bool local_velocity_valid;
  /// set to true by the commander app if the quality of the global position estimate is good enough to use for navigation
  bool global_position_valid;
  bool gps_position_valid;
  /// indicates a valid home position (a valid home position is not always a valid launch)
  bool home_position_valid;
  /// set if input power is valid
  bool power_input_valid;
  /// set if battery is available and not low
  bool battery_healthy;
  /// set to true if one or more ESCs reporting esc_status are offline
  bool escs_error;
  /// set to true if one or more ESCs reporting esc_status has a failure
  bool escs_failure;
  bool position_reliant_on_gps;
  bool position_reliant_on_optical_flow;
  bool position_reliant_on_vision_position;
  bool dead_reckoning;
  bool flight_terminated;
  bool circuit_breaker_engaged_power_check;
  bool circuit_breaker_engaged_airspd_check;
  bool circuit_breaker_engaged_enginefailure_check;
  bool circuit_breaker_flight_termination_disabled;
  bool circuit_breaker_engaged_usb_check;
  /// set to true when the position valid checks have been disabled
  bool circuit_breaker_engaged_posfailure_check;
  /// set to true if for VTOLs arming in fixed-wing mode should be allowed
  bool circuit_breaker_vtol_fw_arming_check;
  bool offboard_control_signal_lost;
  bool rc_signal_found_once;
  bool rc_calibration_in_progress;
  /// set if RC calibration is valid
  bool rc_calibration_valid;
  /// Set to true if vtol transition failed
  bool vtol_transition_failure;
  /// status of the USB power supply
  bool usb_connected;
  /// set to true if the SD card was detected
  bool sd_card_detected_once;
  /// Set to true if avoidance system is enabled via COM_OBS_AVOID parameter
  bool avoidance_system_required;
  /// Status of the obstacle avoidance system
  bool avoidance_system_valid;
  bool parachute_system_present;
  bool parachute_system_healthy;
} px4_msgs__msg__VehicleStatusFlags;

// Struct for a sequence of px4_msgs__msg__VehicleStatusFlags.
typedef struct px4_msgs__msg__VehicleStatusFlags__Sequence
{
  px4_msgs__msg__VehicleStatusFlags * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__VehicleStatusFlags__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_STATUS_FLAGS__STRUCT_H_
