// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from px4_msgs:msg/EstimatorOdometry.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__ESTIMATOR_ODOMETRY__STRUCT_HPP_
#define PX4_MSGS__MSG__DETAIL__ESTIMATOR_ODOMETRY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__px4_msgs__msg__EstimatorOdometry __attribute__((deprecated))
#else
# define DEPRECATED__px4_msgs__msg__EstimatorOdometry __declspec(deprecated)
#endif

namespace px4_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EstimatorOdometry_
{
  using Type = EstimatorOdometry_<ContainerAllocator>;

  explicit EstimatorOdometry_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->local_frame = 0;
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
      std::fill<typename std::array<float, 4>::iterator, float>(this->q.begin(), this->q.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->q_offset.begin(), this->q_offset.end(), 0.0f);
      std::fill<typename std::array<float, 21>::iterator, float>(this->pose_covariance.begin(), this->pose_covariance.end(), 0.0f);
      this->velocity_frame = 0;
      this->vx = 0.0f;
      this->vy = 0.0f;
      this->vz = 0.0f;
      this->rollspeed = 0.0f;
      this->pitchspeed = 0.0f;
      this->yawspeed = 0.0f;
      std::fill<typename std::array<float, 21>::iterator, float>(this->velocity_covariance.begin(), this->velocity_covariance.end(), 0.0f);
      this->reset_counter = 0;
    }
  }

  explicit EstimatorOdometry_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : q(_alloc),
    q_offset(_alloc),
    pose_covariance(_alloc),
    velocity_covariance(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->timestamp = 0ull;
      this->timestamp_sample = 0ull;
      this->local_frame = 0;
      this->x = 0.0f;
      this->y = 0.0f;
      this->z = 0.0f;
      std::fill<typename std::array<float, 4>::iterator, float>(this->q.begin(), this->q.end(), 0.0f);
      std::fill<typename std::array<float, 4>::iterator, float>(this->q_offset.begin(), this->q_offset.end(), 0.0f);
      std::fill<typename std::array<float, 21>::iterator, float>(this->pose_covariance.begin(), this->pose_covariance.end(), 0.0f);
      this->velocity_frame = 0;
      this->vx = 0.0f;
      this->vy = 0.0f;
      this->vz = 0.0f;
      this->rollspeed = 0.0f;
      this->pitchspeed = 0.0f;
      this->yawspeed = 0.0f;
      std::fill<typename std::array<float, 21>::iterator, float>(this->velocity_covariance.begin(), this->velocity_covariance.end(), 0.0f);
      this->reset_counter = 0;
    }
  }

  // field types and members
  using _timestamp_type =
    uint64_t;
  _timestamp_type timestamp;
  using _timestamp_sample_type =
    uint64_t;
  _timestamp_sample_type timestamp_sample;
  using _local_frame_type =
    uint8_t;
  _local_frame_type local_frame;
  using _x_type =
    float;
  _x_type x;
  using _y_type =
    float;
  _y_type y;
  using _z_type =
    float;
  _z_type z;
  using _q_type =
    std::array<float, 4>;
  _q_type q;
  using _q_offset_type =
    std::array<float, 4>;
  _q_offset_type q_offset;
  using _pose_covariance_type =
    std::array<float, 21>;
  _pose_covariance_type pose_covariance;
  using _velocity_frame_type =
    uint8_t;
  _velocity_frame_type velocity_frame;
  using _vx_type =
    float;
  _vx_type vx;
  using _vy_type =
    float;
  _vy_type vy;
  using _vz_type =
    float;
  _vz_type vz;
  using _rollspeed_type =
    float;
  _rollspeed_type rollspeed;
  using _pitchspeed_type =
    float;
  _pitchspeed_type pitchspeed;
  using _yawspeed_type =
    float;
  _yawspeed_type yawspeed;
  using _velocity_covariance_type =
    std::array<float, 21>;
  _velocity_covariance_type velocity_covariance;
  using _reset_counter_type =
    uint8_t;
  _reset_counter_type reset_counter;

  // setters for named parameter idiom
  Type & set__timestamp(
    const uint64_t & _arg)
  {
    this->timestamp = _arg;
    return *this;
  }
  Type & set__timestamp_sample(
    const uint64_t & _arg)
  {
    this->timestamp_sample = _arg;
    return *this;
  }
  Type & set__local_frame(
    const uint8_t & _arg)
  {
    this->local_frame = _arg;
    return *this;
  }
  Type & set__x(
    const float & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const float & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const float & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__q(
    const std::array<float, 4> & _arg)
  {
    this->q = _arg;
    return *this;
  }
  Type & set__q_offset(
    const std::array<float, 4> & _arg)
  {
    this->q_offset = _arg;
    return *this;
  }
  Type & set__pose_covariance(
    const std::array<float, 21> & _arg)
  {
    this->pose_covariance = _arg;
    return *this;
  }
  Type & set__velocity_frame(
    const uint8_t & _arg)
  {
    this->velocity_frame = _arg;
    return *this;
  }
  Type & set__vx(
    const float & _arg)
  {
    this->vx = _arg;
    return *this;
  }
  Type & set__vy(
    const float & _arg)
  {
    this->vy = _arg;
    return *this;
  }
  Type & set__vz(
    const float & _arg)
  {
    this->vz = _arg;
    return *this;
  }
  Type & set__rollspeed(
    const float & _arg)
  {
    this->rollspeed = _arg;
    return *this;
  }
  Type & set__pitchspeed(
    const float & _arg)
  {
    this->pitchspeed = _arg;
    return *this;
  }
  Type & set__yawspeed(
    const float & _arg)
  {
    this->yawspeed = _arg;
    return *this;
  }
  Type & set__velocity_covariance(
    const std::array<float, 21> & _arg)
  {
    this->velocity_covariance = _arg;
    return *this;
  }
  Type & set__reset_counter(
    const uint8_t & _arg)
  {
    this->reset_counter = _arg;
    return *this;
  }

  // constant declarations
  static constexpr uint8_t COVARIANCE_MATRIX_X_VARIANCE =
    0u;
  static constexpr uint8_t COVARIANCE_MATRIX_Y_VARIANCE =
    6u;
  static constexpr uint8_t COVARIANCE_MATRIX_Z_VARIANCE =
    11u;
  static constexpr uint8_t COVARIANCE_MATRIX_ROLL_VARIANCE =
    15u;
  static constexpr uint8_t COVARIANCE_MATRIX_PITCH_VARIANCE =
    18u;
  static constexpr uint8_t COVARIANCE_MATRIX_YAW_VARIANCE =
    20u;
  static constexpr uint8_t COVARIANCE_MATRIX_VX_VARIANCE =
    0u;
  static constexpr uint8_t COVARIANCE_MATRIX_VY_VARIANCE =
    6u;
  static constexpr uint8_t COVARIANCE_MATRIX_VZ_VARIANCE =
    11u;
  static constexpr uint8_t COVARIANCE_MATRIX_ROLLRATE_VARIANCE =
    15u;
  static constexpr uint8_t COVARIANCE_MATRIX_PITCHRATE_VARIANCE =
    18u;
  static constexpr uint8_t COVARIANCE_MATRIX_YAWRATE_VARIANCE =
    20u;
  static constexpr uint8_t LOCAL_FRAME_NED =
    0u;
  static constexpr uint8_t LOCAL_FRAME_FRD =
    1u;
  static constexpr uint8_t LOCAL_FRAME_OTHER =
    2u;
  static constexpr uint8_t BODY_FRAME_FRD =
    3u;

  // pointer types
  using RawPtr =
    px4_msgs::msg::EstimatorOdometry_<ContainerAllocator> *;
  using ConstRawPtr =
    const px4_msgs::msg::EstimatorOdometry_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<px4_msgs::msg::EstimatorOdometry_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<px4_msgs::msg::EstimatorOdometry_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::EstimatorOdometry_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::EstimatorOdometry_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      px4_msgs::msg::EstimatorOdometry_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<px4_msgs::msg::EstimatorOdometry_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<px4_msgs::msg::EstimatorOdometry_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<px4_msgs::msg::EstimatorOdometry_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__px4_msgs__msg__EstimatorOdometry
    std::shared_ptr<px4_msgs::msg::EstimatorOdometry_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__px4_msgs__msg__EstimatorOdometry
    std::shared_ptr<px4_msgs::msg::EstimatorOdometry_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EstimatorOdometry_ & other) const
  {
    if (this->timestamp != other.timestamp) {
      return false;
    }
    if (this->timestamp_sample != other.timestamp_sample) {
      return false;
    }
    if (this->local_frame != other.local_frame) {
      return false;
    }
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->q != other.q) {
      return false;
    }
    if (this->q_offset != other.q_offset) {
      return false;
    }
    if (this->pose_covariance != other.pose_covariance) {
      return false;
    }
    if (this->velocity_frame != other.velocity_frame) {
      return false;
    }
    if (this->vx != other.vx) {
      return false;
    }
    if (this->vy != other.vy) {
      return false;
    }
    if (this->vz != other.vz) {
      return false;
    }
    if (this->rollspeed != other.rollspeed) {
      return false;
    }
    if (this->pitchspeed != other.pitchspeed) {
      return false;
    }
    if (this->yawspeed != other.yawspeed) {
      return false;
    }
    if (this->velocity_covariance != other.velocity_covariance) {
      return false;
    }
    if (this->reset_counter != other.reset_counter) {
      return false;
    }
    return true;
  }
  bool operator!=(const EstimatorOdometry_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EstimatorOdometry_

// alias to use template instance with default allocator
using EstimatorOdometry =
  px4_msgs::msg::EstimatorOdometry_<std::allocator<void>>;

// constant definitions
template<typename ContainerAllocator>
constexpr uint8_t EstimatorOdometry_<ContainerAllocator>::COVARIANCE_MATRIX_X_VARIANCE;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorOdometry_<ContainerAllocator>::COVARIANCE_MATRIX_Y_VARIANCE;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorOdometry_<ContainerAllocator>::COVARIANCE_MATRIX_Z_VARIANCE;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorOdometry_<ContainerAllocator>::COVARIANCE_MATRIX_ROLL_VARIANCE;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorOdometry_<ContainerAllocator>::COVARIANCE_MATRIX_PITCH_VARIANCE;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorOdometry_<ContainerAllocator>::COVARIANCE_MATRIX_YAW_VARIANCE;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorOdometry_<ContainerAllocator>::COVARIANCE_MATRIX_VX_VARIANCE;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorOdometry_<ContainerAllocator>::COVARIANCE_MATRIX_VY_VARIANCE;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorOdometry_<ContainerAllocator>::COVARIANCE_MATRIX_VZ_VARIANCE;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorOdometry_<ContainerAllocator>::COVARIANCE_MATRIX_ROLLRATE_VARIANCE;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorOdometry_<ContainerAllocator>::COVARIANCE_MATRIX_PITCHRATE_VARIANCE;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorOdometry_<ContainerAllocator>::COVARIANCE_MATRIX_YAWRATE_VARIANCE;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorOdometry_<ContainerAllocator>::LOCAL_FRAME_NED;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorOdometry_<ContainerAllocator>::LOCAL_FRAME_FRD;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorOdometry_<ContainerAllocator>::LOCAL_FRAME_OTHER;
template<typename ContainerAllocator>
constexpr uint8_t EstimatorOdometry_<ContainerAllocator>::BODY_FRAME_FRD;

}  // namespace msg

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__ESTIMATOR_ODOMETRY__STRUCT_HPP_
