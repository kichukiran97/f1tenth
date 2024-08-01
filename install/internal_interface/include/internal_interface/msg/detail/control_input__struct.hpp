// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from internal_interface:msg/ControlInput.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__CONTROL_INPUT__STRUCT_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__CONTROL_INPUT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__internal_interface__msg__ControlInput __attribute__((deprecated))
#else
# define DEPRECATED__internal_interface__msg__ControlInput __declspec(deprecated)
#endif

namespace internal_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ControlInput_
{
  using Type = ControlInput_<ContainerAllocator>;

  explicit ControlInput_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0;
      this->steer = 0.0;
      this->speed_confidence = 0.0;
      this->steer_confidence = 0.0;
      this->source = "";
    }
  }

  explicit ControlInput_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : source(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0;
      this->steer = 0.0;
      this->speed_confidence = 0.0;
      this->steer_confidence = 0.0;
      this->source = "";
    }
  }

  // field types and members
  using _speed_type =
    double;
  _speed_type speed;
  using _steer_type =
    double;
  _steer_type steer;
  using _speed_confidence_type =
    double;
  _speed_confidence_type speed_confidence;
  using _steer_confidence_type =
    double;
  _steer_confidence_type steer_confidence;
  using _source_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _source_type source;

  // setters for named parameter idiom
  Type & set__speed(
    const double & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__steer(
    const double & _arg)
  {
    this->steer = _arg;
    return *this;
  }
  Type & set__speed_confidence(
    const double & _arg)
  {
    this->speed_confidence = _arg;
    return *this;
  }
  Type & set__steer_confidence(
    const double & _arg)
  {
    this->steer_confidence = _arg;
    return *this;
  }
  Type & set__source(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->source = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    internal_interface::msg::ControlInput_<ContainerAllocator> *;
  using ConstRawPtr =
    const internal_interface::msg::ControlInput_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<internal_interface::msg::ControlInput_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<internal_interface::msg::ControlInput_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      internal_interface::msg::ControlInput_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<internal_interface::msg::ControlInput_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      internal_interface::msg::ControlInput_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<internal_interface::msg::ControlInput_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<internal_interface::msg::ControlInput_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<internal_interface::msg::ControlInput_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__internal_interface__msg__ControlInput
    std::shared_ptr<internal_interface::msg::ControlInput_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__internal_interface__msg__ControlInput
    std::shared_ptr<internal_interface::msg::ControlInput_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ControlInput_ & other) const
  {
    if (this->speed != other.speed) {
      return false;
    }
    if (this->steer != other.steer) {
      return false;
    }
    if (this->speed_confidence != other.speed_confidence) {
      return false;
    }
    if (this->steer_confidence != other.steer_confidence) {
      return false;
    }
    if (this->source != other.source) {
      return false;
    }
    return true;
  }
  bool operator!=(const ControlInput_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ControlInput_

// alias to use template instance with default allocator
using ControlInput =
  internal_interface::msg::ControlInput_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__CONTROL_INPUT__STRUCT_HPP_
