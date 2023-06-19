// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from jetson_stats_msgs:srv/JetsonClocks.idl
// generated code does not contain a copyright notice
#include "jetson_stats_msgs/srv/jetson_clocks__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "jetson_stats_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "jetson_stats_msgs/srv/jetson_clocks__struct.h"
#include "jetson_stats_msgs/srv/jetson_clocks__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _JetsonClocks_Request__ros_msg_type = jetson_stats_msgs__srv__JetsonClocks_Request;

static bool _JetsonClocks_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _JetsonClocks_Request__ros_msg_type * ros_message = static_cast<const _JetsonClocks_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    cdr << (ros_message->status ? true : false);
  }

  return true;
}

static bool _JetsonClocks_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _JetsonClocks_Request__ros_msg_type * ros_message = static_cast<_JetsonClocks_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: status
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->status = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_jetson_stats_msgs
size_t get_serialized_size_jetson_stats_msgs__srv__JetsonClocks_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _JetsonClocks_Request__ros_msg_type * ros_message = static_cast<const _JetsonClocks_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name status
  {
    size_t item_size = sizeof(ros_message->status);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _JetsonClocks_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_jetson_stats_msgs__srv__JetsonClocks_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_jetson_stats_msgs
size_t max_serialized_size_jetson_stats_msgs__srv__JetsonClocks_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: status
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _JetsonClocks_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_jetson_stats_msgs__srv__JetsonClocks_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_JetsonClocks_Request = {
  "jetson_stats_msgs::srv",
  "JetsonClocks_Request",
  _JetsonClocks_Request__cdr_serialize,
  _JetsonClocks_Request__cdr_deserialize,
  _JetsonClocks_Request__get_serialized_size,
  _JetsonClocks_Request__max_serialized_size
};

static rosidl_message_type_support_t _JetsonClocks_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_JetsonClocks_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jetson_stats_msgs, srv, JetsonClocks_Request)() {
  return &_JetsonClocks_Request__type_support;
}

#if defined(__cplusplus)
}
#endif

// already included above
// #include <cassert>
// already included above
// #include <limits>
// already included above
// #include <string>
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
// already included above
// #include "jetson_stats_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
// already included above
// #include "jetson_stats_msgs/srv/jetson_clocks__struct.h"
// already included above
// #include "jetson_stats_msgs/srv/jetson_clocks__functions.h"
// already included above
// #include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _JetsonClocks_Response__ros_msg_type = jetson_stats_msgs__srv__JetsonClocks_Response;

static bool _JetsonClocks_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _JetsonClocks_Response__ros_msg_type * ros_message = static_cast<const _JetsonClocks_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: done
  {
    cdr << (ros_message->done ? true : false);
  }

  return true;
}

static bool _JetsonClocks_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _JetsonClocks_Response__ros_msg_type * ros_message = static_cast<_JetsonClocks_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: done
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->done = tmp ? true : false;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_jetson_stats_msgs
size_t get_serialized_size_jetson_stats_msgs__srv__JetsonClocks_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _JetsonClocks_Response__ros_msg_type * ros_message = static_cast<const _JetsonClocks_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name done
  {
    size_t item_size = sizeof(ros_message->done);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _JetsonClocks_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_jetson_stats_msgs__srv__JetsonClocks_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_jetson_stats_msgs
size_t max_serialized_size_jetson_stats_msgs__srv__JetsonClocks_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: done
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _JetsonClocks_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_jetson_stats_msgs__srv__JetsonClocks_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_JetsonClocks_Response = {
  "jetson_stats_msgs::srv",
  "JetsonClocks_Response",
  _JetsonClocks_Response__cdr_serialize,
  _JetsonClocks_Response__cdr_deserialize,
  _JetsonClocks_Response__get_serialized_size,
  _JetsonClocks_Response__max_serialized_size
};

static rosidl_message_type_support_t _JetsonClocks_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_JetsonClocks_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jetson_stats_msgs, srv, JetsonClocks_Response)() {
  return &_JetsonClocks_Response__type_support;
}

#if defined(__cplusplus)
}
#endif

#include "rosidl_typesupport_fastrtps_cpp/service_type_support.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_fastrtps_c/identifier.h"
// already included above
// #include "jetson_stats_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "jetson_stats_msgs/srv/jetson_clocks.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t JetsonClocks__callbacks = {
  "jetson_stats_msgs::srv",
  "JetsonClocks",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jetson_stats_msgs, srv, JetsonClocks_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jetson_stats_msgs, srv, JetsonClocks_Response)(),
};

static rosidl_service_type_support_t JetsonClocks__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &JetsonClocks__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jetson_stats_msgs, srv, JetsonClocks)() {
  return &JetsonClocks__handle;
}

#if defined(__cplusplus)
}
#endif
