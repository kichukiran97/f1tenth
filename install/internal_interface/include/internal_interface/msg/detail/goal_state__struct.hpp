// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from internal_interface:msg/GoalState.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__GOAL_STATE__STRUCT_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__GOAL_STATE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__internal_interface__msg__GoalState __attribute__((deprecated))
#else
# define DEPRECATED__internal_interface__msg__GoalState __declspec(deprecated)
#endif

namespace internal_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct GoalState_
{
  using Type = GoalState_<ContainerAllocator>;

  explicit GoalState_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->goal_node_id = 0ull;
    }
  }

  explicit GoalState_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->goal_node_id = 0ull;
    }
  }

  // field types and members
  using _goal_node_id_type =
    uint64_t;
  _goal_node_id_type goal_node_id;

  // setters for named parameter idiom
  Type & set__goal_node_id(
    const uint64_t & _arg)
  {
    this->goal_node_id = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    internal_interface::msg::GoalState_<ContainerAllocator> *;
  using ConstRawPtr =
    const internal_interface::msg::GoalState_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<internal_interface::msg::GoalState_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<internal_interface::msg::GoalState_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      internal_interface::msg::GoalState_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<internal_interface::msg::GoalState_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      internal_interface::msg::GoalState_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<internal_interface::msg::GoalState_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<internal_interface::msg::GoalState_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<internal_interface::msg::GoalState_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__internal_interface__msg__GoalState
    std::shared_ptr<internal_interface::msg::GoalState_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__internal_interface__msg__GoalState
    std::shared_ptr<internal_interface::msg::GoalState_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const GoalState_ & other) const
  {
    if (this->goal_node_id != other.goal_node_id) {
      return false;
    }
    return true;
  }
  bool operator!=(const GoalState_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct GoalState_

// alias to use template instance with default allocator
using GoalState =
  internal_interface::msg::GoalState_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__GOAL_STATE__STRUCT_HPP_
