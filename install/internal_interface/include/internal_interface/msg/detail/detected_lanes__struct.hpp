// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from internal_interface:msg/DetectedLanes.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__DETECTED_LANES__STRUCT_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__DETECTED_LANES__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__internal_interface__msg__DetectedLanes __attribute__((deprecated))
#else
# define DEPRECATED__internal_interface__msg__DetectedLanes __declspec(deprecated)
#endif

namespace internal_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DetectedLanes_
{
  using Type = DetectedLanes_<ContainerAllocator>;

  explicit DetectedLanes_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0.0f;
      this->speed = 0.0f;
      this->angle = 0.0f;
    }
  }

  explicit DetectedLanes_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->distance = 0.0f;
      this->speed = 0.0f;
      this->angle = 0.0f;
    }
  }

  // field types and members
  using _distance_type =
    float;
  _distance_type distance;
  using _speed_type =
    float;
  _speed_type speed;
  using _angle_type =
    float;
  _angle_type angle;

  // setters for named parameter idiom
  Type & set__distance(
    const float & _arg)
  {
    this->distance = _arg;
    return *this;
  }
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__angle(
    const float & _arg)
  {
    this->angle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    internal_interface::msg::DetectedLanes_<ContainerAllocator> *;
  using ConstRawPtr =
    const internal_interface::msg::DetectedLanes_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<internal_interface::msg::DetectedLanes_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<internal_interface::msg::DetectedLanes_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      internal_interface::msg::DetectedLanes_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<internal_interface::msg::DetectedLanes_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      internal_interface::msg::DetectedLanes_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<internal_interface::msg::DetectedLanes_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<internal_interface::msg::DetectedLanes_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<internal_interface::msg::DetectedLanes_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__internal_interface__msg__DetectedLanes
    std::shared_ptr<internal_interface::msg::DetectedLanes_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__internal_interface__msg__DetectedLanes
    std::shared_ptr<internal_interface::msg::DetectedLanes_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DetectedLanes_ & other) const
  {
    if (this->distance != other.distance) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    if (this->angle != other.angle) {
      return false;
    }
    return true;
  }
  bool operator!=(const DetectedLanes_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DetectedLanes_

// alias to use template instance with default allocator
using DetectedLanes =
  internal_interface::msg::DetectedLanes_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__DETECTED_LANES__STRUCT_HPP_
