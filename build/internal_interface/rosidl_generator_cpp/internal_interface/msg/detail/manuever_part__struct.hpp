// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from internal_interface:msg/ManueverPart.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__MANUEVER_PART__STRUCT_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__MANUEVER_PART__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'control'
#include "internal_interface/msg/detail/control_input__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__internal_interface__msg__ManueverPart __attribute__((deprecated))
#else
# define DEPRECATED__internal_interface__msg__ManueverPart __declspec(deprecated)
#endif

namespace internal_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ManueverPart_
{
  using Type = ManueverPart_<ContainerAllocator>;

  explicit ManueverPart_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : control(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->duration_seconds = 0.0;
    }
  }

  explicit ManueverPart_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : control(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->duration_seconds = 0.0;
    }
  }

  // field types and members
  using _control_type =
    internal_interface::msg::ControlInput_<ContainerAllocator>;
  _control_type control;
  using _duration_seconds_type =
    double;
  _duration_seconds_type duration_seconds;

  // setters for named parameter idiom
  Type & set__control(
    const internal_interface::msg::ControlInput_<ContainerAllocator> & _arg)
  {
    this->control = _arg;
    return *this;
  }
  Type & set__duration_seconds(
    const double & _arg)
  {
    this->duration_seconds = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    internal_interface::msg::ManueverPart_<ContainerAllocator> *;
  using ConstRawPtr =
    const internal_interface::msg::ManueverPart_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<internal_interface::msg::ManueverPart_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<internal_interface::msg::ManueverPart_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      internal_interface::msg::ManueverPart_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<internal_interface::msg::ManueverPart_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      internal_interface::msg::ManueverPart_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<internal_interface::msg::ManueverPart_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<internal_interface::msg::ManueverPart_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<internal_interface::msg::ManueverPart_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__internal_interface__msg__ManueverPart
    std::shared_ptr<internal_interface::msg::ManueverPart_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__internal_interface__msg__ManueverPart
    std::shared_ptr<internal_interface::msg::ManueverPart_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ManueverPart_ & other) const
  {
    if (this->control != other.control) {
      return false;
    }
    if (this->duration_seconds != other.duration_seconds) {
      return false;
    }
    return true;
  }
  bool operator!=(const ManueverPart_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ManueverPart_

// alias to use template instance with default allocator
using ManueverPart =
  internal_interface::msg::ManueverPart_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__MANUEVER_PART__STRUCT_HPP_
