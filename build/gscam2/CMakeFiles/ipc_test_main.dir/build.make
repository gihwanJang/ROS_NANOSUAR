# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/jetson/ros_ws/src/gscam2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/jetson/ros_ws/build/gscam2

# Include any dependencies generated for this target.
include CMakeFiles/ipc_test_main.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ipc_test_main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ipc_test_main.dir/flags.make

CMakeFiles/ipc_test_main.dir/src/ipc_test_main.cpp.o: CMakeFiles/ipc_test_main.dir/flags.make
CMakeFiles/ipc_test_main.dir/src/ipc_test_main.cpp.o: /home/jetson/ros_ws/src/gscam2/src/ipc_test_main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/jetson/ros_ws/build/gscam2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/ipc_test_main.dir/src/ipc_test_main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/ipc_test_main.dir/src/ipc_test_main.cpp.o -c /home/jetson/ros_ws/src/gscam2/src/ipc_test_main.cpp

CMakeFiles/ipc_test_main.dir/src/ipc_test_main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/ipc_test_main.dir/src/ipc_test_main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/jetson/ros_ws/src/gscam2/src/ipc_test_main.cpp > CMakeFiles/ipc_test_main.dir/src/ipc_test_main.cpp.i

CMakeFiles/ipc_test_main.dir/src/ipc_test_main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/ipc_test_main.dir/src/ipc_test_main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/jetson/ros_ws/src/gscam2/src/ipc_test_main.cpp -o CMakeFiles/ipc_test_main.dir/src/ipc_test_main.cpp.s

CMakeFiles/ipc_test_main.dir/src/ipc_test_main.cpp.o.requires:

.PHONY : CMakeFiles/ipc_test_main.dir/src/ipc_test_main.cpp.o.requires

CMakeFiles/ipc_test_main.dir/src/ipc_test_main.cpp.o.provides: CMakeFiles/ipc_test_main.dir/src/ipc_test_main.cpp.o.requires
	$(MAKE) -f CMakeFiles/ipc_test_main.dir/build.make CMakeFiles/ipc_test_main.dir/src/ipc_test_main.cpp.o.provides.build
.PHONY : CMakeFiles/ipc_test_main.dir/src/ipc_test_main.cpp.o.provides

CMakeFiles/ipc_test_main.dir/src/ipc_test_main.cpp.o.provides.build: CMakeFiles/ipc_test_main.dir/src/ipc_test_main.cpp.o


# Object files for target ipc_test_main
ipc_test_main_OBJECTS = \
"CMakeFiles/ipc_test_main.dir/src/ipc_test_main.cpp.o"

# External object files for target ipc_test_main
ipc_test_main_EXTERNAL_OBJECTS =

