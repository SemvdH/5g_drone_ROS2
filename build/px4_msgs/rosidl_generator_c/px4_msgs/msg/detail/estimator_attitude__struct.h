// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/EstimatorAttitude.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_ATTITUDE__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_ATTITUDE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/EstimatorAttitude in the package px4_msgs.
typedef struct px4_msgs__msg__EstimatorAttitude
{
  uint64_t timestamp;
  uint64_t timestamp_sample;
  float q[4];
  float delta_q_reset[4];
  uint8_t quat_reset_counter;
} px4_msgs__msg__EstimatorAttitude;

// Struct for a sequence of px4_msgs__msg__EstimatorAttitude.
typedef struct px4_msgs__msg__EstimatorAttitude__Sequence
{
  px4_msgs__msg__EstimatorAttitude * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__EstimatorAttitude__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_ATTITUDE__STRUCT_H_
