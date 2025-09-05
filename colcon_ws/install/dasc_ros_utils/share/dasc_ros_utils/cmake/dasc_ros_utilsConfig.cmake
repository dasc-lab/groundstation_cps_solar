# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_dasc_ros_utils_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED dasc_ros_utils_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(dasc_ros_utils_FOUND FALSE)
  elseif(NOT dasc_ros_utils_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(dasc_ros_utils_FOUND FALSE)
  endif()
  return()
endif()
set(_dasc_ros_utils_CONFIG_INCLUDED TRUE)

# output package information
if(NOT dasc_ros_utils_FIND_QUIETLY)
  message(STATUS "Found dasc_ros_utils: 0.0.0 (${dasc_ros_utils_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'dasc_ros_utils' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${dasc_ros_utils_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(dasc_ros_utils_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${dasc_ros_utils_DIR}/${_extra}")
endforeach()
