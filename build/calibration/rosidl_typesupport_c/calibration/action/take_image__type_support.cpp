// generated from rosidl_typesupport_c/resource/idl__type_support.cpp.em
// with input from calibration:action/TakeImage.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "calibration/msg/rosidl_typesupport_c__visibility_control.h"
#include "calibration/action/detail/take_image__struct.h"
#include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/message_type_support_dispatch.h"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_c/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace calibration
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TakeImage_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TakeImage_Goal_type_support_ids_t;

static const _TakeImage_Goal_type_support_ids_t _TakeImage_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TakeImage_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TakeImage_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TakeImage_Goal_type_support_symbol_names_t _TakeImage_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, calibration, action, TakeImage_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calibration, action, TakeImage_Goal)),
  }
};

typedef struct _TakeImage_Goal_type_support_data_t
{
  void * data[2];
} _TakeImage_Goal_type_support_data_t;

static _TakeImage_Goal_type_support_data_t _TakeImage_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TakeImage_Goal_message_typesupport_map = {
  2,
  "calibration",
  &_TakeImage_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_TakeImage_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_TakeImage_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TakeImage_Goal_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TakeImage_Goal_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace calibration

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_calibration
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, calibration, action, TakeImage_Goal)() {
  return &::calibration::action::rosidl_typesupport_c::TakeImage_Goal_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "calibration/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "calibration/action/detail/take_image__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace calibration
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TakeImage_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TakeImage_Result_type_support_ids_t;

static const _TakeImage_Result_type_support_ids_t _TakeImage_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TakeImage_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TakeImage_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TakeImage_Result_type_support_symbol_names_t _TakeImage_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, calibration, action, TakeImage_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calibration, action, TakeImage_Result)),
  }
};

typedef struct _TakeImage_Result_type_support_data_t
{
  void * data[2];
} _TakeImage_Result_type_support_data_t;

static _TakeImage_Result_type_support_data_t _TakeImage_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TakeImage_Result_message_typesupport_map = {
  2,
  "calibration",
  &_TakeImage_Result_message_typesupport_ids.typesupport_identifier[0],
  &_TakeImage_Result_message_typesupport_symbol_names.symbol_name[0],
  &_TakeImage_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TakeImage_Result_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TakeImage_Result_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace calibration

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_calibration
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, calibration, action, TakeImage_Result)() {
  return &::calibration::action::rosidl_typesupport_c::TakeImage_Result_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "calibration/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "calibration/action/detail/take_image__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace calibration
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TakeImage_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TakeImage_Feedback_type_support_ids_t;

static const _TakeImage_Feedback_type_support_ids_t _TakeImage_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TakeImage_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TakeImage_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TakeImage_Feedback_type_support_symbol_names_t _TakeImage_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, calibration, action, TakeImage_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calibration, action, TakeImage_Feedback)),
  }
};

typedef struct _TakeImage_Feedback_type_support_data_t
{
  void * data[2];
} _TakeImage_Feedback_type_support_data_t;

static _TakeImage_Feedback_type_support_data_t _TakeImage_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TakeImage_Feedback_message_typesupport_map = {
  2,
  "calibration",
  &_TakeImage_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_TakeImage_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_TakeImage_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TakeImage_Feedback_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TakeImage_Feedback_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace calibration

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_calibration
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, calibration, action, TakeImage_Feedback)() {
  return &::calibration::action::rosidl_typesupport_c::TakeImage_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "calibration/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "calibration/action/detail/take_image__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace calibration
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TakeImage_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TakeImage_SendGoal_Request_type_support_ids_t;

static const _TakeImage_SendGoal_Request_type_support_ids_t _TakeImage_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TakeImage_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TakeImage_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TakeImage_SendGoal_Request_type_support_symbol_names_t _TakeImage_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, calibration, action, TakeImage_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calibration, action, TakeImage_SendGoal_Request)),
  }
};

typedef struct _TakeImage_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _TakeImage_SendGoal_Request_type_support_data_t;

