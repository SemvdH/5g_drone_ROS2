// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/TrajectorySetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__TRAJECTORY_SETPOINT__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__TRAJECTORY_SETPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in msg/TrajectorySetpoint in the package px4_msgs.
/**
  * Local position setpoint in NED frame
  * setting something to NaN means the state should not be controlled
 */
typedef struct px4_msgs__msg__TrajectorySetpoint
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// in meters NED
  float x;
  /// in meters NED
  float y;
  /// in meters NED
  float z;
  /// in radians NED -PI..+PI
  float yaw;
  /// in radians/sec
  float yawspeed;
  /// in meters/sec
  float vx;
  /// in meters/sec
  float vy;
  /// in meters/sec
  float vz;
  /// in meters/sec^2
  float acceleration[3];
  /// in meters/sec^3
  float jerk[3];
  /// normalized thrust vector in NED
  float thrust[3];
} px4_msgs__msg__TrajectorySetpoint;

// Struct for a sequence of px4_msgs__msg__TrajectorySetpoint.
typedef struct px4_msgs__msg__TrajectorySetpoint__Sequence
{
  px4_msgs__msg__TrajectorySetpoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__TrajectorySetpoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__TRAJECTORY_SETPOINT__STRUCT_H_
