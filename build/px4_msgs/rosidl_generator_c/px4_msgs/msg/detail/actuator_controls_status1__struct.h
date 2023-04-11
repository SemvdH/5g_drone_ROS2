// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/ActuatorControlsStatus1.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ACTUATOR_CONTROLS_STATUS1__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__ACTUATOR_CONTROLS_STATUS1__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'INDEX_ROLL'.
enum
{
  px4_msgs__msg__ActuatorControlsStatus1__INDEX_ROLL = 0
};

/// Constant 'INDEX_PITCH'.
enum
{
  px4_msgs__msg__ActuatorControlsStatus1__INDEX_PITCH = 1
};

/// Constant 'INDEX_YAW'.
enum
{
  px4_msgs__msg__ActuatorControlsStatus1__INDEX_YAW = 2
};

/// Constant 'INDEX_THROTTLE'.
enum
{
  px4_msgs__msg__ActuatorControlsStatus1__INDEX_THROTTLE = 3
};

/// Struct defined in msg/ActuatorControlsStatus1 in the package px4_msgs.
typedef struct px4_msgs__msg__ActuatorControlsStatus1
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  float control_power[4];
} px4_msgs__msg__ActuatorControlsStatus1;

// Struct for a sequence of px4_msgs__msg__ActuatorControlsStatus1.
typedef struct px4_msgs__msg__ActuatorControlsStatus1__Sequence
{
  px4_msgs__msg__ActuatorControlsStatus1 * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__ActuatorControlsStatus1__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__ACTUATOR_CONTROLS_STATUS1__STRUCT_H_
