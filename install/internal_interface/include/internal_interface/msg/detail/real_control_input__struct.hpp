// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from internal_interface:msg/RealControlInput.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__REAL_CONTROL_INPUT__STRUCT_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__REAL_CONTROL_INPUT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__internal_interface__msg__RealControlInput __attribute__((deprecated))
#else
# define DEPRECATED__internal_interface__msg__RealControlInput __declspec(deprecated)
#endif

namespace internal_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RealControlInput_
{
  using Type = RealControlInput_<ContainerAllocator>;

  explicit RealControlInput_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0f;
      this->steer = 0.0f;
    }
  }

  explicit RealControlInput_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->speed = 0.0f;
      this->steer = 0.0f;
    }
  }

  // field types and members
  using _speed_type =
    float;
  _speed_type speed;
  using _steer_type =
    float;
  _steer_type steer;

  // setters for named parameter idiom
  Type & set__speed(
    const float & _arg)
  {
    this->speed = _arg;
    return *this;
  }
  Type & set__steer(
    const float & _arg)
  {
    this->steer = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    internal_interface::msg::RealControlInput_<ContainerAllocator> *;
  using ConstRawPtr =
    const internal_interface::msg::RealControlInput_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<internal_interface::msg::RealControlInput_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<internal_interface::msg::RealControlInput_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      internal_interface::msg::RealControlInput_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<internal_interface::msg::RealControlInput_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      internal_interface::msg::RealControlInput_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<internal_interface::msg::RealControlInput_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<internal_interface::msg::RealControlInput_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<internal_interface::msg::RealControlInput_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__internal_interface__msg__RealControlInput
    std::shared_ptr<internal_interface::msg::RealControlInput_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__internal_interface__msg__RealControlInput
    std::shared_ptr<internal_interface::msg::RealControlInput_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RealControlInput_ & other) const
  {
    if (this->speed != other.speed) {
      return false;
    }
    if (this->steer != other.steer) {
      return false;
    }
    return true;
  }
  bool operator!=(const RealControlInput_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RealControlInput_

// alias to use template instance with default allocator
using RealControlInput =
  internal_interface::msg::RealControlInput_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__REAL_CONTROL_INPUT__STRUCT_HPP_
