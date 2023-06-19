# CMake generated Testfile for 
# Source directory: /home/jetson/ros_ws/src/ros2_jetson_stats/jetson_stats_msgs
# Build directory: /home/jetson/ros_ws/build/jetson_stats_msgs
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(lint_cmake "/usr/bin/python3" "-u" "/opt/ros/eloquent/share/ament_cmake_test/cmake/run_test.py" "/home/jetson/ros_ws/build/jetson_stats_msgs/test_results/jetson_stats_msgs/lint_cmake.xunit.xml" "--package-name" "jetson_stats_msgs" "--output-file" "/home/jetson/ros_ws/build/jetson_stats_msgs/ament_lint_cmake/lint_cmake.txt" "--command" "/opt/ros/eloquent/bin/ament_lint_cmake" "--xunit-file" "/home/jetson/ros_ws/build/jetson_stats_msgs/test_results/jetson_stats_msgs/lint_cmake.xunit.xml")
set_tests_properties(lint_cmake PROPERTIES  LABELS "lint_cmake;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/jetson/ros_ws/src/ros2_jetson_stats/jetson_stats_msgs")
add_test(xmllint "/usr/bin/python3" "-u" "/opt/ros/eloquent/share/ament_cmake_test/cmake/run_test.py" "/home/jetson/ros_ws/build/jetson_stats_msgs/test_results/jetson_stats_msgs/xmllint.xunit.xml" "--package-name" "jetson_stats_msgs" "--output-file" "/home/jetson/ros_ws/build/jetson_stats_msgs/ament_xmllint/xmllint.txt" "--command" "/opt/ros/eloquent/bin/ament_xmllint" "--xunit-file" "/home/jetson/ros_ws/build/jetson_stats_msgs/test_results/jetson_stats_msgs/xmllint.xunit.xml")
set_tests_properties(xmllint PROPERTIES  LABELS "xmllint;linter" TIMEOUT "60" WORKING_DIRECTORY "/home/jetson/ros_ws/src/ros2_jetson_stats/jetson_stats_msgs")
subdirs("jetson_stats_msgs__py")
