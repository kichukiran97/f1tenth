// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from internal_interface:msg/CarState.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__CAR_STATE__STRUCT_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__CAR_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__internal_interface__msg__CarState __attribute__((deprecated))
#else
# define DEPRECATED__internal_interface__msg__CarState __declspec(deprecated)
#endif

namespace internal_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct CarState_
{
  using Type = CarState_<ContainerAllocator>;

  explicit CarState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->vel_x = 0.0;
      this->vel_y = 0.0;
      this->vel_z = 0.0;
      this->accel_x = 0.0;
      this->accel_y = 0.0;
      this->accel_z = 0.0;
      this->yaw = 0.0f;
      this->roll = 0.0f;
      this->pitch = 0.0f;
    }
  }

  explicit CarState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->z = 0.0;
      this->vel_x = 0.0;
      this->vel_y = 0.0;
      this->vel_z = 0.0;
      this->accel_x = 0.0;
      this->accel_y = 0.0;
      this->accel_z = 0.0;
      this->yaw = 0.0f;
      this->roll = 0.0f;
      this->pitch = 0.0f;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _z_type =
    double;
  _z_type z;
  using _vel_x_type =
    double;
  _vel_x_type vel_x;
  using _vel_y_type =
    double;
  _vel_y_type vel_y;
  using _vel_z_type =
    double;
  _vel_z_type vel_z;
  using _accel_x_type =
    double;
  _accel_x_type accel_x;
  using _accel_y_type =
    double;
  _accel_y_type accel_y;
  using _accel_z_type =
    double;
  _accel_z_type accel_z;
  using _yaw_type =
    float;
  _yaw_type yaw;
  using _roll_type =
    float;
  _roll_type roll;
  using _pitch_type =
    float;
  _pitch_type pitch;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__z(
    const double & _arg)
  {
    this->z = _arg;
    return *this;
  }
  Type & set__vel_x(
    const double & _arg)
  {
    this->vel_x = _arg;
    return *this;
  }
  Type & set__vel_y(
    const double & _arg)
  {
    this->vel_y = _arg;
    return *this;
  }
  Type & set__vel_z(
    const double & _arg)
  {
    this->vel_z = _arg;
    return *this;
  }
  Type & set__accel_x(
    const double & _arg)
  {
    this->accel_x = _arg;
    return *this;
  }
  Type & set__accel_y(
    const double & _arg)
  {
    this->accel_y = _arg;
    return *this;
  }
  Type & set__accel_z(
    const double & _arg)
  {
    this->accel_z = _arg;
    return *this;
  }
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

  // constant declarations

  // pointer types
  using RawPtr =
    internal_interface::msg::CarState_<ContainerAllocator> *;
  using ConstRawPtr =
    const internal_interface::msg::CarState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<internal_interface::msg::CarState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<internal_interface::msg::CarState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      internal_interface::msg::CarState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<internal_interface::msg::CarState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      internal_interface::msg::CarState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<internal_interface::msg::CarState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<internal_interface::msg::CarState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<internal_interface::msg::CarState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__internal_interface__msg__CarState
    std::shared_ptr<internal_interface::msg::CarState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__internal_interface__msg__CarState
    std::shared_ptr<internal_interface::msg::CarState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const CarState_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->z != other.z) {
      return false;
    }
    if (this->vel_x != other.vel_x) {
      return false;
    }
    if (this->vel_y != other.vel_y) {
      return false;
    }
    if (this->vel_z != other.vel_z) {
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
    if (this->yaw != other.yaw) {
      return false;
    }
    if (this->roll != other.roll) {
      return false;
    }
    if (this->pitch != other.pitch) {
      return false;
    }
    return true;
  }
  bool operator!=(const CarState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct CarState_

// alias to use template instance with default allocator
using CarState =
  internal_interface::msg::CarState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__CAR_STATE__STRUCT_HPP_
