// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from internal_interface:msg/ProximityStatus.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__PROXIMITY_STATUS__STRUCT_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__PROXIMITY_STATUS__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__internal_interface__msg__ProximityStatus __attribute__((deprecated))
#else
# define DEPRECATED__internal_interface__msg__ProximityStatus __declspec(deprecated)
#endif

namespace internal_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ProximityStatus_
{
  using Type = ProximityStatus_<ContainerAllocator>;

  explicit ProximityStatus_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->front_is_clear = false;
      this->left_is_clear = false;
      this->right_is_clear = false;
      this->front_very_close = false;
      this->left_very_close = false;
      this->right_very_close = false;
      this->front_cm = 0.0;
      this->left_cm = 0.0;
      this->right_cm = 0.0;
    }
  }

  explicit ProximityStatus_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->front_is_clear = false;
      this->left_is_clear = false;
      this->right_is_clear = false;
      this->front_very_close = false;
      this->left_very_close = false;
      this->right_very_close = false;
      this->front_cm = 0.0;
      this->left_cm = 0.0;
      this->right_cm = 0.0;
    }
  }

  // field types and members
  using _front_is_clear_type =
    bool;
  _front_is_clear_type front_is_clear;
  using _left_is_clear_type =
    bool;
  _left_is_clear_type left_is_clear;
  using _right_is_clear_type =
    bool;
  _right_is_clear_type right_is_clear;
  using _front_very_close_type =
    bool;
  _front_very_close_type front_very_close;
  using _left_very_close_type =
    bool;
  _left_very_close_type left_very_close;
  using _right_very_close_type =
    bool;
  _right_very_close_type right_very_close;
  using _front_cm_type =
    double;
  _front_cm_type front_cm;
  using _left_cm_type =
    double;
  _left_cm_type left_cm;
  using _right_cm_type =
    double;
  _right_cm_type right_cm;

  // setters for named parameter idiom
  Type & set__front_is_clear(
    const bool & _arg)
  {
    this->front_is_clear = _arg;
    return *this;
  }
  Type & set__left_is_clear(
    const bool & _arg)
  {
    this->left_is_clear = _arg;
    return *this;
  }
  Type & set__right_is_clear(
    const bool & _arg)
  {
    this->right_is_clear = _arg;
    return *this;
  }
  Type & set__front_very_close(
    const bool & _arg)
  {
    this->front_very_close = _arg;
    return *this;
  }
  Type & set__left_very_close(
    const bool & _arg)
  {
    this->left_very_close = _arg;
    return *this;
  }
  Type & set__right_very_close(
    const bool & _arg)
  {
    this->right_very_close = _arg;
    return *this;
  }
  Type & set__front_cm(
    const double & _arg)
  {
    this->front_cm = _arg;
    return *this;
  }
  Type & set__left_cm(
    const double & _arg)
  {
    this->left_cm = _arg;
    return *this;
  }
  Type & set__right_cm(
    const double & _arg)
  {
    this->right_cm = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    internal_interface::msg::ProximityStatus_<ContainerAllocator> *;
  using ConstRawPtr =
    const internal_interface::msg::ProximityStatus_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<internal_interface::msg::ProximityStatus_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<internal_interface::msg::ProximityStatus_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      internal_interface::msg::ProximityStatus_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<internal_interface::msg::ProximityStatus_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      internal_interface::msg::ProximityStatus_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<internal_interface::msg::ProximityStatus_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<internal_interface::msg::ProximityStatus_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<internal_interface::msg::ProximityStatus_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__internal_interface__msg__ProximityStatus
    std::shared_ptr<internal_interface::msg::ProximityStatus_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__internal_interface__msg__ProximityStatus
    std::shared_ptr<internal_interface::msg::ProximityStatus_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ProximityStatus_ & other) const
  {
    if (this->front_is_clear != other.front_is_clear) {
      return false;
    }
    if (this->left_is_clear != other.left_is_clear) {
      return false;
    }
    if (this->right_is_clear != other.right_is_clear) {
      return false;
    }
    if (this->front_very_close != other.front_very_close) {
      return false;
    }
    if (this->left_very_close != other.left_very_close) {
      return false;
    }
    if (this->right_very_close != other.right_very_close) {
      return false;
    }
    if (this->front_cm != other.front_cm) {
      return false;
    }
    if (this->left_cm != other.left_cm) {
      return false;
    }
    if (this->right_cm != other.right_cm) {
      return false;
    }
    return true;
  }
  bool operator!=(const ProximityStatus_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ProximityStatus_

// alias to use template instance with default allocator
using ProximityStatus =
  internal_interface::msg::ProximityStatus_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__PROXIMITY_STATUS__STRUCT_HPP_
