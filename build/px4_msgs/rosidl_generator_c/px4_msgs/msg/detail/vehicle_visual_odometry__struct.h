// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/VehicleVisualOdometry.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_VISUAL_ODOMETRY__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_VISUAL_ODOMETRY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'COVARIANCE_MATRIX_X_VARIANCE'.
/**
  * Covariance matrix index constants
 */
enum
{
  px4_msgs__msg__VehicleVisualOdometry__COVARIANCE_MATRIX_X_VARIANCE = 0
};

/// Constant 'COVARIANCE_MATRIX_Y_VARIANCE'.
enum
{
  px4_msgs__msg__VehicleVisualOdometry__COVARIANCE_MATRIX_Y_VARIANCE = 6
};

/// Constant 'COVARIANCE_MATRIX_Z_VARIANCE'.
enum
{
  px4_msgs__msg__VehicleVisualOdometry__COVARIANCE_MATRIX_Z_VARIANCE = 11
};

/// Constant 'COVARIANCE_MATRIX_ROLL_VARIANCE'.
enum
{
  px4_msgs__msg__VehicleVisualOdometry__COVARIANCE_MATRIX_ROLL_VARIANCE = 15
};

/// Constant 'COVARIANCE_MATRIX_PITCH_VARIANCE'.
enum
{
  px4_msgs__msg__VehicleVisualOdometry__COVARIANCE_MATRIX_PITCH_VARIANCE = 18
};

/// Constant 'COVARIANCE_MATRIX_YAW_VARIANCE'.
enum
{
  px4_msgs__msg__VehicleVisualOdometry__COVARIANCE_MATRIX_YAW_VARIANCE = 20
};

/// Constant 'COVARIANCE_MATRIX_VX_VARIANCE'.
enum
{
  px4_msgs__msg__VehicleVisualOdometry__COVARIANCE_MATRIX_VX_VARIANCE = 0
};

/// Constant 'COVARIANCE_MATRIX_VY_VARIANCE'.
enum
{
  px4_msgs__msg__VehicleVisualOdometry__COVARIANCE_MATRIX_VY_VARIANCE = 6
};

/// Constant 'COVARIANCE_MATRIX_VZ_VARIANCE'.
enum
{
  px4_msgs__msg__VehicleVisualOdometry__COVARIANCE_MATRIX_VZ_VARIANCE = 11
};

/// Constant 'COVARIANCE_MATRIX_ROLLRATE_VARIANCE'.
enum
{
  px4_msgs__msg__VehicleVisualOdometry__COVARIANCE_MATRIX_ROLLRATE_VARIANCE = 15
};

/// Constant 'COVARIANCE_MATRIX_PITCHRATE_VARIANCE'.
enum
{
  px4_msgs__msg__VehicleVisualOdometry__COVARIANCE_MATRIX_PITCHRATE_VARIANCE = 18
};

/// Constant 'COVARIANCE_MATRIX_YAWRATE_VARIANCE'.
enum
{
  px4_msgs__msg__VehicleVisualOdometry__COVARIANCE_MATRIX_YAWRATE_VARIANCE = 20
};

/// Constant 'LOCAL_FRAME_NED'.
/**
  * Position and linear velocity frame of reference constants
  * NED earth-fixed frame
 */
enum
{
  px4_msgs__msg__VehicleVisualOdometry__LOCAL_FRAME_NED = 0
};

/// Constant 'LOCAL_FRAME_FRD'.
/**
  * FRD earth-fixed frame, arbitrary heading reference
 */
enum
{
  px4_msgs__msg__VehicleVisualOdometry__LOCAL_FRAME_FRD = 1
};

/// Constant 'LOCAL_FRAME_OTHER'.
/**
  * Not aligned with the std frames of reference
 */
enum
{
  px4_msgs__msg__VehicleVisualOdometry__LOCAL_FRAME_OTHER = 2
};

/// Constant 'BODY_FRAME_FRD'.
/**
  * FRD body-fixed frame
 */
enum
{
  px4_msgs__msg__VehicleVisualOdometry__BODY_FRAME_FRD = 3
};

/// Struct defined in msg/VehicleVisualOdometry in the package px4_msgs.
/**
  * Vehicle odometry data. Fits ROS REP 147 for aerial vehicles
 */
typedef struct px4_msgs__msg__VehicleVisualOdometry
{
  /// time since system start (microseconds)
  uint64_t timestamp;
  uint64_t timestamp_sample;
  /// Position and linear velocity local frame of reference
  uint8_t local_frame;
  /// Position in meters. Frame of reference defined by local_frame. NaN if invalid/unknown
  /// North position
  float x;
  /// East position
  float y;
  /// Down position
  float z;
  /// Orientation quaternion. First value NaN if invalid/unknown
  /// Quaternion rotation from FRD body frame to refernce frame
  float q[4];
  /// Quaternion rotation from odometry reference frame to navigation frame
  float q_offset[4];
  /// Row-major representation of 6x6 pose cross-covariance matrix URT.
  /// NED earth-fixed frame.
  /// Order: x, y, z, rotation about X axis, rotation about Y axis, rotation about Z axis
  /// If position covariance invalid/unknown, first cell is NaN
  /// If orientation covariance invalid/unknown, 16th cell is NaN
  float pose_covariance[21];
  /// Reference frame of the velocity data
  uint8_t velocity_frame;
  /// Velocity in meters/sec. Frame of reference defined by velocity_frame variable. NaN if invalid/unknown
  /// North velocity
  float vx;
  /// East velocity
  float vy;
  /// Down velocity
  float vz;
  /// Angular rate in body-fixed frame (rad/s). NaN if invalid/unknown
  /// Angular velocity about X body axis
  float rollspeed;
  /// Angular velocity about Y body axis
  float pitchspeed;
  /// Angular velocity about Z body axis
  float yawspeed;
  /// Row-major representation of 6x6 velocity cross-covariance matrix URT.
  /// Linear velocity in NED earth-fixed frame. Angular velocity in body-fixed frame.
  /// Order: vx, vy, vz, rotation rate about X axis, rotation rate about Y axis, rotation rate about Z axis
  /// If linear velocity covariance invalid/unknown, first cell is NaN
  /// If angular velocity covariance invalid/unknown, 16th cell is NaN
  float velocity_covariance[21];
  uint8_t reset_counter;
} px4_msgs__msg__VehicleVisualOdometry;

// Struct for a sequence of px4_msgs__msg__VehicleVisualOdometry.
typedef struct px4_msgs__msg__VehicleVisualOdometry__Sequence
{
  px4_msgs__msg__VehicleVisualOdometry * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__VehicleVisualOdometry__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_VISUAL_ODOMETRY__STRUCT_H_