static _TakeImage_SendGoal_Request_type_support_data_t _TakeImage_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TakeImage_SendGoal_Request_message_typesupport_map = {
  2,
  "calibration",
  &_TakeImage_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_TakeImage_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_TakeImage_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TakeImage_SendGoal_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TakeImage_SendGoal_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace calibration

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_calibration
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, calibration, action, TakeImage_SendGoal_Request)() {
  return &::calibration::action::rosidl_typesupport_c::TakeImage_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "calibration/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "calibration/action/detail/take_image__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace calibration
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TakeImage_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TakeImage_SendGoal_Response_type_support_ids_t;

static const _TakeImage_SendGoal_Response_type_support_ids_t _TakeImage_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TakeImage_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TakeImage_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TakeImage_SendGoal_Response_type_support_symbol_names_t _TakeImage_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, calibration, action, TakeImage_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calibration, action, TakeImage_SendGoal_Response)),
  }
};

typedef struct _TakeImage_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _TakeImage_SendGoal_Response_type_support_data_t;

static _TakeImage_SendGoal_Response_type_support_data_t _TakeImage_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TakeImage_SendGoal_Response_message_typesupport_map = {
  2,
  "calibration",
  &_TakeImage_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_TakeImage_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_TakeImage_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TakeImage_SendGoal_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TakeImage_SendGoal_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace calibration

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_calibration
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, calibration, action, TakeImage_SendGoal_Response)() {
  return &::calibration::action::rosidl_typesupport_c::TakeImage_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "calibration/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
#include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace calibration
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TakeImage_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TakeImage_SendGoal_type_support_ids_t;

static const _TakeImage_SendGoal_type_support_ids_t _TakeImage_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TakeImage_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TakeImage_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TakeImage_SendGoal_type_support_symbol_names_t _TakeImage_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, calibration, action, TakeImage_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calibration, action, TakeImage_SendGoal)),
  }
};

typedef struct _TakeImage_SendGoal_type_support_data_t
{
  void * data[2];
} _TakeImage_SendGoal_type_support_data_t;

static _TakeImage_SendGoal_type_support_data_t _TakeImage_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TakeImage_SendGoal_service_typesupport_map = {
  2,
  "calibration",
  &_TakeImage_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_TakeImage_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_TakeImage_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t TakeImage_SendGoal_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TakeImage_SendGoal_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace calibration

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_calibration
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, calibration, action, TakeImage_SendGoal)() {
  return &::calibration::action::rosidl_typesupport_c::TakeImage_SendGoal_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "calibration/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "calibration/action/detail/take_image__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace calibration
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TakeImage_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TakeImage_GetResult_Request_type_support_ids_t;

static const _TakeImage_GetResult_Request_type_support_ids_t _TakeImage_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TakeImage_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TakeImage_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TakeImage_GetResult_Request_type_support_symbol_names_t _TakeImage_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, calibration, action, TakeImage_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calibration, action, TakeImage_GetResult_Request)),
  }
};

typedef struct _TakeImage_GetResult_Request_type_support_data_t
{
  void * data[2];
} _TakeImage_GetResult_Request_type_support_data_t;

static _TakeImage_GetResult_Request_type_support_data_t _TakeImage_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TakeImage_GetResult_Request_message_typesupport_map = {
  2,
  "calibration",
  &_TakeImage_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_TakeImage_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_TakeImage_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TakeImage_GetResult_Request_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TakeImage_GetResult_Request_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace calibration

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_calibration
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, calibration, action, TakeImage_GetResult_Request)() {
  return &::calibration::action::rosidl_typesupport_c::TakeImage_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "calibration/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "calibration/action/detail/take_image__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace calibration
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TakeImage_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TakeImage_GetResult_Response_type_support_ids_t;

static const _TakeImage_GetResult_Response_type_support_ids_t _TakeImage_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TakeImage_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TakeImage_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TakeImage_GetResult_Response_type_support_symbol_names_t _TakeImage_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, calibration, action, TakeImage_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calibration, action, TakeImage_GetResult_Response)),
  }
};

typedef struct _TakeImage_GetResult_Response_type_support_data_t
{
  void * data[2];
} _TakeImage_GetResult_Response_type_support_data_t;

