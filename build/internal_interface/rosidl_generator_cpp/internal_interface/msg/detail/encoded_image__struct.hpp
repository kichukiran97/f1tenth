// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from internal_interface:msg/EncodedImage.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__ENCODED_IMAGE__STRUCT_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__ENCODED_IMAGE__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__internal_interface__msg__EncodedImage __attribute__((deprecated))
#else
# define DEPRECATED__internal_interface__msg__EncodedImage __declspec(deprecated)
#endif

namespace internal_interface
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct EncodedImage_
{
  using Type = EncodedImage_<ContainerAllocator>;

  explicit EncodedImage_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->capture_ts = 0.0;
      this->publish_ts = 0.0;
    }
  }

  explicit EncodedImage_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->capture_ts = 0.0;
      this->publish_ts = 0.0;
    }
  }

  // field types and members
  using _capture_ts_type =
    double;
  _capture_ts_type capture_ts;
  using _publish_ts_type =
    double;
  _publish_ts_type publish_ts;
  using _data_type =
    std::vector<unsigned char, typename ContainerAllocator::template rebind<unsigned char>::other>;
  _data_type data;

  // setters for named parameter idiom
  Type & set__capture_ts(
    const double & _arg)
  {
    this->capture_ts = _arg;
    return *this;
  }
  Type & set__publish_ts(
    const double & _arg)
  {
    this->publish_ts = _arg;
    return *this;
  }
  Type & set__data(
    const std::vector<unsigned char, typename ContainerAllocator::template rebind<unsigned char>::other> & _arg)
  {
    this->data = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    internal_interface::msg::EncodedImage_<ContainerAllocator> *;
  using ConstRawPtr =
    const internal_interface::msg::EncodedImage_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<internal_interface::msg::EncodedImage_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<internal_interface::msg::EncodedImage_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      internal_interface::msg::EncodedImage_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<internal_interface::msg::EncodedImage_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      internal_interface::msg::EncodedImage_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<internal_interface::msg::EncodedImage_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<internal_interface::msg::EncodedImage_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<internal_interface::msg::EncodedImage_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__internal_interface__msg__EncodedImage
    std::shared_ptr<internal_interface::msg::EncodedImage_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__internal_interface__msg__EncodedImage
    std::shared_ptr<internal_interface::msg::EncodedImage_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const EncodedImage_ & other) const
  {
    if (this->capture_ts != other.capture_ts) {
      return false;
    }
    if (this->publish_ts != other.publish_ts) {
      return false;
    }
    if (this->data != other.data) {
      return false;
    }
    return true;
  }
  bool operator!=(const EncodedImage_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct EncodedImage_

// alias to use template instance with default allocator
using EncodedImage =
  internal_interface::msg::EncodedImage_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__ENCODED_IMAGE__STRUCT_HPP_
