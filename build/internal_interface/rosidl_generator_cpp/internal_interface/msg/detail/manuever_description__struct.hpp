// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from internal_interface:msg/ManueverDescription.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__MANUEVER_DESCRIPTION__STRUCT_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__MANUEVER_DESCRIPTION__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'parts'
#include "internal_interface/msg/detail/manuever_part__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__internal_interface__msg__ManueverDescription __attribute__((deprecated))
#else
# define DEPRECATED__internal_interface__msg__ManueverDescription __declspec(deprecated)
#endif

namespace internal_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct ManueverDescription_
{
  using Type = ManueverDescription_<ContainerAllocator>;

  explicit ManueverDescription_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  explicit ManueverDescription_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->name = "";
    }
  }

  // field types and members
  using _parts_type =
    std::vector<internal_interface::msg::ManueverPart_<ContainerAllocator>, typename ContainerAllocator::template rebind<internal_interface::msg::ManueverPart_<ContainerAllocator>>::other>;
  _parts_type parts;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;

  // setters for named parameter idiom
  Type & set__parts(
    const std::vector<internal_interface::msg::ManueverPart_<ContainerAllocator>, typename ContainerAllocator::template rebind<internal_interface::msg::ManueverPart_<ContainerAllocator>>::other> & _arg)
  {
    this->parts = _arg;
    return *this;
  }
  Type & set__name(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->name = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    internal_interface::msg::ManueverDescription_<ContainerAllocator> *;
  using ConstRawPtr =
    const internal_interface::msg::ManueverDescription_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<internal_interface::msg::ManueverDescription_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<internal_interface::msg::ManueverDescription_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      internal_interface::msg::ManueverDescription_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<internal_interface::msg::ManueverDescription_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      internal_interface::msg::ManueverDescription_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<internal_interface::msg::ManueverDescription_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<internal_interface::msg::ManueverDescription_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<internal_interface::msg::ManueverDescription_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__internal_interface__msg__ManueverDescription
    std::shared_ptr<internal_interface::msg::ManueverDescription_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__internal_interface__msg__ManueverDescription
    std::shared_ptr<internal_interface::msg::ManueverDescription_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const ManueverDescription_ & other) const
  {
    if (this->parts != other.parts) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    return true;
  }
  bool operator!=(const ManueverDescription_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct ManueverDescription_

// alias to use template instance with default allocator
using ManueverDescription =
  internal_interface::msg::ManueverDescription_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__MANUEVER_DESCRIPTION__STRUCT_HPP_
