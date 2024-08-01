// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from internal_interface:msg/Semaphore.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__SEMAPHORE__BUILDER_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__SEMAPHORE__BUILDER_HPP_

#include "internal_interface/msg/detail/semaphore__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace internal_interface
{

namespace msg
{

namespace builder
{

class Init_Semaphore_name
{
public:
  explicit Init_Semaphore_name(::internal_interface::msg::Semaphore & msg)
  : msg_(msg)
  {}
  ::internal_interface::msg::Semaphore name(::internal_interface::msg::Semaphore::_name_type arg)
  {
    msg_.name = std::move(arg);
    return std::move(msg_);
  }

private:
  ::internal_interface::msg::Semaphore msg_;
};

class Init_Semaphore_state
{
public:
  explicit Init_Semaphore_state(::internal_interface::msg::Semaphore & msg)
  : msg_(msg)
  {}
  Init_Semaphore_name state(::internal_interface::msg::Semaphore::_state_type arg)
  {
    msg_.state = std::move(arg);
    return Init_Semaphore_name(msg_);
  }

private:
  ::internal_interface::msg::Semaphore msg_;
};

class Init_Semaphore_device
{
public:
  explicit Init_Semaphore_device(::internal_interface::msg::Semaphore & msg)
  : msg_(msg)
  {}
  Init_Semaphore_state device(::internal_interface::msg::Semaphore::_device_type arg)
  {
    msg_.device = std::move(arg);
    return Init_Semaphore_state(msg_);
  }

private:
  ::internal_interface::msg::Semaphore msg_;
};

class Init_Semaphore_id
{
public:
  explicit Init_Semaphore_id(::internal_interface::msg::Semaphore & msg)
  : msg_(msg)
  {}
  Init_Semaphore_device id(::internal_interface::msg::Semaphore::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Semaphore_device(msg_);
  }

private:
  ::internal_interface::msg::Semaphore msg_;
};

class Init_Semaphore_y
{
public:
  explicit Init_Semaphore_y(::internal_interface::msg::Semaphore & msg)
  : msg_(msg)
  {}
  Init_Semaphore_id y(::internal_interface::msg::Semaphore::_y_type arg)
  {
    msg_.y = std::move(arg);
    return Init_Semaphore_id(msg_);
  }

private:
  ::internal_interface::msg::Semaphore msg_;
};

class Init_Semaphore_x
{
public:
  Init_Semaphore_x()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Semaphore_y x(::internal_interface::msg::Semaphore::_x_type arg)
  {
    msg_.x = std::move(arg);
    return Init_Semaphore_y(msg_);
  }

private:
  ::internal_interface::msg::Semaphore msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::internal_interface::msg::Semaphore>()
{
  return internal_interface::msg::builder::Init_Semaphore_x();
}

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__SEMAPHORE__BUILDER_HPP_
