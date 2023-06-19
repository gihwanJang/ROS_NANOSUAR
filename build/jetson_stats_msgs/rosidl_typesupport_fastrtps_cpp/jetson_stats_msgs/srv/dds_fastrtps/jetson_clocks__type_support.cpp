// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from jetson_stats_msgs:srv/JetsonClocks.idl
// generated code does not contain a copyright notice
#include "jetson_stats_msgs/srv/jetson_clocks__rosidl_typesupport_fastrtps_cpp.hpp"
#include "jetson_stats_msgs/srv/jetson_clocks__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace jetson_stats_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jetson_stats_msgs
cdr_serialize(
  const jetson_stats_msgs::srv::JetsonClocks_Request & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: status
  cdr << (ros_message.status ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jetson_stats_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  jetson_stats_msgs::srv::JetsonClocks_Request & ros_message)
{
  // Member: status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.status = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jetson_stats_msgs
get_serialized_size(
  const jetson_stats_msgs::srv::JetsonClocks_Request & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: status
  {
    size_t item_size = sizeof(ros_message.status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jetson_stats_msgs
max_serialized_size_JetsonClocks_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _JetsonClocks_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const jetson_stats_msgs::srv::JetsonClocks_Request *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _JetsonClocks_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<jetson_stats_msgs::srv::JetsonClocks_Request *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _JetsonClocks_Request__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const jetson_stats_msgs::srv::JetsonClocks_Request *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _JetsonClocks_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_JetsonClocks_Request(full_bounded, 0);
}

static message_type_support_callbacks_t _JetsonClocks_Request__callbacks = {
  "jetson_stats_msgs::srv",
  "JetsonClocks_Request",
  _JetsonClocks_Request__cdr_serialize,
  _JetsonClocks_Request__cdr_deserialize,
  _JetsonClocks_Request__get_serialized_size,
  _JetsonClocks_Request__max_serialized_size
};

static rosidl_message_type_support_t _JetsonClocks_Request__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_JetsonClocks_Request__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace jetson_stats_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_jetson_stats_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<jetson_stats_msgs::srv::JetsonClocks_Request>()
{
  return &jetson_stats_msgs::srv::typesupport_fastrtps_cpp::_JetsonClocks_Request__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, jetson_stats_msgs, srv, JetsonClocks_Request)() {
  return &jetson_stats_msgs::srv::typesupport_fastrtps_cpp::_JetsonClocks_Request__handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include <limits>
// already included above
// #include <stdexcept>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
// already included above
// #include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace jetson_stats_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jetson_stats_msgs
cdr_serialize(
  const jetson_stats_msgs::srv::JetsonClocks_Response & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: done
  cdr << (ros_message.done ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jetson_stats_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  jetson_stats_msgs::srv::JetsonClocks_Response & ros_message)
{
  // Member: done
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.done = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jetson_stats_msgs
get_serialized_size(
  const jetson_stats_msgs::srv::JetsonClocks_Response & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: done
  {
    size_t item_size = sizeof(ros_message.done);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_jetson_stats_msgs
max_serialized_size_JetsonClocks_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: done
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _JetsonClocks_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const jetson_stats_msgs::srv::JetsonClocks_Response *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _JetsonClocks_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<jetson_stats_msgs::srv::JetsonClocks_Response *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _JetsonClocks_Response__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const jetson_stats_msgs::srv::JetsonClocks_Response *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _JetsonClocks_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_JetsonClocks_Response(full_bounded, 0);
}

static message_type_support_callbacks_t _JetsonClocks_Response__callbacks = {
  "jetson_stats_msgs::srv",
  "JetsonClocks_Response",
  _JetsonClocks_Response__cdr_serialize,
  _JetsonClocks_Response__cdr_deserialize,
  _JetsonClocks_Response__get_serialized_size,
  _JetsonClocks_Response__max_serialized_size
};

static rosidl_message_type_support_t _JetsonClocks_Response__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_JetsonClocks_Response__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace jetson_stats_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_jetson_stats_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<jetson_stats_msgs::srv::JetsonClocks_Response>()
{
  return &jetson_stats_msgs::srv::typesupport_fastrtps_cpp::_JetsonClocks_Response__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, jetson_stats_msgs, srv, JetsonClocks_Response)() {
  return &jetson_stats_msgs::srv::typesupport_fastrtps_cpp::_JetsonClocks_Response__handle;
}

#ifdef __cplusplus
}
#endif

#include "rmw/error_handling.h"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/service_type_support_decl.hpp"

namespace jetson_stats_msgs
{

namespace srv
{

namespace typesupport_fastrtps_cpp
{

static service_type_support_callbacks_t _JetsonClocks__callbacks = {
  "jetson_stats_msgs::srv",
  "JetsonClocks",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, jetson_stats_msgs, srv, JetsonClocks_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, jetson_stats_msgs, srv, JetsonClocks_Response)(),
};

static rosidl_service_type_support_t _JetsonClocks__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_JetsonClocks__callbacks,
  get_service_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace srv

}  // namespace jetson_stats_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_jetson_stats_msgs
const rosidl_service_type_support_t *
get_service_type_support_handle<jetson_stats_msgs::srv::JetsonClocks>()
{
  return &jetson_stats_msgs::srv::typesupport_fastrtps_cpp::_JetsonClocks__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, jetson_stats_msgs, srv, JetsonClocks)() {
  return &jetson_stats_msgs::srv::typesupport_fastrtps_cpp::_JetsonClocks__handle;
}

#ifdef __cplusplus
}
#endif
