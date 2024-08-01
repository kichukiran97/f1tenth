// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from internal_interface:msg/WheelEncoders.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__WHEEL_ENCODERS__STRUCT_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__WHEEL_ENCODERS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__internal_interface__msg__WheelEncoders __attribute__((deprecated))
#else
# define DEPRECATED__internal_interface__msg__WheelEncoders __declspec(deprecated)
#endif

namespace internal_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct WheelEncoders_
{
  using Type = WheelEncoders_<ContainerAllocator>;

  explicit WheelEncoders_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_wheel_count = 0ll;
      this->right_wheel_count = 0ll;
    }
  }

  explicit WheelEncoders_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->left_wheel_count = 0ll;
      this->right_wheel_count = 0ll;
    }
  }

  // field types and members
  using _left_wheel_count_type =
    int64_t;
  _left_wheel_count_type left_wheel_count;
  using _right_wheel_count_type =
    int64_t;
  _right_wheel_count_type right_wheel_count;

  // setters for named parameter idiom
  Type & set__left_wheel_count(
    const int64_t & _arg)
  {
    this->left_wheel_count = _arg;
    return *this;
  }
  Type & set__right_wheel_count(
    const int64_t & _arg)
  {
    this->right_wheel_count = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    internal_interface::msg::WheelEncoders_<ContainerAllocator> *;
  using ConstRawPtr =
    const internal_interface::msg::WheelEncoders_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<internal_interface::msg::WheelEncoders_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<internal_interface::msg::WheelEncoders_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      internal_interface::msg::WheelEncoders_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<internal_interface::msg::WheelEncoders_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      internal_interface::msg::WheelEncoders_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<internal_interface::msg::WheelEncoders_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<internal_interface::msg::WheelEncoders_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<internal_interface::msg::WheelEncoders_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__internal_interface__msg__WheelEncoders
    std::shared_ptr<internal_interface::msg::WheelEncoders_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__internal_interface__msg__WheelEncoders
    std::shared_ptr<internal_interface::msg::WheelEncoders_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const WheelEncoders_ & other) const
  {
    if (this->left_wheel_count != other.left_wheel_count) {
      return false;
    }
    if (this->right_wheel_count != other.right_wheel_count) {
      return false;
    }
    return true;
  }
  bool operator!=(const WheelEncoders_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct WheelEncoders_

// alias to use template instance with default allocator
using WheelEncoders =
  internal_interface::msg::WheelEncoders_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__WHEEL_ENCODERS__STRUCT_HPP_
