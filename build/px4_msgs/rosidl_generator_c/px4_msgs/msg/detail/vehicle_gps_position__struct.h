// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/VehicleGpsPosition.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_GPS_POSITION__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_GPS_POSITION__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Struct defined in msg/VehicleGpsPosition in the package px4_msgs.
typedef struct px4_msgs__msg__VehicleGpsPosition
{
  uint64_t timestamp;
  int32_t lat;
  int32_t lon;
  int32_t alt;
  int32_t alt_ellipsoid;
  float s_variance_m_s;
  float c_variance_rad;
  uint8_t fix_type;
  float eph;
  float epv;
  float hdop;
  float vdop;
  int32_t noise_per_ms;
  int32_t jamming_indicator;
  uint8_t jamming_state;
  float vel_m_s;
  float vel_n_m_s;
  float vel_e_m_s;
  float vel_d_m_s;
  float cog_rad;
  bool vel_ned_valid;
  int32_t timestamp_time_relative;
  uint64_t time_utc_usec;
  uint8_t satellites_used;
  float heading;
  float heading_offset;
  uint8_t selected;
} px4_msgs__msg__VehicleGpsPosition;

// Struct for a sequence of px4_msgs__msg__VehicleGpsPosition.
typedef struct px4_msgs__msg__VehicleGpsPosition__Sequence
{
  px4_msgs__msg__VehicleGpsPosition * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__VehicleGpsPosition__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_GPS_POSITION__STRUCT_H_
