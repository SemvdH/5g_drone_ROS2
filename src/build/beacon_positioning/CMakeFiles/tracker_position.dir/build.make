# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = /home/ubuntu/ros2_ws/src/beacon_positioning

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ubuntu/ros2_ws/src/build/beacon_positioning

# Include any dependencies generated for this target.
include CMakeFiles/tracker_position.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/tracker_position.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/tracker_position.dir/flags.make

CMakeFiles/tracker_position.dir/src/tracker_position.cpp.o: CMakeFiles/tracker_position.dir/flags.make
CMakeFiles/tracker_position.dir/src/tracker_position.cpp.o: /home/ubuntu/ros2_ws/src/beacon_positioning/src/tracker_position.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/ros2_ws/src/build/beacon_positioning/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/tracker_position.dir/src/tracker_position.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/tracker_position.dir/src/tracker_position.cpp.o -c /home/ubuntu/ros2_ws/src/beacon_positioning/src/tracker_position.cpp

CMakeFiles/tracker_position.dir/src/tracker_position.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/tracker_position.dir/src/tracker_position.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/ros2_ws/src/beacon_positioning/src/tracker_position.cpp > CMakeFiles/tracker_position.dir/src/tracker_position.cpp.i

CMakeFiles/tracker_position.dir/src/tracker_position.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/tracker_position.dir/src/tracker_position.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/ros2_ws/src/beacon_positioning/src/tracker_position.cpp -o CMakeFiles/tracker_position.dir/src/tracker_position.cpp.s

# Object files for target tracker_position
tracker_position_OBJECTS = \
"CMakeFiles/tracker_position.dir/src/tracker_position.cpp.o"

# External object files for target tracker_position
tracker_position_EXTERNAL_OBJECTS =

tracker_position: CMakeFiles/tracker_position.dir/src/tracker_position.cpp.o
tracker_position: CMakeFiles/tracker_position.dir/build.make
tracker_position: /opt/ros/foxy/lib/librclcpp.so
tracker_position: /opt/ros/foxy/lib/liblibstatistics_collector.so
tracker_position: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_introspection_c.so
tracker_position: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_generator_c.so
tracker_position: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_c.so
tracker_position: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_introspection_cpp.so
tracker_position: /opt/ros/foxy/lib/liblibstatistics_collector_test_msgs__rosidl_typesupport_cpp.so
tracker_position: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_introspection_c.so
tracker_position: /opt/ros/foxy/lib/libstd_msgs__rosidl_generator_c.so
tracker_position: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_c.so
tracker_position: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_introspection_cpp.so
tracker_position: /opt/ros/foxy/lib/libstd_msgs__rosidl_typesupport_cpp.so
tracker_position: /opt/ros/foxy/lib/librcl.so
tracker_position: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_introspection_c.so
tracker_position: /opt/ros/foxy/lib/librcl_interfaces__rosidl_generator_c.so
tracker_position: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_c.so
tracker_position: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_introspection_cpp.so
tracker_position: /opt/ros/foxy/lib/librcl_interfaces__rosidl_typesupport_cpp.so
tracker_position: /opt/ros/foxy/lib/librmw_implementation.so
tracker_position: /opt/ros/foxy/lib/librmw.so
tracker_position: /opt/ros/foxy/lib/librcl_logging_spdlog.so
tracker_position: /usr/lib/aarch64-linux-gnu/libspdlog.so.1.5.0
tracker_position: /opt/ros/foxy/lib/librcl_yaml_param_parser.so
tracker_position: /opt/ros/foxy/lib/libyaml.so
tracker_position: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_introspection_c.so
tracker_position: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_generator_c.so
tracker_position: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_c.so
tracker_position: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_introspection_cpp.so
tracker_position: /opt/ros/foxy/lib/librosgraph_msgs__rosidl_typesupport_cpp.so
tracker_position: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_introspection_c.so
tracker_position: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_generator_c.so
tracker_position: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_c.so
tracker_position: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_introspection_cpp.so
tracker_position: /opt/ros/foxy/lib/libstatistics_msgs__rosidl_typesupport_cpp.so
tracker_position: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_c.so
tracker_position: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_generator_c.so
tracker_position: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_c.so
tracker_position: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_introspection_cpp.so
tracker_position: /opt/ros/foxy/lib/librosidl_typesupport_introspection_cpp.so
tracker_position: /opt/ros/foxy/lib/librosidl_typesupport_introspection_c.so
tracker_position: /opt/ros/foxy/lib/libbuiltin_interfaces__rosidl_typesupport_cpp.so
tracker_position: /opt/ros/foxy/lib/librosidl_typesupport_cpp.so
tracker_position: /opt/ros/foxy/lib/librosidl_typesupport_c.so
tracker_position: /opt/ros/foxy/lib/librcpputils.so
tracker_position: /opt/ros/foxy/lib/librosidl_runtime_c.so
tracker_position: /opt/ros/foxy/lib/librcutils.so
tracker_position: /opt/ros/foxy/lib/libtracetools.so
tracker_position: CMakeFiles/tracker_position.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ubuntu/ros2_ws/src/build/beacon_positioning/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable tracker_position"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/tracker_position.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/tracker_position.dir/build: tracker_position

.PHONY : CMakeFiles/tracker_position.dir/build

CMakeFiles/tracker_position.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/tracker_position.dir/cmake_clean.cmake
.PHONY : CMakeFiles/tracker_position.dir/clean

CMakeFiles/tracker_position.dir/depend:
	cd /home/ubuntu/ros2_ws/src/build/beacon_positioning && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/ros2_ws/src/beacon_positioning /home/ubuntu/ros2_ws/src/beacon_positioning /home/ubuntu/ros2_ws/src/build/beacon_positioning /home/ubuntu/ros2_ws/src/build/beacon_positioning /home/ubuntu/ros2_ws/src/build/beacon_positioning/CMakeFiles/tracker_position.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/tracker_position.dir/depend

