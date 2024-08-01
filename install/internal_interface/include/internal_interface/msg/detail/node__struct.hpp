// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from internal_interface:msg/Node.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__NODE__STRUCT_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__NODE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__internal_interface__msg__Node __attribute__((deprecated))
#else
# define DEPRECATED__internal_interface__msg__Node __declspec(deprecated)
#endif

namespace internal_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Node_
{
  using Type = Node_<ContainerAllocator>;

  explicit Node_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_id = 0ull;
      this->map_x = 0.0;
      this->map_y = 0.0;
    }
  }

  explicit Node_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->node_id = 0ull;
      this->map_x = 0.0;
      this->map_y = 0.0;
    }
  }

  // field types and members
  using _node_id_type =
    uint64_t;
  _node_id_type node_id;
  using _map_x_type =
    double;
  _map_x_type map_x;
  using _map_y_type =
    double;
  _map_y_type map_y;

  // setters for named parameter idiom
  Type & set__node_id(
    const uint64_t & _arg)
  {
    this->node_id = _arg;
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

  // constant declarations

  // pointer types
  using RawPtr =
    internal_interface::msg::Node_<ContainerAllocator> *;
  using ConstRawPtr =
    const internal_interface::msg::Node_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<internal_interface::msg::Node_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<internal_interface::msg::Node_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      internal_interface::msg::Node_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<internal_interface::msg::Node_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      internal_interface::msg::Node_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<internal_interface::msg::Node_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<internal_interface::msg::Node_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<internal_interface::msg::Node_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__internal_interface__msg__Node
    std::shared_ptr<internal_interface::msg::Node_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__internal_interface__msg__Node
    std::shared_ptr<internal_interface::msg::Node_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Node_ & other) const
  {
    if (this->node_id != other.node_id) {
      return false;
    }
    if (this->map_x != other.map_x) {
      return false;
    }
    if (this->map_y != other.map_y) {
      return false;
    }
    return true;
  }
  bool operator!=(const Node_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Node_

// alias to use template instance with default allocator
using Node =
  internal_interface::msg::Node_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__NODE__STRUCT_HPP_
