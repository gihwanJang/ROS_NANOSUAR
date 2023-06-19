// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from jetson_stats_msgs:srv/NVPModel.idl
// generated code does not contain a copyright notice
#include "jetson_stats_msgs/srv/nvp_model__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "jetson_stats_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "jetson_stats_msgs/srv/nvp_model__struct.h"
#include "jetson_stats_msgs/srv/nvp_model__functions.h"
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


using _NVPModel_Request__ros_msg_type = jetson_stats_msgs__srv__NVPModel_Request;

static bool _NVPModel_Request__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NVPModel_Request__ros_msg_type * ros_message = static_cast<const _NVPModel_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: nvpmodel
  {
    cdr << ros_message->nvpmodel;
  }

  return true;
}

static bool _NVPModel_Request__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NVPModel_Request__ros_msg_type * ros_message = static_cast<_NVPModel_Request__ros_msg_type *>(untyped_ros_message);
  // Field name: nvpmodel
  {
    cdr >> ros_message->nvpmodel;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_jetson_stats_msgs
size_t get_serialized_size_jetson_stats_msgs__srv__NVPModel_Request(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NVPModel_Request__ros_msg_type * ros_message = static_cast<const _NVPModel_Request__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name nvpmodel
  {
    size_t item_size = sizeof(ros_message->nvpmodel);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _NVPModel_Request__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_jetson_stats_msgs__srv__NVPModel_Request(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_jetson_stats_msgs
size_t max_serialized_size_jetson_stats_msgs__srv__NVPModel_Request(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: nvpmodel
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint64_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint64_t));
  }

  return current_alignment - initial_alignment;
}

static size_t _NVPModel_Request__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_jetson_stats_msgs__srv__NVPModel_Request(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_NVPModel_Request = {
  "jetson_stats_msgs::srv",
  "NVPModel_Request",
  _NVPModel_Request__cdr_serialize,
  _NVPModel_Request__cdr_deserialize,
  _NVPModel_Request__get_serialized_size,
  _NVPModel_Request__max_serialized_size
};

static rosidl_message_type_support_t _NVPModel_Request__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NVPModel_Request,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jetson_stats_msgs, srv, NVPModel_Request)() {
  return &_NVPModel_Request__type_support;
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
// #include "jetson_stats_msgs/srv/nvp_model__struct.h"
// already included above
// #include "jetson_stats_msgs/srv/nvp_model__functions.h"
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

#include "rosidl_generator_c/string.h"  // power_mode
#include "rosidl_generator_c/string_functions.h"  // power_mode

// forward declare type support functions


using _NVPModel_Response__ros_msg_type = jetson_stats_msgs__srv__NVPModel_Response;

static bool _NVPModel_Response__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _NVPModel_Response__ros_msg_type * ros_message = static_cast<const _NVPModel_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: power_mode
  {
    const rosidl_generator_c__String * str = &ros_message->power_mode;
    if (str->capacity == 0 || str->capacity <= str->size) {
      fprintf(stderr, "string capacity not greater than size\n");
      return false;
    }
    if (str->data[str->size] != '\0') {
      fprintf(stderr, "string not null-terminated\n");
      return false;
    }
    cdr << str->data;
  }

  return true;
}

static bool _NVPModel_Response__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _NVPModel_Response__ros_msg_type * ros_message = static_cast<_NVPModel_Response__ros_msg_type *>(untyped_ros_message);
  // Field name: power_mode
  {
    std::string tmp;
    cdr >> tmp;
    if (!ros_message->power_mode.data) {
      rosidl_generator_c__String__init(&ros_message->power_mode);
    }
    bool succeeded = rosidl_generator_c__String__assign(
      &ros_message->power_mode,
      tmp.c_str());
    if (!succeeded) {
      fprintf(stderr, "failed to assign string into field 'power_mode'\n");
      return false;
    }
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_jetson_stats_msgs
size_t get_serialized_size_jetson_stats_msgs__srv__NVPModel_Response(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _NVPModel_Response__ros_msg_type * ros_message = static_cast<const _NVPModel_Response__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name power_mode
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message->power_mode.size + 1);

  return current_alignment - initial_alignment;
}

static uint32_t _NVPModel_Response__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_jetson_stats_msgs__srv__NVPModel_Response(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_jetson_stats_msgs
size_t max_serialized_size_jetson_stats_msgs__srv__NVPModel_Response(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: power_mode
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  return current_alignment - initial_alignment;
}

static size_t _NVPModel_Response__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_jetson_stats_msgs__srv__NVPModel_Response(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_NVPModel_Response = {
  "jetson_stats_msgs::srv",
  "NVPModel_Response",
  _NVPModel_Response__cdr_serialize,
  _NVPModel_Response__cdr_deserialize,
  _NVPModel_Response__get_serialized_size,
  _NVPModel_Response__max_serialized_size
};

static rosidl_message_type_support_t _NVPModel_Response__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_NVPModel_Response,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jetson_stats_msgs, srv, NVPModel_Response)() {
  return &_NVPModel_Response__type_support;
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
#include "jetson_stats_msgs/srv/nvp_model.h"

#if defined(__cplusplus)
extern "C"
{
#endif

static service_type_support_callbacks_t NVPModel__callbacks = {
  "jetson_stats_msgs::srv",
  "NVPModel",
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jetson_stats_msgs, srv, NVPModel_Request)(),
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jetson_stats_msgs, srv, NVPModel_Response)(),
};

static rosidl_service_type_support_t NVPModel__handle = {
  rosidl_typesupport_fastrtps_c__identifier,
  &NVPModel__callbacks,
  get_service_typesupport_handle_function,
};

const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, jetson_stats_msgs, srv, NVPModel)() {
  return &NVPModel__handle;
}

#if defined(__cplusplus)
}
#endif
