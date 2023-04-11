// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/VtolVehicleStatus.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VTOL_VEHICLE_STATUS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__VTOL_VEHICLE_STATUS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'VEHICLE_VTOL_STATE_UNDEFINED'.
enum
{
  px4_msgs__msg__VtolVehicleStatus__VEHICLE_VTOL_STATE_UNDEFINED = 0
};

/// Constant 'VEHICLE_VTOL_STATE_TRANSITION_TO_FW'.
enum
{
  px4_msgs__msg__VtolVehicleStatus__VEHICLE_VTOL_STATE_TRANSITION_TO_FW = 1
};

/// Constant 'VEHICLE_VTOL_STATE_TRANSITION_TO_MC'.
enum
{
  px4_msgs__msg__VtolVehicleStatus__VEHICLE_VTOL_STATE_TRANSITION_TO_MC = 2
};

/// Constant 'VEHICLE_VTOL_STATE_MC'.
enum
{
  px4_msgs__msg__VtolVehicleStatus__VEHICLE_VTOL_STATE_MC = 3
};

/// Constant 'VEHICLE_VTOL_STATE_FW'.
enum
{
  px4_msgs__msg__VtolVehicleStatus__VEHICLE_VTOL_STATE_FW = 4
};

/// Struct defined in msg/VtolVehicleStatus in the package px4_msgs.
/**
  * VEHICLE_VTOL_STATE, should match 1:1 MAVLinks's MAV_VTOL_STATE
 */
typedef struct px4_msgs__msg__VtolVehicleStatus
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// true: vtol vehicle is in rotating wing mode
  bool vtol_in_rw_mode;
  bool vtol_in_trans_mode;
  /// True if VTOL is doing a transition from MC to FW
  bool in_transition_to_fw;
  /// vtol in transition failsafe mode
  bool vtol_transition_failsafe;
  /// In fw mode stabilize attitude even if in manual mode
  bool fw_permanent_stab;
} px4_msgs__msg__VtolVehicleStatus;

// Struct for a sequence of px4_msgs__msg__VtolVehicleStatus.
typedef struct px4_msgs__msg__VtolVehicleStatus__Sequence
{
  px4_msgs__msg__VtolVehicleStatus * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__VtolVehicleStatus__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__VTOL_VEHICLE_STATUS__STRUCT_H_
