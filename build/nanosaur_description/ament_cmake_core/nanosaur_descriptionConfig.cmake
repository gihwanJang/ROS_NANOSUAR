# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_nanosaur_description_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED nanosaur_description_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(nanosaur_description_FOUND FALSE)
  elseif(NOT nanosaur_description_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(nanosaur_description_FOUND FALSE)
  endif()
  return()
endif()
set(_nanosaur_description_CONFIG_INCLUDED TRUE)

# output package information
if(NOT nanosaur_description_FIND_QUIETLY)
  message(STATUS "Found nanosaur_description: 2.1.0 (${nanosaur_description_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'nanosaur_description' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  message(WARNING "${_msg}")
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(nanosaur_description_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "")
foreach(_extra ${_extras})
  include("${nanosaur_description_DIR}/${_extra}")
endforeach()
