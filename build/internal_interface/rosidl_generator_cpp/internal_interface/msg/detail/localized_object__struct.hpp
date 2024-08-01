// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from internal_interface:msg/LocalizedObject.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__LOCALIZED_OBJECT__STRUCT_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__LOCALIZED_OBJECT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__internal_interface__msg__LocalizedObject __attribute__((deprecated))
#else
# define DEPRECATED__internal_interface__msg__LocalizedObject __declspec(deprecated)
#endif

namespace internal_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LocalizedObject_
{
  using Type = LocalizedObject_<ContainerAllocator>;

  explicit LocalizedObject_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->local_x = 0.0;
      this->local_y = 0.0;
      this->map_x = 0.0;
      this->map_y = 0.0;
      this->label = "";
    }
  }

  explicit LocalizedObject_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : label(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->local_x = 0.0;
      this->local_y = 0.0;
      this->map_x = 0.0;
      this->map_y = 0.0;
      this->label = "";
    }
  }

  // field types and members
  using _local_x_type =
    double;
  _local_x_type local_x;
  using _local_y_type =
    double;
  _local_y_type local_y;
  using _map_x_type =
    double;
  _map_x_type map_x;
  using _map_y_type =
    double;
  _map_y_type map_y;
  using _label_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _label_type label;

  // setters for named parameter idiom
  Type & set__local_x(
    const double & _arg)
  {
    this->local_x = _arg;
    return *this;
  }
  Type & set__local_y(
    const double & _arg)
  {
    this->local_y = _arg;
    return *this;
  }
  Type & set__map_x(
    const double & _arg)
  {
    this->map_x = _arg;
    return *this;
  }
  Type & set__map_y(
    const double & _arg)
  {
    this->map_y = _arg;
    return *this;
  }
  Type & set__label(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->label = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    internal_interface::msg::LocalizedObject_<ContainerAllocator> *;
  using ConstRawPtr =
    const internal_interface::msg::LocalizedObject_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<internal_interface::msg::LocalizedObject_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<internal_interface::msg::LocalizedObject_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      internal_interface::msg::LocalizedObject_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<internal_interface::msg::LocalizedObject_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      internal_interface::msg::LocalizedObject_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<internal_interface::msg::LocalizedObject_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<internal_interface::msg::LocalizedObject_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<internal_interface::msg::LocalizedObject_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__internal_interface__msg__LocalizedObject
    std::shared_ptr<internal_interface::msg::LocalizedObject_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__internal_interface__msg__LocalizedObject
    std::shared_ptr<internal_interface::msg::LocalizedObject_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LocalizedObject_ & other) const
  {
    if (this->local_x != other.local_x) {
      return false;
    }
    if (this->local_y != other.local_y) {
      return false;
    }
    if (this->map_x != other.map_x) {
      return false;
    }
    if (this->map_y != other.map_y) {
      return false;
    }
    if (this->label != other.label) {
      return false;
    }
    return true;
  }
  bool operator!=(const LocalizedObject_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LocalizedObject_

// alias to use template instance with default allocator
using LocalizedObject =
  internal_interface::msg::LocalizedObject_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__LOCALIZED_OBJECT__STRUCT_HPP_
