// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from internal_interface:msg/Semaphore.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__SEMAPHORE__STRUCT_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__SEMAPHORE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__internal_interface__msg__Semaphore __attribute__((deprecated))
#else
# define DEPRECATED__internal_interface__msg__Semaphore __declspec(deprecated)
#endif

namespace internal_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Semaphore_
{
  using Type = Semaphore_<ContainerAllocator>;

  explicit Semaphore_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->id = 0ull;
      this->device = "";
      this->state = "";
      this->name = "";
    }
  }

  explicit Semaphore_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : device(_alloc),
    state(_alloc),
    name(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->x = 0.0;
      this->y = 0.0;
      this->id = 0ull;
      this->device = "";
      this->state = "";
      this->name = "";
    }
  }

  // field types and members
  using _x_type =
    double;
  _x_type x;
  using _y_type =
    double;
  _y_type y;
  using _id_type =
    uint64_t;
  _id_type id;
  using _device_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _device_type device;
  using _state_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _state_type state;
  using _name_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _name_type name;

  // setters for named parameter idiom
  Type & set__x(
    const double & _arg)
  {
    this->x = _arg;
    return *this;
  }
  Type & set__y(
    const double & _arg)
  {
    this->y = _arg;
    return *this;
  }
  Type & set__id(
    const uint64_t & _arg)
  {
    this->id = _arg;
    return *this;
  }
  Type & set__device(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->device = _arg;
    return *this;
  }
  Type & set__state(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->state = _arg;
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
    internal_interface::msg::Semaphore_<ContainerAllocator> *;
  using ConstRawPtr =
    const internal_interface::msg::Semaphore_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<internal_interface::msg::Semaphore_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<internal_interface::msg::Semaphore_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      internal_interface::msg::Semaphore_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<internal_interface::msg::Semaphore_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      internal_interface::msg::Semaphore_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<internal_interface::msg::Semaphore_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<internal_interface::msg::Semaphore_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<internal_interface::msg::Semaphore_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__internal_interface__msg__Semaphore
    std::shared_ptr<internal_interface::msg::Semaphore_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__internal_interface__msg__Semaphore
    std::shared_ptr<internal_interface::msg::Semaphore_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Semaphore_ & other) const
  {
    if (this->x != other.x) {
      return false;
    }
    if (this->y != other.y) {
      return false;
    }
    if (this->id != other.id) {
      return false;
    }
    if (this->device != other.device) {
      return false;
    }
    if (this->state != other.state) {
      return false;
    }
    if (this->name != other.name) {
      return false;
    }
    return true;
  }
  bool operator!=(const Semaphore_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Semaphore_

// alias to use template instance with default allocator
using Semaphore =
  internal_interface::msg::Semaphore_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__SEMAPHORE__STRUCT_HPP_
