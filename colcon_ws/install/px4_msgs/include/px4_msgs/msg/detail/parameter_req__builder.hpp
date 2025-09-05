// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from px4_msgs:msg/ParameterReq.idl
// generated code does not contain a copyright notice

#ifndef PX4_MSGS__MSG__DETAIL__PARAMETER_REQ__BUILDER_HPP_
#define PX4_MSGS__MSG__DETAIL__PARAMETER_REQ__BUILDER_HPP_

#include "px4_msgs/msg/detail/parameter_req__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace px4_msgs
{

namespace msg
{

namespace builder
{

class Init_ParameterReq_value
{
public:
  explicit Init_ParameterReq_value(::px4_msgs::msg::ParameterReq & msg)
  : msg_(msg)
  {}
  ::px4_msgs::msg::ParameterReq value(::px4_msgs::msg::ParameterReq::_value_type arg)
  {
    msg_.value = std::move(arg);
    return std::move(msg_);
  }

private:
  ::px4_msgs::msg::ParameterReq msg_;
};

class Init_ParameterReq_set
{
public:
  explicit Init_ParameterReq_set(::px4_msgs::msg::ParameterReq & msg)
  : msg_(msg)
  {}
  Init_ParameterReq_value set(::px4_msgs::msg::ParameterReq::_set_type arg)
  {
    msg_.set = std::move(arg);
    return Init_ParameterReq_value(msg_);
  }

private:
  ::px4_msgs::msg::ParameterReq msg_;
};

class Init_ParameterReq_param_name
{
public:
  explicit Init_ParameterReq_param_name(::px4_msgs::msg::ParameterReq & msg)
  : msg_(msg)
  {}
  Init_ParameterReq_set param_name(::px4_msgs::msg::ParameterReq::_param_name_type arg)
  {
    msg_.param_name = std::move(arg);
    return Init_ParameterReq_set(msg_);
  }

private:
  ::px4_msgs::msg::ParameterReq msg_;
};

class Init_ParameterReq_timestamp
{
public:
  Init_ParameterReq_timestamp()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ParameterReq_param_name timestamp(::px4_msgs::msg::ParameterReq::_timestamp_type arg)
  {
    msg_.timestamp = std::move(arg);
    return Init_ParameterReq_param_name(msg_);
  }

private:
  ::px4_msgs::msg::ParameterReq msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::px4_msgs::msg::ParameterReq>()
{
  return px4_msgs::msg::builder::Init_ParameterReq_timestamp();
}

}  // namespace px4_msgs

#endif  // PX4_MSGS__MSG__DETAIL__PARAMETER_REQ__BUILDER_HPP_
