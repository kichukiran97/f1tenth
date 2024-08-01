// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from internal_interface:msg/GpsNode.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__GPS_NODE__STRUCT_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__GPS_NODE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__internal_interface__msg__GpsNode __attribute__((deprecated))
#else
# define DEPRECATED__internal_interface__msg__GpsNode __declspec(deprecated)
#endif

namespace internal_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GpsNode_
{
  using Type = GpsNode_<ContainerAllocator>;

  explicit GpsNode_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
    }
  }

  explicit GpsNode_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;

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

  // constant declarations

  // pointer types
  using RawPtr =
    internal_interface::msg::GpsNode_<ContainerAllocator> *;
  using ConstRawPtr =
    const internal_interface::msg::GpsNode_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<internal_interface::msg::GpsNode_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<internal_interface::msg::GpsNode_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      internal_interface::msg::GpsNode_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<internal_interface::msg::GpsNode_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      internal_interface::msg::GpsNode_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<internal_interface::msg::GpsNode_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<internal_interface::msg::GpsNode_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<internal_interface::msg::GpsNode_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__internal_interface__msg__GpsNode
    std::shared_ptr<internal_interface::msg::GpsNode_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__internal_interface__msg__GpsNode
    std::shared_ptr<internal_interface::msg::GpsNode_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GpsNode_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    return true;
  }
  bool operator!=(const GpsNode_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GpsNode_

// alias to use template instance with default allocator
using GpsNode =
  internal_interface::msg::GpsNode_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__GPS_NODE__STRUCT_HPP_
