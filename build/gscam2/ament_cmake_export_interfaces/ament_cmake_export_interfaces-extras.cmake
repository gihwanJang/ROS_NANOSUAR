# generated from ament_cmake_export_interfaces/cmake/ament_cmake_export_interfaces-extras.cmake.in

set(_exported_interfaces "export_gscam_node;export_subscriber_node")

# include all exported interfaces
if(NOT _exported_interfaces STREQUAL "")
  foreach(_interface ${_exported_interfaces})
    include("${gscam2_DIR}/${_interface}Export.cmake")
    list(APPEND gscam2_INTERFACES "gscam2::${_interface}")
  endforeach()
endif()
