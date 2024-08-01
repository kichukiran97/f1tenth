// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from calibration:action/DoCameraCalibration.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "calibration/action/detail/do_camera_calibration__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace calibration
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DoCameraCalibration_Goal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DoCameraCalibration_Goal_type_support_ids_t;

static const _DoCameraCalibration_Goal_type_support_ids_t _DoCameraCalibration_Goal_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DoCameraCalibration_Goal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DoCameraCalibration_Goal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DoCameraCalibration_Goal_type_support_symbol_names_t _DoCameraCalibration_Goal_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, calibration, action, DoCameraCalibration_Goal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, calibration, action, DoCameraCalibration_Goal)),
  }
};

typedef struct _DoCameraCalibration_Goal_type_support_data_t
{
  void * data[2];
} _DoCameraCalibration_Goal_type_support_data_t;

static _DoCameraCalibration_Goal_type_support_data_t _DoCameraCalibration_Goal_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DoCameraCalibration_Goal_message_typesupport_map = {
  2,
  "calibration",
  &_DoCameraCalibration_Goal_message_typesupport_ids.typesupport_identifier[0],
  &_DoCameraCalibration_Goal_message_typesupport_symbol_names.symbol_name[0],
  &_DoCameraCalibration_Goal_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DoCameraCalibration_Goal_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DoCameraCalibration_Goal_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace calibration

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<calibration::action::DoCameraCalibration_Goal>()
{
  return &::calibration::action::rosidl_typesupport_cpp::DoCameraCalibration_Goal_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, calibration, action, DoCameraCalibration_Goal)() {
  return get_message_type_support_handle<calibration::action::DoCameraCalibration_Goal>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "calibration/action/detail/do_camera_calibration__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace calibration
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DoCameraCalibration_Result_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DoCameraCalibration_Result_type_support_ids_t;

static const _DoCameraCalibration_Result_type_support_ids_t _DoCameraCalibration_Result_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DoCameraCalibration_Result_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DoCameraCalibration_Result_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DoCameraCalibration_Result_type_support_symbol_names_t _DoCameraCalibration_Result_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, calibration, action, DoCameraCalibration_Result)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, calibration, action, DoCameraCalibration_Result)),
  }
};

typedef struct _DoCameraCalibration_Result_type_support_data_t
{
  void * data[2];
} _DoCameraCalibration_Result_type_support_data_t;

static _DoCameraCalibration_Result_type_support_data_t _DoCameraCalibration_Result_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DoCameraCalibration_Result_message_typesupport_map = {
  2,
  "calibration",
  &_DoCameraCalibration_Result_message_typesupport_ids.typesupport_identifier[0],
  &_DoCameraCalibration_Result_message_typesupport_symbol_names.symbol_name[0],
  &_DoCameraCalibration_Result_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DoCameraCalibration_Result_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DoCameraCalibration_Result_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace calibration

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<calibration::action::DoCameraCalibration_Result>()
{
  return &::calibration::action::rosidl_typesupport_cpp::DoCameraCalibration_Result_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, calibration, action, DoCameraCalibration_Result)() {
  return get_message_type_support_handle<calibration::action::DoCameraCalibration_Result>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "calibration/action/detail/do_camera_calibration__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace calibration
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DoCameraCalibration_Feedback_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DoCameraCalibration_Feedback_type_support_ids_t;

static const _DoCameraCalibration_Feedback_type_support_ids_t _DoCameraCalibration_Feedback_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DoCameraCalibration_Feedback_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DoCameraCalibration_Feedback_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DoCameraCalibration_Feedback_type_support_symbol_names_t _DoCameraCalibration_Feedback_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, calibration, action, DoCameraCalibration_Feedback)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, calibration, action, DoCameraCalibration_Feedback)),
  }
};

typedef struct _DoCameraCalibration_Feedback_type_support_data_t
{
  void * data[2];
} _DoCameraCalibration_Feedback_type_support_data_t;

static _DoCameraCalibration_Feedback_type_support_data_t _DoCameraCalibration_Feedback_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DoCameraCalibration_Feedback_message_typesupport_map = {
  2,
  "calibration",
  &_DoCameraCalibration_Feedback_message_typesupport_ids.typesupport_identifier[0],
  &_DoCameraCalibration_Feedback_message_typesupport_symbol_names.symbol_name[0],
  &_DoCameraCalibration_Feedback_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DoCameraCalibration_Feedback_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DoCameraCalibration_Feedback_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace calibration

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<calibration::action::DoCameraCalibration_Feedback>()
{
  return &::calibration::action::rosidl_typesupport_cpp::DoCameraCalibration_Feedback_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, calibration, action, DoCameraCalibration_Feedback)() {
  return get_message_type_support_handle<calibration::action::DoCameraCalibration_Feedback>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "calibration/action/detail/do_camera_calibration__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace calibration
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DoCameraCalibration_SendGoal_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DoCameraCalibration_SendGoal_Request_type_support_ids_t;

static const _DoCameraCalibration_SendGoal_Request_type_support_ids_t _DoCameraCalibration_SendGoal_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DoCameraCalibration_SendGoal_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DoCameraCalibration_SendGoal_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DoCameraCalibration_SendGoal_Request_type_support_symbol_names_t _DoCameraCalibration_SendGoal_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, calibration, action, DoCameraCalibration_SendGoal_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, calibration, action, DoCameraCalibration_SendGoal_Request)),
  }
};

