# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.31

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/juhwan/Desktop/SLAM_book/ch5/rgbd

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/juhwan/Desktop/SLAM_book/ch5/rgbd/build

# Include any dependencies generated for this target.
include CMakeFiles/joinMap.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/joinMap.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/joinMap.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/joinMap.dir/flags.make

CMakeFiles/joinMap.dir/codegen:
.PHONY : CMakeFiles/joinMap.dir/codegen

CMakeFiles/joinMap.dir/joinMap.o: CMakeFiles/joinMap.dir/flags.make
CMakeFiles/joinMap.dir/joinMap.o: /home/juhwan/Desktop/SLAM_book/ch5/rgbd/joinMap.cpp
CMakeFiles/joinMap.dir/joinMap.o: CMakeFiles/joinMap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --progress-dir=/home/juhwan/Desktop/SLAM_book/ch5/rgbd/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/joinMap.dir/joinMap.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/joinMap.dir/joinMap.o -MF CMakeFiles/joinMap.dir/joinMap.o.d -o CMakeFiles/joinMap.dir/joinMap.o -c /home/juhwan/Desktop/SLAM_book/ch5/rgbd/joinMap.cpp

CMakeFiles/joinMap.dir/joinMap.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Preprocessing CXX source to CMakeFiles/joinMap.dir/joinMap.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/juhwan/Desktop/SLAM_book/ch5/rgbd/joinMap.cpp > CMakeFiles/joinMap.dir/joinMap.i

CMakeFiles/joinMap.dir/joinMap.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green "Compiling CXX source to assembly CMakeFiles/joinMap.dir/joinMap.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/juhwan/Desktop/SLAM_book/ch5/rgbd/joinMap.cpp -o CMakeFiles/joinMap.dir/joinMap.s

# Object files for target joinMap
joinMap_OBJECTS = \
"CMakeFiles/joinMap.dir/joinMap.o"

# External object files for target joinMap
joinMap_EXTERNAL_OBJECTS =

joinMap: CMakeFiles/joinMap.dir/joinMap.o
joinMap: CMakeFiles/joinMap.dir/build.make
joinMap: /usr/local/lib/libopencv_gapi.so.4.10.0
joinMap: /usr/local/lib/libopencv_highgui.so.4.10.0
joinMap: /usr/local/lib/libopencv_ml.so.4.10.0
joinMap: /usr/local/lib/libopencv_objdetect.so.4.10.0
joinMap: /usr/local/lib/libopencv_photo.so.4.10.0
joinMap: /usr/local/lib/libopencv_stitching.so.4.10.0
joinMap: /usr/local/lib/libopencv_video.so.4.10.0
joinMap: /usr/local/lib/libopencv_videoio.so.4.10.0
joinMap: /usr/local/lib/libpangolin.so
joinMap: /usr/local/lib/libopencv_imgcodecs.so.4.10.0
joinMap: /usr/local/lib/libopencv_dnn.so.4.10.0
joinMap: /usr/local/lib/libopencv_calib3d.so.4.10.0
joinMap: /usr/local/lib/libopencv_features2d.so.4.10.0
joinMap: /usr/local/lib/libopencv_flann.so.4.10.0
joinMap: /usr/local/lib/libopencv_imgproc.so.4.10.0
joinMap: /usr/local/lib/libopencv_core.so.4.10.0
joinMap: /usr/lib/x86_64-linux-gnu/libGL.so
joinMap: /usr/lib/x86_64-linux-gnu/libGLU.so
joinMap: /usr/lib/x86_64-linux-gnu/libGLEW.so
joinMap: /usr/lib/x86_64-linux-gnu/libSM.so
joinMap: /usr/lib/x86_64-linux-gnu/libICE.so
joinMap: /usr/lib/x86_64-linux-gnu/libX11.so
joinMap: /usr/lib/x86_64-linux-gnu/libXext.so
joinMap: /usr/lib/x86_64-linux-gnu/libpython3.10.so
joinMap: /usr/lib/x86_64-linux-gnu/libpng.so
joinMap: /usr/lib/x86_64-linux-gnu/libz.so
joinMap: /usr/lib/x86_64-linux-gnu/libjpeg.so
joinMap: /usr/lib/x86_64-linux-gnu/libtiff.so
joinMap: CMakeFiles/joinMap.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color "--switch=$(COLOR)" --green --bold --progress-dir=/home/juhwan/Desktop/SLAM_book/ch5/rgbd/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable joinMap"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/joinMap.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/joinMap.dir/build: joinMap
.PHONY : CMakeFiles/joinMap.dir/build

CMakeFiles/joinMap.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/joinMap.dir/cmake_clean.cmake
.PHONY : CMakeFiles/joinMap.dir/clean

CMakeFiles/joinMap.dir/depend:
	cd /home/juhwan/Desktop/SLAM_book/ch5/rgbd/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/juhwan/Desktop/SLAM_book/ch5/rgbd /home/juhwan/Desktop/SLAM_book/ch5/rgbd /home/juhwan/Desktop/SLAM_book/ch5/rgbd/build /home/juhwan/Desktop/SLAM_book/ch5/rgbd/build /home/juhwan/Desktop/SLAM_book/ch5/rgbd/build/CMakeFiles/joinMap.dir/DependInfo.cmake "--color=$(COLOR)"
.PHONY : CMakeFiles/joinMap.dir/depend

