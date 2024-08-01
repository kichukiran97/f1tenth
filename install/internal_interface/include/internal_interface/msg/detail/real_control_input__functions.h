// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from internal_interface:msg/RealControlInput.idl
// generated code does not contain a copyright notice

#ifndef INTERNAL_INTERFACE__MSG__DETAIL__REAL_CONTROL_INPUT__FUNCTIONS_H_
#define INTERNAL_INTERFACE__MSG__DETAIL__REAL_CONTROL_INPUT__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "internal_interface/msg/rosidl_generator_c__visibility_control.h"

#include "internal_interface/msg/detail/real_control_input__struct.h"

/// Initialize msg/RealControlInput message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * internal_interface__msg__RealControlInput
 * )) before or use
 * internal_interface__msg__RealControlInput__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_internal_interface
bool
internal_interface__msg__RealControlInput__init(internal_interface__msg__RealControlInput * msg);

/// Finalize msg/RealControlInput message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_internal_interface
void
internal_interface__msg__RealControlInput__fini(internal_interface__msg__RealControlInput * msg);

/// Create msg/RealControlInput message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * internal_interface__msg__RealControlInput__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_internal_interface
internal_interface__msg__RealControlInput *
internal_interface__msg__RealControlInput__create();

/// Destroy msg/RealControlInput message.
/**
 * It calls
 * internal_interface__msg__RealControlInput__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_internal_interface
void
internal_interface__msg__RealControlInput__destroy(internal_interface__msg__RealControlInput * msg);

/// Check for msg/RealControlInput message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_internal_interface
bool
internal_interface__msg__RealControlInput__are_equal(const internal_interface__msg__RealControlInput * lhs, const internal_interface__msg__RealControlInput * rhs);

/// Copy a msg/RealControlInput message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_internal_interface
bool
internal_interface__msg__RealControlInput__copy(
  const internal_interface__msg__RealControlInput * input,
  internal_interface__msg__RealControlInput * output);

/// Initialize array of msg/RealControlInput messages.
/**
 * It allocates the memory for the number of elements and calls
 * internal_interface__msg__RealControlInput__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_internal_interface
bool
internal_interface__msg__RealControlInput__Sequence__init(internal_interface__msg__RealControlInput__Sequence * array, size_t size);

/// Finalize array of msg/RealControlInput messages.
/**
 * It calls
 * internal_interface__msg__RealControlInput__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_internal_interface
void
internal_interface__msg__RealControlInput__Sequence__fini(internal_interface__msg__RealControlInput__Sequence * array);

/// Create array of msg/RealControlInput messages.
/**
 * It allocates the memory for the array and calls
 * internal_interface__msg__RealControlInput__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_internal_interface
internal_interface__msg__RealControlInput__Sequence *
internal_interface__msg__RealControlInput__Sequence__create(size_t size);

/// Destroy array of msg/RealControlInput messages.
/**
 * It calls
 * internal_interface__msg__RealControlInput__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_internal_interface
void
internal_interface__msg__RealControlInput__Sequence__destroy(internal_interface__msg__RealControlInput__Sequence * array);

/// Check for msg/RealControlInput message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_internal_interface
bool
internal_interface__msg__RealControlInput__Sequence__are_equal(const internal_interface__msg__RealControlInput__Sequence * lhs, const internal_interface__msg__RealControlInput__Sequence * rhs);

/// Copy an array of msg/RealControlInput messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_internal_interface
bool
internal_interface__msg__RealControlInput__Sequence__copy(
  const internal_interface__msg__RealControlInput__Sequence * input,
  internal_interface__msg__RealControlInput__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // INTERNAL_INTERFACE__MSG__DETAIL__REAL_CONTROL_INPUT__FUNCTIONS_H_