typedef struct _DoCameraCalibration_SendGoal_Request_type_support_data_t
{
  void * data[2];
} _DoCameraCalibration_SendGoal_Request_type_support_data_t;

static _DoCameraCalibration_SendGoal_Request_type_support_data_t _DoCameraCalibration_SendGoal_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DoCameraCalibration_SendGoal_Request_message_typesupport_map = {
  2,
  "calibration",
  &_DoCameraCalibration_SendGoal_Request_message_typesupport_ids.typesupport_identifier[0],
  &_DoCameraCalibration_SendGoal_Request_message_typesupport_symbol_names.symbol_name[0],
  &_DoCameraCalibration_SendGoal_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DoCameraCalibration_SendGoal_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DoCameraCalibration_SendGoal_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace calibration

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<calibration::action::DoCameraCalibration_SendGoal_Request>()
{
  return &::calibration::action::rosidl_typesupport_cpp::DoCameraCalibration_SendGoal_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, calibration, action, DoCameraCalibration_SendGoal_Request)() {
  return get_message_type_support_handle<calibration::action::DoCameraCalibration_SendGoal_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "calibration/action/detail/do_camera_calibration__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace calibration
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DoCameraCalibration_SendGoal_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DoCameraCalibration_SendGoal_Response_type_support_ids_t;

static const _DoCameraCalibration_SendGoal_Response_type_support_ids_t _DoCameraCalibration_SendGoal_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DoCameraCalibration_SendGoal_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DoCameraCalibration_SendGoal_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DoCameraCalibration_SendGoal_Response_type_support_symbol_names_t _DoCameraCalibration_SendGoal_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, calibration, action, DoCameraCalibration_SendGoal_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, calibration, action, DoCameraCalibration_SendGoal_Response)),
  }
};

typedef struct _DoCameraCalibration_SendGoal_Response_type_support_data_t
{
  void * data[2];
} _DoCameraCalibration_SendGoal_Response_type_support_data_t;

static _DoCameraCalibration_SendGoal_Response_type_support_data_t _DoCameraCalibration_SendGoal_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DoCameraCalibration_SendGoal_Response_message_typesupport_map = {
  2,
  "calibration",
  &_DoCameraCalibration_SendGoal_Response_message_typesupport_ids.typesupport_identifier[0],
  &_DoCameraCalibration_SendGoal_Response_message_typesupport_symbol_names.symbol_name[0],
  &_DoCameraCalibration_SendGoal_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DoCameraCalibration_SendGoal_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DoCameraCalibration_SendGoal_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace calibration

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<calibration::action::DoCameraCalibration_SendGoal_Response>()
{
  return &::calibration::action::rosidl_typesupport_cpp::DoCameraCalibration_SendGoal_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, calibration, action, DoCameraCalibration_SendGoal_Response)() {
  return get_message_type_support_handle<calibration::action::DoCameraCalibration_SendGoal_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "calibration/action/detail/do_camera_calibration__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace calibration
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DoCameraCalibration_SendGoal_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DoCameraCalibration_SendGoal_type_support_ids_t;

static const _DoCameraCalibration_SendGoal_type_support_ids_t _DoCameraCalibration_SendGoal_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DoCameraCalibration_SendGoal_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DoCameraCalibration_SendGoal_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DoCameraCalibration_SendGoal_type_support_symbol_names_t _DoCameraCalibration_SendGoal_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, calibration, action, DoCameraCalibration_SendGoal)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, calibration, action, DoCameraCalibration_SendGoal)),
  }
};

typedef struct _DoCameraCalibration_SendGoal_type_support_data_t
{
  void * data[2];
} _DoCameraCalibration_SendGoal_type_support_data_t;

