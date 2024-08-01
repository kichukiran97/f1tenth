// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from internal_interface:msg/LookAheadPoint.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__LOOK_AHEAD_POINT__STRUCT_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__LOOK_AHEAD_POINT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__internal_interface__msg__LookAheadPoint __attribute__((deprecated))
#else
# define DEPRECATED__internal_interface__msg__LookAheadPoint __declspec(deprecated)
#endif

namespace internal_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LookAheadPoint_
{
  using Type = LookAheadPoint_<ContainerAllocator>;

  explicit LookAheadPoint_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->alpha = 0.0;
      this->look_ahead_distance = 0.0;
      this->confidence = 0.0;
      this->source = "";
    }
  }

  explicit LookAheadPoint_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : source(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->alpha = 0.0;
      this->look_ahead_distance = 0.0;
      this->confidence = 0.0;
      this->source = "";
    }
  }

  // field types and members
  using _alpha_type =
    double;
  _alpha_type alpha;
  using _look_ahead_distance_type =
    double;
  _look_ahead_distance_type look_ahead_distance;
  using _confidence_type =
    double;
  _confidence_type confidence;
  using _source_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _source_type source;

  // setters for named parameter idiom
  Type & set__alpha(
    const double & _arg)
  {
    this->alpha = _arg;
    return *this;
  }
  Type & set__look_ahead_distance(
    const double & _arg)
  {
    this->look_ahead_distance = _arg;
    return *this;
  }
  Type & set__confidence(
    const double & _arg)
  {
    this->confidence = _arg;
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
    internal_interface::msg::LookAheadPoint_<ContainerAllocator> *;
  using ConstRawPtr =
    const internal_interface::msg::LookAheadPoint_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<internal_interface::msg::LookAheadPoint_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<internal_interface::msg::LookAheadPoint_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      internal_interface::msg::LookAheadPoint_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<internal_interface::msg::LookAheadPoint_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      internal_interface::msg::LookAheadPoint_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<internal_interface::msg::LookAheadPoint_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<internal_interface::msg::LookAheadPoint_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<internal_interface::msg::LookAheadPoint_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__internal_interface__msg__LookAheadPoint
    std::shared_ptr<internal_interface::msg::LookAheadPoint_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__internal_interface__msg__LookAheadPoint
    std::shared_ptr<internal_interface::msg::LookAheadPoint_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LookAheadPoint_ & other) const
  {
    if (this->alpha != other.alpha) {
      return false;
    }
    if (this->look_ahead_distance != other.look_ahead_distance) {
      return false;
    }
    if (this->confidence != other.confidence) {
      return false;
    }
    if (this->source != other.source) {
      return false;
    }
    return true;
  }
  bool operator!=(const LookAheadPoint_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LookAheadPoint_

// alias to use template instance with default allocator
using LookAheadPoint =
  internal_interface::msg::LookAheadPoint_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__LOOK_AHEAD_POINT__STRUCT_HPP_
