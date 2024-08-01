// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from internal_interface:msg/RawImu.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__RAW_IMU__STRUCT_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__RAW_IMU__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__internal_interface__msg__RawImu __attribute__((deprecated))
#else
# define DEPRECATED__internal_interface__msg__RawImu __declspec(deprecated)
#endif

namespace internal_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RawImu_
{
  using Type = RawImu_<ContainerAllocator>;

  explicit RawImu_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw = 0.0f;
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->accel_x = 0.0f;
      this->accel_y = 0.0f;
      this->accel_z = 0.0f;
    }
  }

  explicit RawImu_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->yaw = 0.0f;
      this->roll = 0.0f;
      this->pitch = 0.0f;
      this->accel_x = 0.0f;
      this->accel_y = 0.0f;
      this->accel_z = 0.0f;
    }
  }

  // field types and members
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _roll_type =
    float;
  _roll_type roll;
  using _pitch_type =
    float;
  _pitch_type pitch;
  using _accel_x_type =
    float;
  _accel_x_type accel_x;
  using _accel_y_type =
    float;
  _accel_y_type accel_y;
  using _accel_z_type =
    float;
  _accel_z_type accel_z;

  // setters for named parameter idiom
  Type & set__yaw(
    const float & _arg)
  {
    this->yaw = _arg;
    return *this;
  }
  Type & set__roll(
    const float & _arg)
  {
    this->roll = _arg;
    return *this;
  }
  Type & set__pitch(
    const float & _arg)
  {
    this->pitch = _arg;
    return *this;
  }
  Type & set__accel_x(
    const float & _arg)
  {
    this->accel_x = _arg;
    return *this;
  }
  Type & set__accel_y(
    const float & _arg)
  {
    this->accel_y = _arg;
    return *this;
  }
  Type & set__accel_z(
    const float & _arg)
  {
    this->accel_z = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    internal_interface::msg::RawImu_<ContainerAllocator> *;
  using ConstRawPtr =
    const internal_interface::msg::RawImu_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<internal_interface::msg::RawImu_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<internal_interface::msg::RawImu_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      internal_interface::msg::RawImu_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<internal_interface::msg::RawImu_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      internal_interface::msg::RawImu_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<internal_interface::msg::RawImu_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<internal_interface::msg::RawImu_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<internal_interface::msg::RawImu_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__internal_interface__msg__RawImu
    std::shared_ptr<internal_interface::msg::RawImu_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__internal_interface__msg__RawImu
    std::shared_ptr<internal_interface::msg::RawImu_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RawImu_ & other) const
  {
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    if (this->accel_x != other.accel_x) {
      return false;
    }
    if (this->accel_y != other.accel_y) {
      return false;
    }
    if (this->accel_z != other.accel_z) {
      return false;
    }
    return true;
  }
  bool operator!=(const RawImu_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RawImu_

// alias to use template instance with default allocator
using RawImu =
  internal_interface::msg::RawImu_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__RAW_IMU__STRUCT_HPP_
