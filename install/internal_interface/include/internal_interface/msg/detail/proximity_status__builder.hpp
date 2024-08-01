// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from internal_interface:msg/ProximityStatus.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__PROXIMITY_STATUS__BUILDER_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__PROXIMITY_STATUS__BUILDER_HPP_

#include "internal_interface/msg/detail/proximity_status__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace internal_interface
{

namespace msg
{

namespace builder
{

class Init_ProximityStatus_right_cm
{
public:
  explicit Init_ProximityStatus_right_cm(::internal_interface::msg::ProximityStatus & msg)
  : msg_(msg)
  {}
  ::internal_interface::msg::ProximityStatus right_cm(::internal_interface::msg::ProximityStatus::_right_cm_type arg)
  {
    msg_.right_cm = std::move(arg);
    return std::move(msg_);
  }

private:
  ::internal_interface::msg::ProximityStatus msg_;
};

class Init_ProximityStatus_left_cm
{
public:
  explicit Init_ProximityStatus_left_cm(::internal_interface::msg::ProximityStatus & msg)
  : msg_(msg)
  {}
  Init_ProximityStatus_right_cm left_cm(::internal_interface::msg::ProximityStatus::_left_cm_type arg)
  {
    msg_.left_cm = std::move(arg);
    return Init_ProximityStatus_right_cm(msg_);
  }

private:
  ::internal_interface::msg::ProximityStatus msg_;
};

class Init_ProximityStatus_front_cm
{
public:
  explicit Init_ProximityStatus_front_cm(::internal_interface::msg::ProximityStatus & msg)
  : msg_(msg)
  {}
  Init_ProximityStatus_left_cm front_cm(::internal_interface::msg::ProximityStatus::_front_cm_type arg)
  {
    msg_.front_cm = std::move(arg);
    return Init_ProximityStatus_left_cm(msg_);
  }

private:
  ::internal_interface::msg::ProximityStatus msg_;
};

class Init_ProximityStatus_right_very_close
{
public:
  explicit Init_ProximityStatus_right_very_close(::internal_interface::msg::ProximityStatus & msg)
  : msg_(msg)
  {}
  Init_ProximityStatus_front_cm right_very_close(::internal_interface::msg::ProximityStatus::_right_very_close_type arg)
  {
    msg_.right_very_close = std::move(arg);
    return Init_ProximityStatus_front_cm(msg_);
  }

private:
  ::internal_interface::msg::ProximityStatus msg_;
};

class Init_ProximityStatus_left_very_close
{
public:
  explicit Init_ProximityStatus_left_very_close(::internal_interface::msg::ProximityStatus & msg)
  : msg_(msg)
  {}
  Init_ProximityStatus_right_very_close left_very_close(::internal_interface::msg::ProximityStatus::_left_very_close_type arg)
  {
    msg_.left_very_close = std::move(arg);
    return Init_ProximityStatus_right_very_close(msg_);
  }

private:
  ::internal_interface::msg::ProximityStatus msg_;
};

class Init_ProximityStatus_front_very_close
{
public:
  explicit Init_ProximityStatus_front_very_close(::internal_interface::msg::ProximityStatus & msg)
  : msg_(msg)
  {}
  Init_ProximityStatus_left_very_close front_very_close(::internal_interface::msg::ProximityStatus::_front_very_close_type arg)
  {
    msg_.front_very_close = std::move(arg);
    return Init_ProximityStatus_left_very_close(msg_);
  }

private:
  ::internal_interface::msg::ProximityStatus msg_;
};

class Init_ProximityStatus_right_is_clear
{
public:
  explicit Init_ProximityStatus_right_is_clear(::internal_interface::msg::ProximityStatus & msg)
  : msg_(msg)
  {}
  Init_ProximityStatus_front_very_close right_is_clear(::internal_interface::msg::ProximityStatus::_right_is_clear_type arg)
  {
    msg_.right_is_clear = std::move(arg);
    return Init_ProximityStatus_front_very_close(msg_);
  }

private:
  ::internal_interface::msg::ProximityStatus msg_;
};

class Init_ProximityStatus_left_is_clear
{
public:
  explicit Init_ProximityStatus_left_is_clear(::internal_interface::msg::ProximityStatus & msg)
  : msg_(msg)
  {}
  Init_ProximityStatus_right_is_clear left_is_clear(::internal_interface::msg::ProximityStatus::_left_is_clear_type arg)
  {
    msg_.left_is_clear = std::move(arg);
    return Init_ProximityStatus_right_is_clear(msg_);
  }

private:
  ::internal_interface::msg::ProximityStatus msg_;
};

class Init_ProximityStatus_front_is_clear
{
public:
  Init_ProximityStatus_front_is_clear()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ProximityStatus_left_is_clear front_is_clear(::internal_interface::msg::ProximityStatus::_front_is_clear_type arg)
  {
    msg_.front_is_clear = std::move(arg);
    return Init_ProximityStatus_left_is_clear(msg_);
  }

private:
  ::internal_interface::msg::ProximityStatus msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::internal_interface::msg::ProximityStatus>()
{
  return internal_interface::msg::builder::Init_ProximityStatus_front_is_clear();
}

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__PROXIMITY_STATUS__BUILDER_HPP_
