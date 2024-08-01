// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from internal_interface:msg/Path.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__PATH__BUILDER_HPP_
#define INTERNAL_INTERFACE__MSG__DETAIL__PATH__BUILDER_HPP_

#include "internal_interface/msg/detail/path__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace internal_interface
{

namespace msg
{

namespace builder
{

class Init_Path_nodes
{
public:
  Init_Path_nodes()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::internal_interface::msg::Path nodes(::internal_interface::msg::Path::_nodes_type arg)
  {
    msg_.nodes = std::move(arg);
    return std::move(msg_);
  }

private:
  ::internal_interface::msg::Path msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::internal_interface::msg::Path>()
{
  return internal_interface::msg::builder::Init_Path_nodes();
}

}  // namespace internal_interface

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__PATH__BUILDER_HPP_
