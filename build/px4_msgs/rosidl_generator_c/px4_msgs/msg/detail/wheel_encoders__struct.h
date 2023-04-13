// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/WheelEncoders.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__WHEEL_ENCODERS__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__WHEEL_ENCODERS__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/WheelEncoders in the package px4_msgs.
typedef struct px4_msgs__msg__WheelEncoders
{
  uint64_t timestamp;
  int64_t encoder_position;
  int32_t speed;
  uint32_t pulses_per_rev;
} px4_msgs__msg__WheelEncoders;

// Struct for a sequence of px4_msgs__msg__WheelEncoders.
typedef struct px4_msgs__msg__WheelEncoders__Sequence
{
  px4_msgs__msg__WheelEncoders * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__WheelEncoders__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__WHEEL_ENCODERS__STRUCT_H_