static _TakeImage_GetResult_Response_type_support_data_t _TakeImage_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TakeImage_GetResult_Response_message_typesupport_map = {
  2,
  "calibration",
  &_TakeImage_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_TakeImage_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_TakeImage_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TakeImage_GetResult_Response_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TakeImage_GetResult_Response_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace calibration

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_calibration
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, calibration, action, TakeImage_GetResult_Response)() {
  return &::calibration::action::rosidl_typesupport_c::TakeImage_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "calibration/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/service_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace calibration
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TakeImage_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TakeImage_GetResult_type_support_ids_t;

static const _TakeImage_GetResult_type_support_ids_t _TakeImage_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TakeImage_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TakeImage_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TakeImage_GetResult_type_support_symbol_names_t _TakeImage_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, calibration, action, TakeImage_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calibration, action, TakeImage_GetResult)),
  }
};

typedef struct _TakeImage_GetResult_type_support_data_t
{
  void * data[2];
} _TakeImage_GetResult_type_support_data_t;

static _TakeImage_GetResult_type_support_data_t _TakeImage_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TakeImage_GetResult_service_typesupport_map = {
  2,
  "calibration",
  &_TakeImage_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_TakeImage_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_TakeImage_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t TakeImage_GetResult_service_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TakeImage_GetResult_service_typesupport_map),
  rosidl_typesupport_c__get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace calibration

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_calibration
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_c, calibration, action, TakeImage_GetResult)() {
  return &::calibration::action::rosidl_typesupport_c::TakeImage_GetResult_service_type_support_handle;
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "calibration/msg/rosidl_typesupport_c__visibility_control.h"
// already included above
// #include "calibration/action/detail/take_image__struct.h"
// already included above
// #include "rosidl_typesupport_c/identifier.h"
// already included above
// #include "rosidl_typesupport_c/message_type_support_dispatch.h"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_c/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace calibration
{

namespace action
{

namespace rosidl_typesupport_c
{

typedef struct _TakeImage_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _TakeImage_FeedbackMessage_type_support_ids_t;

static const _TakeImage_FeedbackMessage_type_support_ids_t _TakeImage_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_c",  // ::rosidl_typesupport_fastrtps_c::typesupport_identifier,
    "rosidl_typesupport_introspection_c",  // ::rosidl_typesupport_introspection_c::typesupport_identifier,
  }
};

typedef struct _TakeImage_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _TakeImage_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _TakeImage_FeedbackMessage_type_support_symbol_names_t _TakeImage_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, calibration, action, TakeImage_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, calibration, action, TakeImage_FeedbackMessage)),
  }
};

typedef struct _TakeImage_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _TakeImage_FeedbackMessage_type_support_data_t;

static _TakeImage_FeedbackMessage_type_support_data_t _TakeImage_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _TakeImage_FeedbackMessage_message_typesupport_map = {
  2,
  "calibration",
  &_TakeImage_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_TakeImage_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_TakeImage_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t TakeImage_FeedbackMessage_message_type_support_handle = {
  rosidl_typesupport_c__typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_TakeImage_FeedbackMessage_message_typesupport_map),
  rosidl_typesupport_c__get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_c

}  // namespace action

}  // namespace calibration

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_calibration
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_c, calibration, action, TakeImage_FeedbackMessage)() {
  return &::calibration::action::rosidl_typesupport_c::TakeImage_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
}
#endif

#include "action_msgs/msg/goal_status_array.h"
#include "action_msgs/srv/cancel_goal.h"
#include "calibration/action/take_image.h"
#include "calibration/action/detail/take_image__type_support.h"

static rosidl_action_type_support_t _calibration__action__TakeImage__typesupport_c;

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_C_EXPORT_calibration
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(
  rosidl_typesupport_c, calibration, action, TakeImage)()
{
  // Thread-safe by always writing the same values to the static struct
  _calibration__action__TakeImage__typesupport_c.goal_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, calibration, action, TakeImage_SendGoal)();
  _calibration__action__TakeImage__typesupport_c.result_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, calibration, action, TakeImage_GetResult)();
  _calibration__action__TakeImage__typesupport_c.cancel_service_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, srv, CancelGoal)();
  _calibration__action__TakeImage__typesupport_c.feedback_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, calibration, action, TakeImage_FeedbackMessage)();
  _calibration__action__TakeImage__typesupport_c.status_message_type_support =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
    rosidl_typesupport_c, action_msgs, msg, GoalStatusArray)();

  return &_calibration__action__TakeImage__typesupport_c;
}

#ifdef __cplusplus
}
#endif
