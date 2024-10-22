// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from internal_interface:msg/RawDistanceSensor.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__RAW_DISTANCE_SENSOR__STRUCT_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__RAW_DISTANCE_SENSOR__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__internal_interface__msg__RawDistanceSensor __attribute__((deprecated))
#else
# define DEPRECATED__internal_interface__msg__RawDistanceSensor __declspec(deprecated)
#endif

namespace internal_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct RawDistanceSensor_
{
  using Type = RawDistanceSensor_<ContainerAllocator>;

  explicit RawDistanceSensor_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 4>::iterator, double>(this->distances.begin(), this->distances.end(), 0.0);
    }
  }

  explicit RawDistanceSensor_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : distances(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      std::fill<typename std::array<double, 4>::iterator, double>(this->distances.begin(), this->distances.end(), 0.0);
    }
  }

  // field types and members
  using _distances_type =
    std::array<double, 4>;
  _distances_type distances;

  // setters for named parameter idiom
  Type & set__distances(
    const std::array<double, 4> & _arg)
  {
    this->distances = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    internal_interface::msg::RawDistanceSensor_<ContainerAllocator> *;
  using ConstRawPtr =
    const internal_interface::msg::RawDistanceSensor_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<internal_interface::msg::RawDistanceSensor_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<internal_interface::msg::RawDistanceSensor_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      internal_interface::msg::RawDistanceSensor_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<internal_interface::msg::RawDistanceSensor_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      internal_interface::msg::RawDistanceSensor_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<internal_interface::msg::RawDistanceSensor_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<internal_interface::msg::RawDistanceSensor_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<internal_interface::msg::RawDistanceSensor_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__internal_interface__msg__RawDistanceSensor
    std::shared_ptr<internal_interface::msg::RawDistanceSensor_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__internal_interface__msg__RawDistanceSensor
    std::shared_ptr<internal_interface::msg::RawDistanceSensor_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const RawDistanceSensor_ & other) const
  {
    if (this->distances != other.distances) {
      return false;
    }
    return true;
  }
  bool operator!=(const RawDistanceSensor_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct RawDistanceSensor_

// alias to use template instance with default allocator
using RawDistanceSensor =
  internal_interface::msg::RawDistanceSensor_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__RAW_DISTANCE_SENSOR__STRUCT_HPP_