static _DoCameraCalibration_SendGoal_type_support_data_t _DoCameraCalibration_SendGoal_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DoCameraCalibration_SendGoal_service_typesupport_map = {
  2,
  "calibration",
  &_DoCameraCalibration_SendGoal_service_typesupport_ids.typesupport_identifier[0],
  &_DoCameraCalibration_SendGoal_service_typesupport_symbol_names.symbol_name[0],
  &_DoCameraCalibration_SendGoal_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t DoCameraCalibration_SendGoal_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DoCameraCalibration_SendGoal_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace calibration

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<calibration::action::DoCameraCalibration_SendGoal>()
{
  return &::calibration::action::rosidl_typesupport_cpp::DoCameraCalibration_SendGoal_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, calibration, action, DoCameraCalibration_SendGoal)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<calibration::action::DoCameraCalibration_SendGoal>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "calibration/action/detail/do_camera_calibration__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace calibration
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DoCameraCalibration_GetResult_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DoCameraCalibration_GetResult_Request_type_support_ids_t;

static const _DoCameraCalibration_GetResult_Request_type_support_ids_t _DoCameraCalibration_GetResult_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DoCameraCalibration_GetResult_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DoCameraCalibration_GetResult_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DoCameraCalibration_GetResult_Request_type_support_symbol_names_t _DoCameraCalibration_GetResult_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, calibration, action, DoCameraCalibration_GetResult_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, calibration, action, DoCameraCalibration_GetResult_Request)),
  }
};

typedef struct _DoCameraCalibration_GetResult_Request_type_support_data_t
{
  void * data[2];
} _DoCameraCalibration_GetResult_Request_type_support_data_t;

static _DoCameraCalibration_GetResult_Request_type_support_data_t _DoCameraCalibration_GetResult_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DoCameraCalibration_GetResult_Request_message_typesupport_map = {
  2,
  "calibration",
  &_DoCameraCalibration_GetResult_Request_message_typesupport_ids.typesupport_identifier[0],
  &_DoCameraCalibration_GetResult_Request_message_typesupport_symbol_names.symbol_name[0],
  &_DoCameraCalibration_GetResult_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DoCameraCalibration_GetResult_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DoCameraCalibration_GetResult_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace calibration

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<calibration::action::DoCameraCalibration_GetResult_Request>()
{
  return &::calibration::action::rosidl_typesupport_cpp::DoCameraCalibration_GetResult_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, calibration, action, DoCameraCalibration_GetResult_Request)() {
  return get_message_type_support_handle<calibration::action::DoCameraCalibration_GetResult_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "calibration/action/detail/do_camera_calibration__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace calibration
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DoCameraCalibration_GetResult_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DoCameraCalibration_GetResult_Response_type_support_ids_t;

static const _DoCameraCalibration_GetResult_Response_type_support_ids_t _DoCameraCalibration_GetResult_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DoCameraCalibration_GetResult_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DoCameraCalibration_GetResult_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DoCameraCalibration_GetResult_Response_type_support_symbol_names_t _DoCameraCalibration_GetResult_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, calibration, action, DoCameraCalibration_GetResult_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, calibration, action, DoCameraCalibration_GetResult_Response)),
  }
};

typedef struct _DoCameraCalibration_GetResult_Response_type_support_data_t
{
  void * data[2];
} _DoCameraCalibration_GetResult_Response_type_support_data_t;

static _DoCameraCalibration_GetResult_Response_type_support_data_t _DoCameraCalibration_GetResult_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DoCameraCalibration_GetResult_Response_message_typesupport_map = {
  2,
  "calibration",
  &_DoCameraCalibration_GetResult_Response_message_typesupport_ids.typesupport_identifier[0],
  &_DoCameraCalibration_GetResult_Response_message_typesupport_symbol_names.symbol_name[0],
  &_DoCameraCalibration_GetResult_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DoCameraCalibration_GetResult_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DoCameraCalibration_GetResult_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace calibration

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<calibration::action::DoCameraCalibration_GetResult_Response>()
{
  return &::calibration::action::rosidl_typesupport_cpp::DoCameraCalibration_GetResult_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, calibration, action, DoCameraCalibration_GetResult_Response)() {
  return get_message_type_support_handle<calibration::action::DoCameraCalibration_GetResult_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "calibration/action/detail/do_camera_calibration__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace calibration
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DoCameraCalibration_GetResult_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DoCameraCalibration_GetResult_type_support_ids_t;

static const _DoCameraCalibration_GetResult_type_support_ids_t _DoCameraCalibration_GetResult_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DoCameraCalibration_GetResult_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DoCameraCalibration_GetResult_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DoCameraCalibration_GetResult_type_support_symbol_names_t _DoCameraCalibration_GetResult_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, calibration, action, DoCameraCalibration_GetResult)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, calibration, action, DoCameraCalibration_GetResult)),
  }
};

typedef struct _DoCameraCalibration_GetResult_type_support_data_t
{
  void * data[2];
} _DoCameraCalibration_GetResult_type_support_data_t;

