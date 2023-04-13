// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/OrbTestMediumQueue.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ORB_TEST_MEDIUM_QUEUE__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__ORB_TEST_MEDIUM_QUEUE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/OrbTestMediumQueue in the package px4_msgs.
typedef struct px4_msgs__msg__OrbTestMediumQueue
{
  uint64_t timestamp;
  int32_t val;
  uint8_t junk[64];
} px4_msgs__msg__OrbTestMediumQueue;

// Struct for a sequence of px4_msgs__msg__OrbTestMediumQueue.
typedef struct px4_msgs__msg__OrbTestMediumQueue__Sequence
{
  px4_msgs__msg__OrbTestMediumQueue * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__OrbTestMediumQueue__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__ORB_TEST_MEDIUM_QUEUE__STRUCT_H_
