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
/**
  * position setpoint
 */
enum
{
  px4_msgs__msg__PositionSetpoint__SETPOINT_TYPE_POSITION = 0
};

/// Constant 'SETPOINT_TYPE_VELOCITY'.
/**
  * velocity setpoint
 */
enum
{
  px4_msgs__msg__PositionSetpoint__SETPOINT_TYPE_VELOCITY = 1
};

/// Constant 'SETPOINT_TYPE_LOITER'.
/**
  * loiter setpoint
 */
enum
{
  px4_msgs__msg__PositionSetpoint__SETPOINT_TYPE_LOITER = 2
};

/// Constant 'SETPOINT_TYPE_TAKEOFF'.
/**
  * takeoff setpoint
 */
enum
{
  px4_msgs__msg__PositionSetpoint__SETPOINT_TYPE_TAKEOFF = 3
};

/// Constant 'SETPOINT_TYPE_LAND'.
/**
  * land setpoint, altitude must be ignored, descend until landing
 */
enum
{
  px4_msgs__msg__PositionSetpoint__SETPOINT_TYPE_LAND = 4
};

/// Constant 'SETPOINT_TYPE_IDLE'.
/**
  * do nothing, switch off motors or keep at idle speed (MC)
 */
enum
{
  px4_msgs__msg__PositionSetpoint__SETPOINT_TYPE_IDLE = 5
};

/// Constant 'SETPOINT_TYPE_FOLLOW_TARGET'.
/**
  * setpoint in NED frame (x, y, z, vx, vy, vz) set by follow target
 */
enum
{
  px4_msgs__msg__PositionSetpoint__SETPOINT_TYPE_FOLLOW_TARGET = 6
};

/// Constant 'VELOCITY_FRAME_LOCAL_NED'.
/**
  * MAV_FRAME_LOCAL_NED
 */
enum
{
  px4_msgs__msg__PositionSetpoint__VELOCITY_FRAME_LOCAL_NED = 1
};

/// Constant 'VELOCITY_FRAME_BODY_NED'.
/**
  * MAV_FRAME_BODY_NED
 */
enum
{
  px4_msgs__msg__PositionSetpoint__VELOCITY_FRAME_BODY_NED = 8
};

/// Struct defined in msg/PositionSetpoint in the package px4_msgs.
/**
  * this file is only used in the position_setpoint triple as a dependency
 */
typedef struct px4_msgs__msg__PositionSetpoint
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  /// true if setpoint is valid
  bool valid;
  /// setpoint type to adjust behavior of position controller
  uint8_t type;
  /// local velocity setpoint in m/s in NED
  float vx;
  /// local velocity setpoint in m/s in NED
  float vy;
  /// local velocity setpoint in m/s in NED
  float vz;
  /// true if local velocity setpoint valid
  bool velocity_valid;
  /// to set velocity setpoints in NED or body
  uint8_t velocity_frame;
  /// do not set for 3D position control. Set to true if you want z-position control while doing vx,vy velocity control.
  bool alt_valid;
  /// latitude, in deg
  double lat;
  /// longitude, in deg
  double lon;
  /// altitude AMSL, in m
  float alt;
  /// yaw (only for multirotors), in rad [-PI..PI), NaN = hold current yaw
  float yaw;
  /// true if yaw setpoint valid
  bool yaw_valid;
  /// yawspeed (only for multirotors, in rad/s)
  float yawspeed;
  /// true if yawspeed setpoint valid
  bool yawspeed_valid;
  /// landing gear: see definition of the states in landing_gear.msg
  int8_t landing_gear;
  /// loiter radius (only for fixed wing), in m
  float loiter_radius;
  /// loiter direction: 1 = CW, -1 = CCW
  int8_t loiter_direction;
  /// navigation acceptance_radius if we're doing waypoint navigation
  float acceptance_radius;
  /// the generally desired cruising speed (not a hard constraint)
  float cruising_speed;
  /// the generally desired cruising throttle (not a hard constraint)
  float cruising_throttle;
  /// VTOL: disable (in auto mode) the weather vane feature that turns the nose into the wind
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
