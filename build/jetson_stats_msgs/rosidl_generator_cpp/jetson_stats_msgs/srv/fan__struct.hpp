// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from jetson_stats_msgs:srv/Fan.idl
// generated code does not contain a copyright notice

#ifndef JETSON_STATS_MSGS__SRV__FAN__STRUCT_HPP_
#define JETSON_STATS_MSGS__SRV__FAN__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__jetson_stats_msgs__srv__Fan_Request __attribute__((deprecated))
#else
# define DEPRECATED__jetson_stats_msgs__srv__Fan_Request __declspec(deprecated)
#endif

namespace jetson_stats_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Fan_Request_
{
  using Type = Fan_Request_<ContainerAllocator>;

  explicit Fan_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = "";
      this->speed = 0ll;
    }
  }

  explicit Fan_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : mode(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->mode = "";
      this->speed = 0ll;
    }
  }

  // field types and members
  using _mode_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _mode_type mode;
  using _speed_type =
    int64_t;
  _speed_type speed;

  // setters for named parameter idiom
  Type & set__mode(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->mode = _arg;
    return *this;
  }
  Type & set__speed(
    const int64_t & _arg)
  {
    this->speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    jetson_stats_msgs::srv::Fan_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const jetson_stats_msgs::srv::Fan_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<jetson_stats_msgs::srv::Fan_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<jetson_stats_msgs::srv::Fan_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      jetson_stats_msgs::srv::Fan_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<jetson_stats_msgs::srv::Fan_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      jetson_stats_msgs::srv::Fan_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<jetson_stats_msgs::srv::Fan_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<jetson_stats_msgs::srv::Fan_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<jetson_stats_msgs::srv::Fan_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__jetson_stats_msgs__srv__Fan_Request
    std::shared_ptr<jetson_stats_msgs::srv::Fan_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__jetson_stats_msgs__srv__Fan_Request
    std::shared_ptr<jetson_stats_msgs::srv::Fan_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Fan_Request_ & other) const
  {
    if (this->mode != other.mode) {
      return false;
    }
    if (this->speed != other.speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const Fan_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Fan_Request_

// alias to use template instance with default allocator
using Fan_Request =
  jetson_stats_msgs::srv::Fan_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace jetson_stats_msgs


#ifndef _WIN32
# define DEPRECATED__jetson_stats_msgs__srv__Fan_Response __attribute__((deprecated))
#else
# define DEPRECATED__jetson_stats_msgs__srv__Fan_Response __declspec(deprecated)
#endif

namespace jetson_stats_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct Fan_Response_
{
  using Type = Fan_Response_<ContainerAllocator>;

  explicit Fan_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->set_fan_mode = "";
      this->set_fan_speed = 0ll;
    }
  }

  explicit Fan_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : set_fan_mode(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->set_fan_mode = "";
      this->set_fan_speed = 0ll;
    }
  }

  // field types and members
  using _set_fan_mode_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _set_fan_mode_type set_fan_mode;
  using _set_fan_speed_type =
    int64_t;
  _set_fan_speed_type set_fan_speed;

  // setters for named parameter idiom
  Type & set__set_fan_mode(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->set_fan_mode = _arg;
    return *this;
  }
  Type & set__set_fan_speed(
    const int64_t & _arg)
  {
    this->set_fan_speed = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    jetson_stats_msgs::srv::Fan_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const jetson_stats_msgs::srv::Fan_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<jetson_stats_msgs::srv::Fan_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<jetson_stats_msgs::srv::Fan_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      jetson_stats_msgs::srv::Fan_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<jetson_stats_msgs::srv::Fan_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      jetson_stats_msgs::srv::Fan_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<jetson_stats_msgs::srv::Fan_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<jetson_stats_msgs::srv::Fan_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<jetson_stats_msgs::srv::Fan_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__jetson_stats_msgs__srv__Fan_Response
    std::shared_ptr<jetson_stats_msgs::srv::Fan_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__jetson_stats_msgs__srv__Fan_Response
    std::shared_ptr<jetson_stats_msgs::srv::Fan_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Fan_Response_ & other) const
  {
    if (this->set_fan_mode != other.set_fan_mode) {
      return false;
    }
    if (this->set_fan_speed != other.set_fan_speed) {
      return false;
    }
    return true;
  }
  bool operator!=(const Fan_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Fan_Response_

// alias to use template instance with default allocator
using Fan_Response =
  jetson_stats_msgs::srv::Fan_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace jetson_stats_msgs

namespace jetson_stats_msgs
{

namespace srv
{

struct Fan
{
  using Request = jetson_stats_msgs::srv::Fan_Request;
  using Response = jetson_stats_msgs::srv::Fan_Response;
};

}  // namespace srv

}  // namespace jetson_stats_msgs

#endif  // JETSON_STATS_MSGS__SRV__FAN__STRUCT_HPP_