ipc_test_main: CMakeFiles/ipc_test_main.dir/src/ipc_test_main.cpp.o
ipc_test_main: CMakeFiles/ipc_test_main.dir/build.make
ipc_test_main: libgscam_node.so
ipc_test_main: libsubscriber_node.so
ipc_test_main: /opt/ros/eloquent/lib/librclcpp.so
ipc_test_main: /opt/ros/eloquent/lib/librcl.so
ipc_test_main: /opt/ros/eloquent/lib/librcl_interfaces__rosidl_typesupport_c.so
ipc_test_main: /opt/ros/eloquent/lib/librcl_interfaces__rosidl_typesupport_cpp.so
ipc_test_main: /opt/ros/eloquent/lib/librcl_interfaces__rosidl_typesupport_fastrtps_c.so
ipc_test_main: /opt/ros/eloquent/lib/librcl_interfaces__rosidl_generator_c.so
ipc_test_main: /opt/ros/eloquent/lib/librcl_interfaces__rosidl_typesupport_fastrtps_cpp.so
ipc_test_main: /opt/ros/eloquent/lib/librcl_interfaces__rosidl_typesupport_introspection_c.so
ipc_test_main: /opt/ros/eloquent/lib/librcl_interfaces__rosidl_typesupport_introspection_cpp.so
ipc_test_main: /opt/ros/eloquent/lib/librmw_implementation.so
ipc_test_main: /opt/ros/eloquent/lib/librmw.so
ipc_test_main: /opt/ros/eloquent/lib/librcutils.so
ipc_test_main: /opt/ros/eloquent/lib/librcl_logging_spdlog.so
ipc_test_main: /opt/ros/eloquent/lib/librcpputils.so
ipc_test_main: /opt/ros/eloquent/lib/libbuiltin_interfaces__rosidl_typesupport_c.so
ipc_test_main: /opt/ros/eloquent/lib/libbuiltin_interfaces__rosidl_typesupport_cpp.so
ipc_test_main: /opt/ros/eloquent/lib/libbuiltin_interfaces__rosidl_typesupport_fastrtps_c.so
ipc_test_main: /opt/ros/eloquent/lib/libbuiltin_interfaces__rosidl_generator_c.so
ipc_test_main: /opt/ros/eloquent/lib/libbuiltin_interfaces__rosidl_typesupport_fastrtps_cpp.so
ipc_test_main: /opt/ros/eloquent/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_c.so
ipc_test_main: /opt/ros/eloquent/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_cpp.so
ipc_test_main: /opt/ros/eloquent/lib/librosidl_typesupport_introspection_c.so
ipc_test_main: /opt/ros/eloquent/lib/librosidl_typesupport_introspection_cpp.so
ipc_test_main: /opt/ros/eloquent/lib/librosgraph_msgs__rosidl_generator_c.so
ipc_test_main: /opt/ros/eloquent/lib/librosgraph_msgs__rosidl_typesupport_c.so
ipc_test_main: /opt/ros/eloquent/lib/librosgraph_msgs__rosidl_typesupport_cpp.so
ipc_test_main: /opt/ros/eloquent/lib/librosgraph_msgs__rosidl_typesupport_introspection_c.so
ipc_test_main: /opt/ros/eloquent/lib/librosgraph_msgs__rosidl_typesupport_introspection_cpp.so
ipc_test_main: /opt/ros/eloquent/lib/librosgraph_msgs__rosidl_typesupport_fastrtps_c.so
ipc_test_main: /opt/ros/eloquent/lib/librosgraph_msgs__rosidl_typesupport_fastrtps_cpp.so
ipc_test_main: /opt/ros/eloquent/lib/librosidl_typesupport_cpp.so
ipc_test_main: /opt/ros/eloquent/lib/librosidl_typesupport_c.so
ipc_test_main: /opt/ros/eloquent/lib/librosidl_generator_c.so
ipc_test_main: /opt/ros/eloquent/lib/librcl_yaml_param_parser.so
ipc_test_main: /opt/ros/eloquent/lib/libtracetools.so
ipc_test_main: /opt/ros/eloquent/lib/libcamera_calibration_parsers.so
ipc_test_main: /opt/ros/eloquent/opt/yaml_cpp_vendor/lib/libyaml-cpp.so.0.6.2
ipc_test_main: /opt/ros/eloquent/lib/libcamera_info_manager.so
ipc_test_main: /usr/lib/libPocoFoundation.so.50
ipc_test_main: /usr/lib/aarch64-linux-gnu/libpcre.so
ipc_test_main: /usr/lib/aarch64-linux-gnu/libz.so
ipc_test_main: /opt/ros/eloquent/lib/libconsole_bridge.so.0.4
ipc_test_main: /opt/ros/eloquent/lib/libclass_loader.so
ipc_test_main: /opt/ros/eloquent/lib/librclcpp.so
ipc_test_main: /opt/ros/eloquent/lib/librcl.so
ipc_test_main: /opt/ros/eloquent/lib/librcl_interfaces__rosidl_typesupport_c.so
ipc_test_main: /opt/ros/eloquent/lib/librcl_interfaces__rosidl_typesupport_cpp.so
ipc_test_main: /opt/ros/eloquent/lib/librcl_interfaces__rosidl_typesupport_fastrtps_c.so
ipc_test_main: /opt/ros/eloquent/lib/librcl_interfaces__rosidl_generator_c.so
ipc_test_main: /opt/ros/eloquent/lib/librcl_interfaces__rosidl_typesupport_fastrtps_cpp.so
ipc_test_main: /opt/ros/eloquent/lib/librcl_interfaces__rosidl_typesupport_introspection_c.so
ipc_test_main: /opt/ros/eloquent/lib/librcl_interfaces__rosidl_typesupport_introspection_cpp.so
ipc_test_main: /opt/ros/eloquent/lib/librmw_implementation.so
ipc_test_main: /opt/ros/eloquent/lib/librmw.so
ipc_test_main: /opt/ros/eloquent/lib/librcutils.so
ipc_test_main: /opt/ros/eloquent/lib/librcl_logging_spdlog.so
ipc_test_main: /opt/ros/eloquent/lib/librcpputils.so
ipc_test_main: /opt/ros/eloquent/lib/librosgraph_msgs__rosidl_generator_c.so
ipc_test_main: /opt/ros/eloquent/lib/librosgraph_msgs__rosidl_typesupport_c.so
ipc_test_main: /opt/ros/eloquent/lib/librosgraph_msgs__rosidl_typesupport_cpp.so
ipc_test_main: /opt/ros/eloquent/lib/librosgraph_msgs__rosidl_typesupport_introspection_c.so
ipc_test_main: /opt/ros/eloquent/lib/librosgraph_msgs__rosidl_typesupport_introspection_cpp.so
ipc_test_main: /opt/ros/eloquent/lib/librosgraph_msgs__rosidl_typesupport_fastrtps_c.so
ipc_test_main: /opt/ros/eloquent/lib/librosgraph_msgs__rosidl_typesupport_fastrtps_cpp.so
ipc_test_main: /opt/ros/eloquent/lib/librcl_yaml_param_parser.so
ipc_test_main: /opt/ros/eloquent/lib/libtracetools.so
ipc_test_main: /opt/ros/eloquent/lib/libgeometry_msgs__rosidl_typesupport_c.so
ipc_test_main: /opt/ros/eloquent/lib/libgeometry_msgs__rosidl_typesupport_cpp.so
ipc_test_main: /opt/ros/eloquent/lib/libgeometry_msgs__rosidl_typesupport_fastrtps_c.so
ipc_test_main: /opt/ros/eloquent/lib/libgeometry_msgs__rosidl_generator_c.so
ipc_test_main: /opt/ros/eloquent/lib/libgeometry_msgs__rosidl_typesupport_fastrtps_cpp.so
ipc_test_main: /opt/ros/eloquent/lib/libgeometry_msgs__rosidl_typesupport_introspection_c.so
ipc_test_main: /opt/ros/eloquent/lib/libgeometry_msgs__rosidl_typesupport_introspection_cpp.so
ipc_test_main: /opt/ros/eloquent/lib/libbuiltin_interfaces__rosidl_typesupport_c.so
ipc_test_main: /opt/ros/eloquent/lib/libbuiltin_interfaces__rosidl_typesupport_cpp.so
ipc_test_main: /opt/ros/eloquent/lib/libbuiltin_interfaces__rosidl_typesupport_fastrtps_c.so
ipc_test_main: /opt/ros/eloquent/lib/libbuiltin_interfaces__rosidl_generator_c.so
ipc_test_main: /opt/ros/eloquent/lib/libbuiltin_interfaces__rosidl_typesupport_fastrtps_cpp.so
ipc_test_main: /opt/ros/eloquent/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_c.so
ipc_test_main: /opt/ros/eloquent/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_cpp.so
ipc_test_main: /opt/ros/eloquent/lib/libstd_msgs__rosidl_generator_c.so
ipc_test_main: /opt/ros/eloquent/lib/libstd_msgs__rosidl_typesupport_c.so
ipc_test_main: /opt/ros/eloquent/lib/libstd_msgs__rosidl_typesupport_cpp.so
ipc_test_main: /opt/ros/eloquent/lib/libstd_msgs__rosidl_typesupport_introspection_c.so
ipc_test_main: /opt/ros/eloquent/lib/libstd_msgs__rosidl_typesupport_introspection_cpp.so
ipc_test_main: /opt/ros/eloquent/lib/libstd_msgs__rosidl_typesupport_fastrtps_c.so
ipc_test_main: /opt/ros/eloquent/lib/libstd_msgs__rosidl_typesupport_fastrtps_cpp.so
ipc_test_main: /opt/ros/eloquent/lib/librosidl_typesupport_introspection_c.so
ipc_test_main: /opt/ros/eloquent/lib/librosidl_typesupport_introspection_cpp.so
ipc_test_main: /opt/ros/eloquent/lib/librosidl_typesupport_cpp.so
ipc_test_main: /opt/ros/eloquent/lib/librosidl_typesupport_c.so
ipc_test_main: /opt/ros/eloquent/lib/librosidl_generator_c.so
ipc_test_main: /opt/ros/eloquent/lib/libsensor_msgs__rosidl_generator_c.so
ipc_test_main: /opt/ros/eloquent/lib/libsensor_msgs__rosidl_typesupport_c.so
ipc_test_main: /opt/ros/eloquent/lib/libsensor_msgs__rosidl_typesupport_cpp.so
ipc_test_main: /opt/ros/eloquent/lib/libsensor_msgs__rosidl_typesupport_introspection_c.so
ipc_test_main: /opt/ros/eloquent/lib/libsensor_msgs__rosidl_typesupport_introspection_cpp.so
ipc_test_main: /opt/ros/eloquent/lib/libsensor_msgs__rosidl_typesupport_fastrtps_c.so
ipc_test_main: /opt/ros/eloquent/lib/libsensor_msgs__rosidl_typesupport_fastrtps_cpp.so
ipc_test_main: CMakeFiles/ipc_test_main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/jetson/ros_ws/build/gscam2/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable ipc_test_main"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ipc_test_main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ipc_test_main.dir/build: ipc_test_main

.PHONY : CMakeFiles/ipc_test_main.dir/build

CMakeFiles/ipc_test_main.dir/requires: CMakeFiles/ipc_test_main.dir/src/ipc_test_main.cpp.o.requires

.PHONY : CMakeFiles/ipc_test_main.dir/requires

CMakeFiles/ipc_test_main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ipc_test_main.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ipc_test_main.dir/clean

CMakeFiles/ipc_test_main.dir/depend:
	cd /home/jetson/ros_ws/build/gscam2 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/jetson/ros_ws/src/gscam2 /home/jetson/ros_ws/src/gscam2 /home/jetson/ros_ws/build/gscam2 /home/jetson/ros_ws/build/gscam2 /home/jetson/ros_ws/build/gscam2/CMakeFiles/ipc_test_main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ipc_test_main.dir/depend