static _DoCameraCalibration_GetResult_type_support_data_t _DoCameraCalibration_GetResult_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DoCameraCalibration_GetResult_service_typesupport_map = {
  2,
  "calibration",
  &_DoCameraCalibration_GetResult_service_typesupport_ids.typesupport_identifier[0],
  &_DoCameraCalibration_GetResult_service_typesupport_symbol_names.symbol_name[0],
  &_DoCameraCalibration_GetResult_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t DoCameraCalibration_GetResult_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DoCameraCalibration_GetResult_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace calibration

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<calibration::action::DoCameraCalibration_GetResult>()
{
  return &::calibration::action::rosidl_typesupport_cpp::DoCameraCalibration_GetResult_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, calibration, action, DoCameraCalibration_GetResult)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<calibration::action::DoCameraCalibration_GetResult>();
}

#ifdef __cplusplus
}
#endif

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "calibration/action/detail/do_camera_calibration__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace calibration
{

namespace action
{

namespace rosidl_typesupport_cpp
{

typedef struct _DoCameraCalibration_FeedbackMessage_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _DoCameraCalibration_FeedbackMessage_type_support_ids_t;

static const _DoCameraCalibration_FeedbackMessage_type_support_ids_t _DoCameraCalibration_FeedbackMessage_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _DoCameraCalibration_FeedbackMessage_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _DoCameraCalibration_FeedbackMessage_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _DoCameraCalibration_FeedbackMessage_type_support_symbol_names_t _DoCameraCalibration_FeedbackMessage_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, calibration, action, DoCameraCalibration_FeedbackMessage)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, calibration, action, DoCameraCalibration_FeedbackMessage)),
  }
};

typedef struct _DoCameraCalibration_FeedbackMessage_type_support_data_t
{
  void * data[2];
} _DoCameraCalibration_FeedbackMessage_type_support_data_t;

static _DoCameraCalibration_FeedbackMessage_type_support_data_t _DoCameraCalibration_FeedbackMessage_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _DoCameraCalibration_FeedbackMessage_message_typesupport_map = {
  2,
  "calibration",
  &_DoCameraCalibration_FeedbackMessage_message_typesupport_ids.typesupport_identifier[0],
  &_DoCameraCalibration_FeedbackMessage_message_typesupport_symbol_names.symbol_name[0],
  &_DoCameraCalibration_FeedbackMessage_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t DoCameraCalibration_FeedbackMessage_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_DoCameraCalibration_FeedbackMessage_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace calibration

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<calibration::action::DoCameraCalibration_FeedbackMessage>()
{
  return &::calibration::action::rosidl_typesupport_cpp::DoCameraCalibration_FeedbackMessage_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, calibration, action, DoCameraCalibration_FeedbackMessage)() {
  return get_message_type_support_handle<calibration::action::DoCameraCalibration_FeedbackMessage>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

#include "action_msgs/msg/goal_status_array.hpp"
#include "action_msgs/srv/cancel_goal.hpp"
// already included above
// #include "calibration/action/detail/do_camera_calibration__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_runtime_c/action_type_support_struct.h"
#include "rosidl_typesupport_cpp/action_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_cpp/service_type_support.hpp"

namespace calibration
{

namespace action
{

namespace rosidl_typesupport_cpp
{

static rosidl_action_type_support_t DoCameraCalibration_action_type_support_handle = {
  NULL, NULL, NULL, NULL, NULL};

}  // namespace rosidl_typesupport_cpp

}  // namespace action

}  // namespace calibration

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
get_action_type_support_handle<calibration::action::DoCameraCalibration>()
{
  using ::calibration::action::rosidl_typesupport_cpp::DoCameraCalibration_action_type_support_handle;
  // Thread-safe by always writing the same values to the static struct
  DoCameraCalibration_action_type_support_handle.goal_service_type_support = get_service_type_support_handle<::calibration::action::DoCameraCalibration::Impl::SendGoalService>();
  DoCameraCalibration_action_type_support_handle.result_service_type_support = get_service_type_support_handle<::calibration::action::DoCameraCalibration::Impl::GetResultService>();
  DoCameraCalibration_action_type_support_handle.cancel_service_type_support = get_service_type_support_handle<::calibration::action::DoCameraCalibration::Impl::CancelGoalService>();
  DoCameraCalibration_action_type_support_handle.feedback_message_type_support = get_message_type_support_handle<::calibration::action::DoCameraCalibration::Impl::FeedbackMessage>();
  DoCameraCalibration_action_type_support_handle.status_message_type_support = get_message_type_support_handle<::calibration::action::DoCameraCalibration::Impl::GoalStatusMessage>();
  return &DoCameraCalibration_action_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_action_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__ACTION_SYMBOL_NAME(rosidl_typesupport_cpp, calibration, action, DoCameraCalibration)() {
  return ::rosidl_typesupport_cpp::get_action_type_support_handle<calibration::action::DoCameraCalibration>();
}

#ifdef __cplusplus
}
#endif
