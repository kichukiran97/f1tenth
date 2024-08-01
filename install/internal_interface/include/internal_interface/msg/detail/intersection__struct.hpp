// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from internal_interface:msg/Intersection.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__INTERSECTION__STRUCT_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__INTERSECTION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__internal_interface__msg__Intersection __attribute__((deprecated))
#else
# define DEPRECATED__internal_interface__msg__Intersection __declspec(deprecated)
#endif

namespace internal_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Intersection_
{
  using Type = Intersection_<ContainerAllocator>;

  explicit Intersection_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->intersection_distance = 0.0;
      this->intersection_angle = 0.0;
      this->is_detected = false;
    }
  }

  explicit Intersection_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->intersection_distance = 0.0;
      this->intersection_angle = 0.0;
      this->is_detected = false;
    }
  }

  // field types and members
  using _intersection_distance_type =
    double;
  _intersection_distance_type intersection_distance;
  using _intersection_angle_type =
    double;
  _intersection_angle_type intersection_angle;
  using _is_detected_type =
    bool;
  _is_detected_type is_detected;

  // setters for named parameter idiom
  Type & set__intersection_distance(
    const double & _arg)
  {
    this->intersection_distance = _arg;
    return *this;
  }
  Type & set__intersection_angle(
    const double & _arg)
  {
    this->intersection_angle = _arg;
    return *this;
  }
  Type & set__is_detected(
    const bool & _arg)
  {
    this->is_detected = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    internal_interface::msg::Intersection_<ContainerAllocator> *;
  using ConstRawPtr =
    const internal_interface::msg::Intersection_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<internal_interface::msg::Intersection_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<internal_interface::msg::Intersection_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      internal_interface::msg::Intersection_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<internal_interface::msg::Intersection_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      internal_interface::msg::Intersection_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<internal_interface::msg::Intersection_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<internal_interface::msg::Intersection_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<internal_interface::msg::Intersection_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__internal_interface__msg__Intersection
    std::shared_ptr<internal_interface::msg::Intersection_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__internal_interface__msg__Intersection
    std::shared_ptr<internal_interface::msg::Intersection_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Intersection_ & other) const
  {
    if (this->intersection_distance != other.intersection_distance) {
      return false;
    }
    if (this->intersection_angle != other.intersection_angle) {
      return false;
    }
    if (this->is_detected != other.is_detected) {
      return false;
    }
    return true;
  }
  bool operator!=(const Intersection_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Intersection_

// alias to use template instance with default allocator
using Intersection =
  internal_interface::msg::Intersection_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__INTERSECTION__STRUCT_HPP_
