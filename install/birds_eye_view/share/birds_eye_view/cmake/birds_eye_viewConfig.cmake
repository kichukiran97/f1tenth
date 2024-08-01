# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_birds_eye_view_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED birds_eye_view_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(birds_eye_view_FOUND FALSE)
  elseif(NOT birds_eye_view_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(birds_eye_view_FOUND FALSE)
  endif()
  return()
endif()
set(_birds_eye_view_CONFIG_INCLUDED TRUE)

# output package information
if(NOT birds_eye_view_FIND_QUIETLY)
  message(STATUS "Found birds_eye_view: 0.0.0 (${birds_eye_view_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'birds_eye_view' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${birds_eye_view_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(birds_eye_view_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${birds_eye_view_DIR}/${_extra}")
endforeach()
