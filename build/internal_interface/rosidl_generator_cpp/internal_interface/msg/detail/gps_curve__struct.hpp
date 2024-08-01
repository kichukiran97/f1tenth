// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from internal_interface:msg/GpsCurve.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__GPS_CURVE__STRUCT_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__GPS_CURVE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'nodes'
// Member 'car'
// Member 'target'
#include "internal_interface/msg/detail/gps_node__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__internal_interface__msg__GpsCurve __attribute__((deprecated))
#else
# define DEPRECATED__internal_interface__msg__GpsCurve __declspec(deprecated)
#endif

namespace internal_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GpsCurve_
{
  using Type = GpsCurve_<ContainerAllocator>;

  explicit GpsCurve_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : car(_init),
    target(_init)
  {
    (void)_init;
  }

  explicit GpsCurve_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : car(_alloc, _init),
    target(_alloc, _init)
  {
    (void)_init;
  }

  // field types and members
  using _nodes_type =
    std::vector<internal_interface::msg::GpsNode_<ContainerAllocator>, typename ContainerAllocator::template rebind<internal_interface::msg::GpsNode_<ContainerAllocator>>::other>;
  _nodes_type nodes;
  using _car_type =
    internal_interface::msg::GpsNode_<ContainerAllocator>;
  _car_type car;
  using _target_type =
    internal_interface::msg::GpsNode_<ContainerAllocator>;
  _target_type target;

  // setters for named parameter idiom
  Type & set__nodes(
    const std::vector<internal_interface::msg::GpsNode_<ContainerAllocator>, typename ContainerAllocator::template rebind<internal_interface::msg::GpsNode_<ContainerAllocator>>::other> & _arg)
  {
    this->nodes = _arg;
    return *this;
  }
  Type & set__car(
    const internal_interface::msg::GpsNode_<ContainerAllocator> & _arg)
  {
    this->car = _arg;
    return *this;
  }
  Type & set__target(
    const internal_interface::msg::GpsNode_<ContainerAllocator> & _arg)
  {
    this->target = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    internal_interface::msg::GpsCurve_<ContainerAllocator> *;
  using ConstRawPtr =
    const internal_interface::msg::GpsCurve_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<internal_interface::msg::GpsCurve_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<internal_interface::msg::GpsCurve_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      internal_interface::msg::GpsCurve_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<internal_interface::msg::GpsCurve_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      internal_interface::msg::GpsCurve_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<internal_interface::msg::GpsCurve_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<internal_interface::msg::GpsCurve_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<internal_interface::msg::GpsCurve_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__internal_interface__msg__GpsCurve
    std::shared_ptr<internal_interface::msg::GpsCurve_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__internal_interface__msg__GpsCurve
    std::shared_ptr<internal_interface::msg::GpsCurve_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GpsCurve_ & other) const
  {
    if (this->nodes != other.nodes) {
      return false;
    }
    if (this->car != other.car) {
      return false;
    }
    if (this->target != other.target) {
      return false;
    }
    return true;
  }
  bool operator!=(const GpsCurve_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GpsCurve_

// alias to use template instance with default allocator
using GpsCurve =
  internal_interface::msg::GpsCurve_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__GPS_CURVE__STRUCT_HPP_
