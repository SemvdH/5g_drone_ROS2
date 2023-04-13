// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/ManualControlInput.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__MANUAL_CONTROL_INPUT__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__MANUAL_CONTROL_INPUT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SOURCE_UNKNOWN'.
enum
{
  px4_msgs__msg__ManualControlInput__SOURCE_UNKNOWN = 0
};

/// Constant 'SOURCE_RC'.
enum
{
  px4_msgs__msg__ManualControlInput__SOURCE_RC = 1
};

/// Constant 'SOURCE_MAVLINK_0'.
enum
{
  px4_msgs__msg__ManualControlInput__SOURCE_MAVLINK_0 = 2
};

/// Constant 'SOURCE_MAVLINK_1'.
enum
{
  px4_msgs__msg__ManualControlInput__SOURCE_MAVLINK_1 = 3
};

/// Constant 'SOURCE_MAVLINK_2'.
enum
{
  px4_msgs__msg__ManualControlInput__SOURCE_MAVLINK_2 = 4
};

/// Constant 'SOURCE_MAVLINK_3'.
enum
{
  px4_msgs__msg__ManualControlInput__SOURCE_MAVLINK_3 = 5
};

/// Constant 'SOURCE_MAVLINK_4'.
enum
{
  px4_msgs__msg__ManualControlInput__SOURCE_MAVLINK_4 = 6
};

/// Constant 'SOURCE_MAVLINK_5'.
enum
{
  px4_msgs__msg__ManualControlInput__SOURCE_MAVLINK_5 = 7
};

// Struct defined in msg/ManualControlInput in the package px4_msgs.
typedef struct px4_msgs__msg__ManualControlInput
{
  uint64_t timestamp;
  uint64_t timestamp_sample;
  bool valid;
  uint8_t data_source;
  float x;
  float y;
  float z;
  float r;
  float flaps;
  float aux1;
  float aux2;
  float aux3;
  float aux4;
  float aux5;
  float aux6;
  bool sticks_moving;
} px4_msgs__msg__ManualControlInput;

// Struct for a sequence of px4_msgs__msg__ManualControlInput.
typedef struct px4_msgs__msg__ManualControlInput__Sequence
{
  px4_msgs__msg__ManualControlInput * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__ManualControlInput__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__MANUAL_CONTROL_INPUT__STRUCT_H_
