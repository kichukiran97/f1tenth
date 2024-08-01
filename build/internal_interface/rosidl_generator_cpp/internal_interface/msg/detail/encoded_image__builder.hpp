// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from internal_interface:msg/EncodedImage.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__ENCODED_IMAGE__BUILDER_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__ENCODED_IMAGE__BUILDER_HPP_

#include "internal_interface/msg/detail/encoded_image__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace internal_interface
{

namespace msg
{

namespace builder
{

class Init_EncodedImage_data
{
public:
  explicit Init_EncodedImage_data(::internal_interface::msg::EncodedImage & msg)
  : msg_(msg)
  {}
  ::internal_interface::msg::EncodedImage data(::internal_interface::msg::EncodedImage::_data_type arg)
  {
    msg_.data = std::move(arg);
    return std::move(msg_);
  }

private:
  ::internal_interface::msg::EncodedImage msg_;
};

class Init_EncodedImage_publish_ts
{
public:
  explicit Init_EncodedImage_publish_ts(::internal_interface::msg::EncodedImage & msg)
  : msg_(msg)
  {}
  Init_EncodedImage_data publish_ts(::internal_interface::msg::EncodedImage::_publish_ts_type arg)
  {
    msg_.publish_ts = std::move(arg);
    return Init_EncodedImage_data(msg_);
  }

private:
  ::internal_interface::msg::EncodedImage msg_;
};

class Init_EncodedImage_capture_ts
{
public:
  Init_EncodedImage_capture_ts()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_EncodedImage_publish_ts capture_ts(::internal_interface::msg::EncodedImage::_capture_ts_type arg)
  {
    msg_.capture_ts = std::move(arg);
    return Init_EncodedImage_publish_ts(msg_);
  }

private:
  ::internal_interface::msg::EncodedImage msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::internal_interface::msg::EncodedImage>()
{
  return internal_interface::msg::builder::Init_EncodedImage_capture_ts();
}

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__ENCODED_IMAGE__BUILDER_HPP_
