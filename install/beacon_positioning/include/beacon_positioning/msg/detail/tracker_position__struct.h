// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from beacon_positioning:msg/TrackerPosition.idl
// generated code does not contain a copyright notice

#ifndef BEACON_POSITIONING__MSG__DETAIL__TRACKER_POSITION__STRUCT_H_
#define BEACON_POSITIONING__MSG__DETAIL__TRACKER_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/TrackerPosition in the package beacon_positioning.
typedef struct beacon_positioning__msg__TrackerPosition
{
  int32_t id;
  int64_t x_pos;
  int64_t y_pos;
  int64_t z_pos;
  int64_t anchor_distances[4];
} beacon_positioning__msg__TrackerPosition;

// Struct for a sequence of beacon_positioning__msg__TrackerPosition.
typedef struct beacon_positioning__msg__TrackerPosition__Sequence
{
  beacon_positioning__msg__TrackerPosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} beacon_positioning__msg__TrackerPosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // BEACON_POSITIONING__MSG__DETAIL__TRACKER_POSITION__STRUCT_H_
