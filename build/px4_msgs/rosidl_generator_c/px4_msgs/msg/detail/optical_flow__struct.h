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

/// Struct defined in msg/OpticalFlow in the package px4_msgs.
/**
  * Optical flow in XYZ body frame in SI units.
  * http://en.wikipedia.org/wiki/International_System_of_Units
 */
typedef struct px4_msgs__msg__OpticalFlow
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// id of the sensor emitting the flow value
  uint8_t sensor_id;
  /// accumulated optical flow in radians where a positive value is produced by a RH rotation about the X body axis
  float pixel_flow_x_integral;
  /// accumulated optical flow in radians where a positive value is produced by a RH rotation about the Y body axis
  float pixel_flow_y_integral;
  /// accumulated gyro value in radians where a positive value is produced by a RH rotation about the X body axis. Set to NaN if flow sensor does not have 3-axis gyro data.
  float gyro_x_rate_integral;
  /// accumulated gyro value in radians where a positive value is produced by a RH rotation about the Y body axis. Set to NaN if flow sensor does not have 3-axis gyro data.
  float gyro_y_rate_integral;
  /// accumulated gyro value in radians where a positive value is produced by a RH rotation about the Z body axis. Set to NaN if flow sensor does not have 3-axis gyro data.
  float gyro_z_rate_integral;
  /// Altitude / distance to ground in meters
  float ground_distance_m;
  /// accumulation timespan in microseconds
  uint32_t integration_timespan;
  /// time since last sonar update in microseconds
  uint32_t time_since_last_sonar_update;
  /// number of accumulated frames in timespan
  uint16_t frame_count_since_last_readout;
  /// Temperature * 100 in centi-degrees Celsius
  int16_t gyro_temperature;
  /// Average of quality of accumulated frames, 0: bad quality, 255: maximum quality
  uint8_t quality;
  /// Magnitude of maximum angular which the optical flow sensor can measure reliably
  float max_flow_rate;
  /// Minimum distance from ground at which the optical flow sensor operates reliably
  float min_ground_distance;
  /// Maximum distance from ground at which the optical flow sensor operates reliably
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
