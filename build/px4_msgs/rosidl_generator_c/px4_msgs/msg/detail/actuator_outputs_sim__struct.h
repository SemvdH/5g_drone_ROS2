// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/ActuatorOutputsSim.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ACTUATOR_OUTPUTS_SIM__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__ACTUATOR_OUTPUTS_SIM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'NUM_ACTUATOR_OUTPUTS'.
enum
{
  px4_msgs__msg__ActuatorOutputsSim__NUM_ACTUATOR_OUTPUTS = 16
};

/// Constant 'NUM_ACTUATOR_OUTPUT_GROUPS'.
enum
{
  px4_msgs__msg__ActuatorOutputsSim__NUM_ACTUATOR_OUTPUT_GROUPS = 4
};

// Struct defined in msg/ActuatorOutputsSim in the package px4_msgs.
typedef struct px4_msgs__msg__ActuatorOutputsSim
{
  uint64_t timestamp;
  uint32_t noutputs;
  float output[16];
} px4_msgs__msg__ActuatorOutputsSim;

// Struct for a sequence of px4_msgs__msg__ActuatorOutputsSim.
typedef struct px4_msgs__msg__ActuatorOutputsSim__Sequence
{
  px4_msgs__msg__ActuatorOutputsSim * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__ActuatorOutputsSim__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__ACTUATOR_OUTPUTS_SIM__STRUCT_H_
