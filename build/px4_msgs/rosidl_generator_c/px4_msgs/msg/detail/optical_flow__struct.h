// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/OpticalFlow.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__OPTICAL_FLOW__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__OPTICAL_FLOW__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'MODE_UNKNOWN'.
enum
{
  px4_msgs__msg__OpticalFlow__MODE_UNKNOWN = 0
};

/// Constant 'MODE_BRIGHT'.
enum
{
  px4_msgs__msg__OpticalFlow__MODE_BRIGHT = 1
};

/// Constant 'MODE_LOWLIGHT'.
enum
{
  px4_msgs__msg__OpticalFlow__MODE_LOWLIGHT = 2
};

/// Constant 'MODE_SUPER_LOWLIGHT'.
enum
{
  px4_msgs__msg__OpticalFlow__MODE_SUPER_LOWLIGHT = 3
};

// Struct defined in msg/OpticalFlow in the package px4_msgs.
typedef struct px4_msgs__msg__OpticalFlow
{
  uint64_t timestamp;
  uint8_t sensor_id;
  float pixel_flow_x_integral;
  float pixel_flow_y_integral;
  float gyro_x_rate_integral;
  float gyro_y_rate_integral;
  float gyro_z_rate_integral;
  float ground_distance_m;
  uint32_t integration_timespan;
  uint32_t time_since_last_sonar_update;
  uint16_t frame_count_since_last_readout;
  int16_t gyro_temperature;
  uint8_t quality;
  float max_flow_rate;
  float min_ground_distance;
  float max_ground_distance;
  uint8_t mode;
} px4_msgs__msg__OpticalFlow;

// Struct for a sequence of px4_msgs__msg__OpticalFlow.
typedef struct px4_msgs__msg__OpticalFlow__Sequence
{
  px4_msgs__msg__OpticalFlow * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__OpticalFlow__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__OPTICAL_FLOW__STRUCT_H_
