// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from px4_msgs:msg/VehicleMocapOdometry.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__VEHICLE_MOCAP_ODOMETRY__STRUCT_H_
#define PX4_MSGS__MSG__DETAIL__VEHICLE_MOCAP_ODOMETRY__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'COVARIANCE_MATRIX_X_VARIANCE'.
enum
{
  px4_msgs__msg__VehicleMocapOdometry__COVARIANCE_MATRIX_X_VARIANCE = 0
};

/// Constant 'COVARIANCE_MATRIX_Y_VARIANCE'.
enum
{
  px4_msgs__msg__VehicleMocapOdometry__COVARIANCE_MATRIX_Y_VARIANCE = 6
};

/// Constant 'COVARIANCE_MATRIX_Z_VARIANCE'.
enum
{
  px4_msgs__msg__VehicleMocapOdometry__COVARIANCE_MATRIX_Z_VARIANCE = 11
};

/// Constant 'COVARIANCE_MATRIX_ROLL_VARIANCE'.
enum
{
  px4_msgs__msg__VehicleMocapOdometry__COVARIANCE_MATRIX_ROLL_VARIANCE = 15
};

/// Constant 'COVARIANCE_MATRIX_PITCH_VARIANCE'.
enum
{
  px4_msgs__msg__VehicleMocapOdometry__COVARIANCE_MATRIX_PITCH_VARIANCE = 18
};

/// Constant 'COVARIANCE_MATRIX_YAW_VARIANCE'.
enum
{
  px4_msgs__msg__VehicleMocapOdometry__COVARIANCE_MATRIX_YAW_VARIANCE = 20
};

/// Constant 'COVARIANCE_MATRIX_VX_VARIANCE'.
enum
{
  px4_msgs__msg__VehicleMocapOdometry__COVARIANCE_MATRIX_VX_VARIANCE = 0
};

/// Constant 'COVARIANCE_MATRIX_VY_VARIANCE'.
enum
{
  px4_msgs__msg__VehicleMocapOdometry__COVARIANCE_MATRIX_VY_VARIANCE = 6
};

/// Constant 'COVARIANCE_MATRIX_VZ_VARIANCE'.
enum
{
  px4_msgs__msg__VehicleMocapOdometry__COVARIANCE_MATRIX_VZ_VARIANCE = 11
};

/// Constant 'COVARIANCE_MATRIX_ROLLRATE_VARIANCE'.
enum
{
  px4_msgs__msg__VehicleMocapOdometry__COVARIANCE_MATRIX_ROLLRATE_VARIANCE = 15
};

/// Constant 'COVARIANCE_MATRIX_PITCHRATE_VARIANCE'.
enum
{
  px4_msgs__msg__VehicleMocapOdometry__COVARIANCE_MATRIX_PITCHRATE_VARIANCE = 18
};

/// Constant 'COVARIANCE_MATRIX_YAWRATE_VARIANCE'.
enum
{
  px4_msgs__msg__VehicleMocapOdometry__COVARIANCE_MATRIX_YAWRATE_VARIANCE = 20
};

/// Constant 'LOCAL_FRAME_NED'.
enum
{
  px4_msgs__msg__VehicleMocapOdometry__LOCAL_FRAME_NED = 0
};

/// Constant 'LOCAL_FRAME_FRD'.
enum
{
  px4_msgs__msg__VehicleMocapOdometry__LOCAL_FRAME_FRD = 1
};

/// Constant 'LOCAL_FRAME_OTHER'.
enum
{
  px4_msgs__msg__VehicleMocapOdometry__LOCAL_FRAME_OTHER = 2
};

/// Constant 'BODY_FRAME_FRD'.
enum
{
  px4_msgs__msg__VehicleMocapOdometry__BODY_FRAME_FRD = 3
};

// Struct defined in msg/VehicleMocapOdometry in the package px4_msgs.
typedef struct px4_msgs__msg__VehicleMocapOdometry
{
  uint64_t timestamp;
  uint64_t timestamp_sample;
  uint8_t local_frame;
  float x;
  float y;
  float z;
  float q[4];
  float q_offset[4];
  float pose_covariance[21];
  uint8_t velocity_frame;
  float vx;
  float vy;
  float vz;
  float rollspeed;
  float pitchspeed;
  float yawspeed;
  float velocity_covariance[21];
  uint8_t reset_counter;
} px4_msgs__msg__VehicleMocapOdometry;

// Struct for a sequence of px4_msgs__msg__VehicleMocapOdometry.
typedef struct px4_msgs__msg__VehicleMocapOdometry__Sequence
{
  px4_msgs__msg__VehicleMocapOdometry * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} px4_msgs__msg__VehicleMocapOdometry__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // PX4_MSGS__MSG__DETAIL__VEHICLE_MOCAP_ODOMETRY__STRUCT_H_
