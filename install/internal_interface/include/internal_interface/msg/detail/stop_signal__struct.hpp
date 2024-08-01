// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from internal_interface:msg/StopSignal.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__STOP_SIGNAL__STRUCT_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__STOP_SIGNAL__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__internal_interface__msg__StopSignal __attribute__((deprecated))
#else
# define DEPRECATED__internal_interface__msg__StopSignal __declspec(deprecated)
#endif

namespace internal_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct StopSignal_
{
  using Type = StopSignal_<ContainerAllocator>;

  explicit StopSignal_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->should_stop = false;
      this->delay = 0.0;
    }
  }

  explicit StopSignal_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->should_stop = false;
      this->delay = 0.0;
    }
  }

  // field types and members
  using _should_stop_type =
    bool;
  _should_stop_type should_stop;
  using _delay_type =
    double;
  _delay_type delay;

  // setters for named parameter idiom
  Type & set__should_stop(
    const bool & _arg)
  {
    this->should_stop = _arg;
    return *this;
  }
  Type & set__delay(
    const double & _arg)
  {
    this->delay = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    internal_interface::msg::StopSignal_<ContainerAllocator> *;
  using ConstRawPtr =
    const internal_interface::msg::StopSignal_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<internal_interface::msg::StopSignal_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<internal_interface::msg::StopSignal_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      internal_interface::msg::StopSignal_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<internal_interface::msg::StopSignal_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      internal_interface::msg::StopSignal_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<internal_interface::msg::StopSignal_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<internal_interface::msg::StopSignal_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<internal_interface::msg::StopSignal_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__internal_interface__msg__StopSignal
    std::shared_ptr<internal_interface::msg::StopSignal_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__internal_interface__msg__StopSignal
    std::shared_ptr<internal_interface::msg::StopSignal_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const StopSignal_ & other) const
  {
    if (this->should_stop != other.should_stop) {
      return false;
    }
    if (this->delay != other.delay) {
      return false;
    }
    return true;
  }
  bool operator!=(const StopSignal_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct StopSignal_

// alias to use template instance with default allocator
using StopSignal =
  internal_interface::msg::StopSignal_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__STOP_SIGNAL__STRUCT_HPP_
