// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from internal_interface:msg/Object.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__OBJECT__STRUCT_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__OBJECT__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__internal_interface__msg__Object __attribute__((deprecated))
#else
# define DEPRECATED__internal_interface__msg__Object __declspec(deprecated)
#endif

namespace internal_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Object_
{
  using Type = Object_<ContainerAllocator>;

  explicit Object_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x1 = 0.0;
      this->y1 = 0.0;
      this->x2 = 0.0;
      this->y2 = 0.0;
      this->label = "";
    }
  }

  explicit Object_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : label(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x1 = 0.0;
      this->y1 = 0.0;
      this->x2 = 0.0;
      this->y2 = 0.0;
      this->label = "";
    }
  }

  // field types and members
  using _x1_type =
    double;
  _x1_type x1;
  using _y1_type =
    double;
  _y1_type y1;
  using _x2_type =
    double;
  _x2_type x2;
  using _y2_type =
    double;
  _y2_type y2;
  using _label_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _label_type label;

  // setters for named parameter idiom
  Type & set__x1(
    const double & _arg)
  {
    this->x1 = _arg;
    return *this;
  }
  Type & set__y1(
    const double & _arg)
  {
    this->y1 = _arg;
    return *this;
  }
  Type & set__x2(
    const double & _arg)
  {
    this->x2 = _arg;
    return *this;
  }
  Type & set__y2(
    const double & _arg)
  {
    this->y2 = _arg;
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
    internal_interface::msg::Object_<ContainerAllocator> *;
  using ConstRawPtr =
    const internal_interface::msg::Object_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<internal_interface::msg::Object_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<internal_interface::msg::Object_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      internal_interface::msg::Object_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<internal_interface::msg::Object_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      internal_interface::msg::Object_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<internal_interface::msg::Object_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<internal_interface::msg::Object_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<internal_interface::msg::Object_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__internal_interface__msg__Object
    std::shared_ptr<internal_interface::msg::Object_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__internal_interface__msg__Object
    std::shared_ptr<internal_interface::msg::Object_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Object_ & other) const
  {
    if (this->x1 != other.x1) {
      return false;
    }
    if (this->y1 != other.y1) {
      return false;
    }
    if (this->x2 != other.x2) {
      return false;
    }
    if (this->y2 != other.y2) {
      return false;
    }
    if (this->label != other.label) {
      return false;
    }
    return true;
  }
  bool operator!=(const Object_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Object_

// alias to use template instance with default allocator
using Object =
  internal_interface::msg::Object_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__OBJECT__STRUCT_HPP_
