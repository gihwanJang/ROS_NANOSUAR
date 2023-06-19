// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from jetson_stats_msgs:srv/NVPModel.idl
// generated code does not contain a copyright notice

#ifndef JETSON_STATS_MSGS__SRV__NVP_MODEL__STRUCT_HPP_
#define JETSON_STATS_MSGS__SRV__NVP_MODEL__STRUCT_HPP_

#include <rosidl_generator_cpp/bounded_vector.hpp>
#include <rosidl_generator_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


#ifndef _WIN32
# define DEPRECATED__jetson_stats_msgs__srv__NVPModel_Request __attribute__((deprecated))
#else
# define DEPRECATED__jetson_stats_msgs__srv__NVPModel_Request __declspec(deprecated)
#endif

namespace jetson_stats_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct NVPModel_Request_
{
  using Type = NVPModel_Request_<ContainerAllocator>;

  explicit NVPModel_Request_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->nvpmodel = 0ll;
    }
  }

  explicit NVPModel_Request_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->nvpmodel = 0ll;
    }
  }

  // field types and members
  using _nvpmodel_type =
    int64_t;
  _nvpmodel_type nvpmodel;

  // setters for named parameter idiom
  Type & set__nvpmodel(
    const int64_t & _arg)
  {
    this->nvpmodel = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    jetson_stats_msgs::srv::NVPModel_Request_<ContainerAllocator> *;
  using ConstRawPtr =
    const jetson_stats_msgs::srv::NVPModel_Request_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<jetson_stats_msgs::srv::NVPModel_Request_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<jetson_stats_msgs::srv::NVPModel_Request_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      jetson_stats_msgs::srv::NVPModel_Request_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<jetson_stats_msgs::srv::NVPModel_Request_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      jetson_stats_msgs::srv::NVPModel_Request_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<jetson_stats_msgs::srv::NVPModel_Request_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<jetson_stats_msgs::srv::NVPModel_Request_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<jetson_stats_msgs::srv::NVPModel_Request_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__jetson_stats_msgs__srv__NVPModel_Request
    std::shared_ptr<jetson_stats_msgs::srv::NVPModel_Request_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__jetson_stats_msgs__srv__NVPModel_Request
    std::shared_ptr<jetson_stats_msgs::srv::NVPModel_Request_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NVPModel_Request_ & other) const
  {
    if (this->nvpmodel != other.nvpmodel) {
      return false;
    }
    return true;
  }
  bool operator!=(const NVPModel_Request_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NVPModel_Request_

// alias to use template instance with default allocator
using NVPModel_Request =
  jetson_stats_msgs::srv::NVPModel_Request_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace jetson_stats_msgs


#ifndef _WIN32
# define DEPRECATED__jetson_stats_msgs__srv__NVPModel_Response __attribute__((deprecated))
#else
# define DEPRECATED__jetson_stats_msgs__srv__NVPModel_Response __declspec(deprecated)
#endif

namespace jetson_stats_msgs
{

namespace srv
{

// message struct
template<class ContainerAllocator>
struct NVPModel_Response_
{
  using Type = NVPModel_Response_<ContainerAllocator>;

  explicit NVPModel_Response_(rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->power_mode = "";
    }
  }

  explicit NVPModel_Response_(const ContainerAllocator & _alloc, rosidl_generator_cpp::MessageInitialization _init = rosidl_generator_cpp::MessageInitialization::ALL)
  : power_mode(_alloc)
  {
    if (rosidl_generator_cpp::MessageInitialization::ALL == _init ||
      rosidl_generator_cpp::MessageInitialization::ZERO == _init)
    {
      this->power_mode = "";
    }
  }

  // field types and members
  using _power_mode_type =
    std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other>;
  _power_mode_type power_mode;

  // setters for named parameter idiom
  Type & set__power_mode(
    const std::basic_string<char, std::char_traits<char>, typename ContainerAllocator::template rebind<char>::other> & _arg)
  {
    this->power_mode = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    jetson_stats_msgs::srv::NVPModel_Response_<ContainerAllocator> *;
  using ConstRawPtr =
    const jetson_stats_msgs::srv::NVPModel_Response_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<jetson_stats_msgs::srv::NVPModel_Response_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<jetson_stats_msgs::srv::NVPModel_Response_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      jetson_stats_msgs::srv::NVPModel_Response_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<jetson_stats_msgs::srv::NVPModel_Response_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      jetson_stats_msgs::srv::NVPModel_Response_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<jetson_stats_msgs::srv::NVPModel_Response_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<jetson_stats_msgs::srv::NVPModel_Response_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<jetson_stats_msgs::srv::NVPModel_Response_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__jetson_stats_msgs__srv__NVPModel_Response
    std::shared_ptr<jetson_stats_msgs::srv::NVPModel_Response_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__jetson_stats_msgs__srv__NVPModel_Response
    std::shared_ptr<jetson_stats_msgs::srv::NVPModel_Response_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const NVPModel_Response_ & other) const
  {
    if (this->power_mode != other.power_mode) {
      return false;
    }
    return true;
  }
  bool operator!=(const NVPModel_Response_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct NVPModel_Response_

// alias to use template instance with default allocator
using NVPModel_Response =
  jetson_stats_msgs::srv::NVPModel_Response_<std::allocator<void>>;

// constant definitions

}  // namespace srv

}  // namespace jetson_stats_msgs

namespace jetson_stats_msgs
{

namespace srv
{

struct NVPModel
{
  using Request = jetson_stats_msgs::srv::NVPModel_Request;
  using Response = jetson_stats_msgs::srv::NVPModel_Response;
};

}  // namespace srv

}  // namespace jetson_stats_msgs

#endif  // JETSON_STATS_MSGS__SRV__NVP_MODEL__STRUCT_HPP_
