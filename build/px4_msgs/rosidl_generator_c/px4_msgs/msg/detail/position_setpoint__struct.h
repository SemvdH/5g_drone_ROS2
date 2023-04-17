// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/PositionSetpoint.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__POSITION_SETPOINT__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__POSITION_SETPOINT__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'SETPOINT_TYPE_POSITION'.
enum
{
  px4_msgs__msg__PositionSetpoint__SETPOINT_TYPE_POSITION = 0
};

/// Constant 'SETPOINT_TYPE_VELOCITY'.
enum
{
  px4_msgs__msg__PositionSetpoint__SETPOINT_TYPE_VELOCITY = 1
};

/// Constant 'SETPOINT_TYPE_LOITER'.
enum
{
  px4_msgs__msg__PositionSetpoint__SETPOINT_TYPE_LOITER = 2
};

/// Constant 'SETPOINT_TYPE_TAKEOFF'.
enum
{
  px4_msgs__msg__PositionSetpoint__SETPOINT_TYPE_TAKEOFF = 3
};

/// Constant 'SETPOINT_TYPE_LAND'.
enum
{
  px4_msgs__msg__PositionSetpoint__SETPOINT_TYPE_LAND = 4
};

/// Constant 'SETPOINT_TYPE_IDLE'.
enum
{
  px4_msgs__msg__PositionSetpoint__SETPOINT_TYPE_IDLE = 5
};

/// Constant 'SETPOINT_TYPE_FOLLOW_TARGET'.
enum
{
  px4_msgs__msg__PositionSetpoint__SETPOINT_TYPE_FOLLOW_TARGET = 6
};

/// Constant 'VELOCITY_FRAME_LOCAL_NED'.
enum
{
  px4_msgs__msg__PositionSetpoint__VELOCITY_FRAME_LOCAL_NED = 1
};

/// Constant 'VELOCITY_FRAME_BODY_NED'.
enum
{
  px4_msgs__msg__PositionSetpoint__VELOCITY_FRAME_BODY_NED = 8
};

// Struct defined in msg/PositionSetpoint in the package px4_msgs.
typedef struct px4_msgs__msg__PositionSetpoint
{
  uint64_t timestamp;
  bool valid;
  uint8_t type;
  float vx;
  float vy;
  float vz;
  bool velocity_valid;
  uint8_t velocity_frame;
  bool alt_valid;
  double lat;
  double lon;
  float alt;
  float yaw;
  bool yaw_valid;
  float yawspeed;
  bool yawspeed_valid;
  int8_t landing_gear;
  float loiter_radius;
  int8_t loiter_direction;
  float acceptance_radius;
  float cruising_speed;
  float cruising_throttle;
  bool disable_weather_vane;
} px4_msgs__msg__PositionSetpoint;

// Struct for a sequence of px4_msgs__msg__PositionSetpoint.
typedef struct px4_msgs__msg__PositionSetpoint__Sequence
{
  px4_msgs__msg__PositionSetpoint * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__PositionSetpoint__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__POSITION_SETPOINT__STRUCT_H_
