// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from jetson_stats_msgs:srv/JetsonClocks.idl
// generated code does not contain a copyright notice

#ifndef JETSON_STATS_MSGS__SRV__JETSON_CLOCKS__STRUCT_HPP_
#define JETSON_STATS_MSGS__SRV__JETSON_CLOCKS__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__jetson_stats_msgs__srv__JetsonClocks_Request __attribute__((deprecated))
#else
# define DEPRECATED__jetson_stats_msgs__srv__JetsonClocks_Request __declspec(deprecated)
#endif

namespace jetson_stats_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct JetsonClocks_Request_
{
  using Type = JetsonClocks_Request_<ContainerAllocator>;

  explicit JetsonClocks_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  explicit JetsonClocks_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->status = false;
    }
  }

  // field types and members
  using _status_type =
    bool;
  _status_type status;

  // setters for named parameter idiom
  Type & set__status(
    const bool & _arg)
  {
    this->status = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    jetson_stats_msgs::srv::JetsonClocks_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const jetson_stats_msgs::srv::JetsonClocks_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<jetson_stats_msgs::srv::JetsonClocks_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<jetson_stats_msgs::srv::JetsonClocks_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      jetson_stats_msgs::srv::JetsonClocks_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<jetson_stats_msgs::srv::JetsonClocks_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      jetson_stats_msgs::srv::JetsonClocks_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<jetson_stats_msgs::srv::JetsonClocks_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<jetson_stats_msgs::srv::JetsonClocks_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<jetson_stats_msgs::srv::JetsonClocks_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__jetson_stats_msgs__srv__JetsonClocks_Request
    std::shared_ptr<jetson_stats_msgs::srv::JetsonClocks_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__jetson_stats_msgs__srv__JetsonClocks_Request
    std::shared_ptr<jetson_stats_msgs::srv::JetsonClocks_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JetsonClocks_Request_ & other) const
  {
    if (this->status != other.status) {
      return false;
    }
    return true;
  }
  bool operator!=(const JetsonClocks_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JetsonClocks_Request_

// alias to use template instance with default allocator
using JetsonClocks_Request =
  jetson_stats_msgs::srv::JetsonClocks_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace jetson_stats_msgs


#ifndef _WIN32
# define DEPRECATED__jetson_stats_msgs__srv__JetsonClocks_Response __attribute__((deprecated))
#else
# define DEPRECATED__jetson_stats_msgs__srv__JetsonClocks_Response __declspec(deprecated)
#endif

namespace jetson_stats_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct JetsonClocks_Response_
{
  using Type = JetsonClocks_Response_<ContainerAllocator>;

  explicit JetsonClocks_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->done = false;
    }
  }

  explicit JetsonClocks_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->done = false;
    }
  }

  // field types and members
  using _done_type =
    bool;
  _done_type done;

  // setters for named parameter idiom
  Type & set__done(
    const bool & _arg)
  {
    this->done = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    jetson_stats_msgs::srv::JetsonClocks_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const jetson_stats_msgs::srv::JetsonClocks_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<jetson_stats_msgs::srv::JetsonClocks_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<jetson_stats_msgs::srv::JetsonClocks_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      jetson_stats_msgs::srv::JetsonClocks_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<jetson_stats_msgs::srv::JetsonClocks_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      jetson_stats_msgs::srv::JetsonClocks_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<jetson_stats_msgs::srv::JetsonClocks_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<jetson_stats_msgs::srv::JetsonClocks_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<jetson_stats_msgs::srv::JetsonClocks_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__jetson_stats_msgs__srv__JetsonClocks_Response
    std::shared_ptr<jetson_stats_msgs::srv::JetsonClocks_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__jetson_stats_msgs__srv__JetsonClocks_Response
    std::shared_ptr<jetson_stats_msgs::srv::JetsonClocks_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const JetsonClocks_Response_ & other) const
  {
    if (this->done != other.done) {
      return false;
    }
    return true;
  }
  bool operator!=(const JetsonClocks_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct JetsonClocks_Response_

// alias to use template instance with default allocator
using JetsonClocks_Response =
  jetson_stats_msgs::srv::JetsonClocks_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace jetson_stats_msgs

namespace jetson_stats_msgs
{

namespace srv
{

struct JetsonClocks
{
  using Request = jetson_stats_msgs::srv::JetsonClocks_Request;
  using Response = jetson_stats_msgs::srv::JetsonClocks_Response;
};

}  // namespace srv

}  // namespace jetson_stats_msgs

#endif  // JETSON_STATS_MSGS__SRV__JETSON_CLOCKS__STRUCT_HPP_
