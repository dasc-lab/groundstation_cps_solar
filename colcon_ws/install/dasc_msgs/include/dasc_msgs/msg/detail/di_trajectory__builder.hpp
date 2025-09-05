// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from dasc_msgs:msg/DITrajectory.idl
// generated code does not contain a copyright notice

#ifndef DASC_MSGS__MSG__DETAIL__DI_TRAJECTORY__BUILDER_HPP_
#define DASC_MSGS__MSG__DETAIL__DI_TRAJECTORY__BUILDER_HPP_

#include "dasc_msgs/msg/detail/di_trajectory__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace dasc_msgs
{

namespace msg
{

namespace builder
{

class Init_DITrajectory_accelerations
{
public:
  explicit Init_DITrajectory_accelerations(::dasc_msgs::msg::DITrajectory & msg)
  : msg_(msg)
  {}
  ::dasc_msgs::msg::DITrajectory accelerations(::dasc_msgs::msg::DITrajectory::_accelerations_type arg)
  {
    msg_.accelerations = std::move(arg);
    return std::move(msg_);
  }

private:
  ::dasc_msgs::msg::DITrajectory msg_;
};

class Init_DITrajectory_twists
{
public:
  explicit Init_DITrajectory_twists(::dasc_msgs::msg::DITrajectory & msg)
  : msg_(msg)
  {}
  Init_DITrajectory_accelerations twists(::dasc_msgs::msg::DITrajectory::_twists_type arg)
  {
    msg_.twists = std::move(arg);
    return Init_DITrajectory_accelerations(msg_);
  }

private:
  ::dasc_msgs::msg::DITrajectory msg_;
};

class Init_DITrajectory_poses
{
public:
  explicit Init_DITrajectory_poses(::dasc_msgs::msg::DITrajectory & msg)
  : msg_(msg)
  {}
  Init_DITrajectory_twists poses(::dasc_msgs::msg::DITrajectory::_poses_type arg)
  {
    msg_.poses = std::move(arg);
    return Init_DITrajectory_twists(msg_);
  }

private:
  ::dasc_msgs::msg::DITrajectory msg_;
};

class Init_DITrajectory_dt
{
public:
  explicit Init_DITrajectory_dt(::dasc_msgs::msg::DITrajectory & msg)
  : msg_(msg)
  {}
  Init_DITrajectory_poses dt(::dasc_msgs::msg::DITrajectory::_dt_type arg)
  {
    msg_.dt = std::move(arg);
    return Init_DITrajectory_poses(msg_);
  }

private:
  ::dasc_msgs::msg::DITrajectory msg_;
};

class Init_DITrajectory_header
{
public:
  Init_DITrajectory_header()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_DITrajectory_dt header(::dasc_msgs::msg::DITrajectory::_header_type arg)
  {
    msg_.header = std::move(arg);
    return Init_DITrajectory_dt(msg_);
  }

private:
  ::dasc_msgs::msg::DITrajectory msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::dasc_msgs::msg::DITrajectory>()
{
  return dasc_msgs::msg::builder::Init_DITrajectory_header();
}

}  // namespace dasc_msgs

#endif  // DASC_MSGS__MSG__DETAIL__DI_TRAJECTORY__BUILDER_HPP_
