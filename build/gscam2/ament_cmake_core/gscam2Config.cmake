# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_gscam2_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED gscam2_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(gscam2_FOUND FALSE)
  elseif(NOT gscam2_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(gscam2_FOUND FALSE)
  endif()
  return()
endif()
set(_gscam2_CONFIG_INCLUDED TRUE)

# output package information
if(NOT gscam2_FIND_QUIETLY)
  message(STATUS "Found gscam2: 0.0.2 (${gscam2_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'gscam2' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(gscam2_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_dependencies-extras.cmake;ament_cmake_export_include_directories-extras.cmake;ament_cmake_export_interfaces-extras.cmake;ament_cmake_export_libraries-extras.cmake")
foreach(_extra ${_extras})
  include("${gscam2_DIR}/${_extra}")
endforeach()
