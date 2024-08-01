// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from internal_interface:msg/PurePursuitParams.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__PURE_PURSUIT_PARAMS__STRUCT_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__PURE_PURSUIT_PARAMS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__internal_interface__msg__PurePursuitParams __attribute__((deprecated))
#else
# define DEPRECATED__internal_interface__msg__PurePursuitParams __declspec(deprecated)
#endif

namespace internal_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct PurePursuitParams_
{
  using Type = PurePursuitParams_<ContainerAllocator>;

  explicit PurePursuitParams_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_speed = 0.0;
      this->alpha_mul = 0.0;
    }
  }

  explicit PurePursuitParams_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->max_speed = 0.0;
      this->alpha_mul = 0.0;
    }
  }

  // field types and members
  using _max_speed_type =
    double;
  _max_speed_type max_speed;
  using _alpha_mul_type =
    double;
  _alpha_mul_type alpha_mul;

  // setters for named parameter idiom
  Type & set__max_speed(
    const double & _arg)
  {
    this->max_speed = _arg;
    return *this;
  }
  Type & set__alpha_mul(
    const double & _arg)
  {
    this->alpha_mul = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    internal_interface::msg::PurePursuitParams_<ContainerAllocator> *;
  using ConstRawPtr =
    const internal_interface::msg::PurePursuitParams_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<internal_interface::msg::PurePursuitParams_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<internal_interface::msg::PurePursuitParams_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      internal_interface::msg::PurePursuitParams_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<internal_interface::msg::PurePursuitParams_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      internal_interface::msg::PurePursuitParams_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<internal_interface::msg::PurePursuitParams_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<internal_interface::msg::PurePursuitParams_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<internal_interface::msg::PurePursuitParams_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__internal_interface__msg__PurePursuitParams
    std::shared_ptr<internal_interface::msg::PurePursuitParams_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__internal_interface__msg__PurePursuitParams
    std::shared_ptr<internal_interface::msg::PurePursuitParams_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const PurePursuitParams_ & other) const
  {
    if (this->max_speed != other.max_speed) {
      return false;
    }
    if (this->alpha_mul != other.alpha_mul) {
      return false;
    }
    return true;
  }
  bool operator!=(const PurePursuitParams_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct PurePursuitParams_

// alias to use template instance with default allocator
using PurePursuitParams =
  internal_interface::msg::PurePursuitParams_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__PURE_PURSUIT_PARAMS__STRUCT_HPP_
