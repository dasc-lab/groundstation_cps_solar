// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from dasc_msgs:msg/DITrajectory.idl
// generated code does not contain a copyright notice

#ifndef DASC_MSGS__MSG__DETAIL__DI_TRAJECTORY__STRUCT_HPP_
#define DASC_MSGS__MSG__DETAIL__DI_TRAJECTORY__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__struct.hpp"
// Member 'poses'
#include "geometry_msgs/msg/detail/pose__struct.hpp"
// Member 'twists'
#include "geometry_msgs/msg/detail/twist__struct.hpp"
// Member 'accelerations'
#include "geometry_msgs/msg/detail/accel__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__dasc_msgs__msg__DITrajectory __attribute__((deprecated))
#else
# define DEPRECATED__dasc_msgs__msg__DITrajectory __declspec(deprecated)
#endif

namespace dasc_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct DITrajectory_
{
  using Type = DITrajectory_<ContainerAllocator>;

  explicit DITrajectory_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dt = 0.0;
    }
  }

  explicit DITrajectory_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : header(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->dt = 0.0;
    }
  }

  // field types and members
  using _header_type =
    std_msgs::msg::Header_<ContainerAllocator>;
  _header_type header;
  using _dt_type =
    double;
  _dt_type dt;
  using _poses_type =
    std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>>;
  _poses_type poses;
  using _twists_type =
    std::vector<geometry_msgs::msg::Twist_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Twist_<ContainerAllocator>>>;
  _twists_type twists;
  using _accelerations_type =
    std::vector<geometry_msgs::msg::Accel_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Accel_<ContainerAllocator>>>;
  _accelerations_type accelerations;

  // setters for named parameter idiom
  Type & set__header(
    const std_msgs::msg::Header_<ContainerAllocator> & _arg)
  {
    this->header = _arg;
    return *this;
  }
  Type & set__dt(
    const double & _arg)
  {
    this->dt = _arg;
    return *this;
  }
  Type & set__poses(
    const std::vector<geometry_msgs::msg::Pose_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Pose_<ContainerAllocator>>> & _arg)
  {
    this->poses = _arg;
    return *this;
  }
  Type & set__twists(
    const std::vector<geometry_msgs::msg::Twist_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Twist_<ContainerAllocator>>> & _arg)
  {
    this->twists = _arg;
    return *this;
  }
  Type & set__accelerations(
    const std::vector<geometry_msgs::msg::Accel_<ContainerAllocator>, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<geometry_msgs::msg::Accel_<ContainerAllocator>>> & _arg)
  {
    this->accelerations = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    dasc_msgs::msg::DITrajectory_<ContainerAllocator> *;
  using ConstRawPtr =
    const dasc_msgs::msg::DITrajectory_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<dasc_msgs::msg::DITrajectory_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<dasc_msgs::msg::DITrajectory_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      dasc_msgs::msg::DITrajectory_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<dasc_msgs::msg::DITrajectory_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      dasc_msgs::msg::DITrajectory_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<dasc_msgs::msg::DITrajectory_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<dasc_msgs::msg::DITrajectory_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<dasc_msgs::msg::DITrajectory_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__dasc_msgs__msg__DITrajectory
    std::shared_ptr<dasc_msgs::msg::DITrajectory_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__dasc_msgs__msg__DITrajectory
    std::shared_ptr<dasc_msgs::msg::DITrajectory_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const DITrajectory_ & other) const
  {
    if (this->header != other.header) {
      return false;
    }
    if (this->dt != other.dt) {
      return false;
    }
    if (this->poses != other.poses) {
      return false;
    }
    if (this->twists != other.twists) {
      return false;
    }
    if (this->accelerations != other.accelerations) {
      return false;
    }
    return true;
  }
  bool operator!=(const DITrajectory_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct DITrajectory_

// alias to use template instance with default allocator
using DITrajectory =
  dasc_msgs::msg::DITrajectory_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace dasc_msgs

#endif  // DASC_MSGS__MSG__DETAIL__DI_TRAJECTORY__STRUCT_HPP_
