// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from internal_interface:msg/RawBattery.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__RAW_BATTERY__STRUCT_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__RAW_BATTERY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__internal_interface__msg__RawBattery __attribute__((deprecated))
#else
# define DEPRECATED__internal_interface__msg__RawBattery __declspec(deprecated)
#endif

namespace internal_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RawBattery_
{
  using Type = RawBattery_<ContainerAllocator>;

  explicit RawBattery_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->voltage = 0.0f;
      this->instant_consumption = 0.0f;
    }
  }

  explicit RawBattery_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->voltage = 0.0f;
      this->instant_consumption = 0.0f;
    }
  }

  // field types and members
  using _voltage_type =
    float;
  _voltage_type voltage;
  using _instant_consumption_type =
    float;
  _instant_consumption_type instant_consumption;

  // setters for named parameter idiom
  Type & set__voltage(
    const float & _arg)
  {
    this->voltage = _arg;
    return *this;
  }
  Type & set__instant_consumption(
    const float & _arg)
  {
    this->instant_consumption = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    internal_interface::msg::RawBattery_<ContainerAllocator> *;
  using ConstRawPtr =
    const internal_interface::msg::RawBattery_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<internal_interface::msg::RawBattery_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<internal_interface::msg::RawBattery_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      internal_interface::msg::RawBattery_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<internal_interface::msg::RawBattery_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      internal_interface::msg::RawBattery_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<internal_interface::msg::RawBattery_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<internal_interface::msg::RawBattery_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<internal_interface::msg::RawBattery_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__internal_interface__msg__RawBattery
    std::shared_ptr<internal_interface::msg::RawBattery_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__internal_interface__msg__RawBattery
    std::shared_ptr<internal_interface::msg::RawBattery_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RawBattery_ & other) const
  {
    if (this->voltage != other.voltage) {
      return false;
    }
    if (this->instant_consumption != other.instant_consumption) {
      return false;
    }
    return true;
  }
  bool operator!=(const RawBattery_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RawBattery_

// alias to use template instance with default allocator
using RawBattery =
  internal_interface::msg::RawBattery_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__RAW_BATTERY__STRUCT_HPP_
