# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.15

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.2.4\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.2.4\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\anna\CLionProjects\Programming2sem\lab4

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\anna\CLionProjects\Programming2sem\lab4\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/lab4.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/lab4.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/lab4.dir/flags.make

CMakeFiles/lab4.dir/main.cpp.obj: CMakeFiles/lab4.dir/flags.make
CMakeFiles/lab4.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\anna\CLionProjects\Programming2sem\lab4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/lab4.dir/main.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\lab4.dir\main.cpp.obj -c C:\Users\anna\CLionProjects\Programming2sem\lab4\main.cpp

CMakeFiles/lab4.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab4.dir/main.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\anna\CLionProjects\Programming2sem\lab4\main.cpp > CMakeFiles\lab4.dir\main.cpp.i

CMakeFiles/lab4.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab4.dir/main.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\anna\CLionProjects\Programming2sem\lab4\main.cpp -o CMakeFiles\lab4.dir\main.cpp.s

CMakeFiles/lab4.dir/Segment.cpp.obj: CMakeFiles/lab4.dir/flags.make
CMakeFiles/lab4.dir/Segment.cpp.obj: ../Segment.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\anna\CLionProjects\Programming2sem\lab4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/lab4.dir/Segment.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\lab4.dir\Segment.cpp.obj -c C:\Users\anna\CLionProjects\Programming2sem\lab4\Segment.cpp

CMakeFiles/lab4.dir/Segment.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab4.dir/Segment.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\anna\CLionProjects\Programming2sem\lab4\Segment.cpp > CMakeFiles\lab4.dir\Segment.cpp.i

CMakeFiles/lab4.dir/Segment.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab4.dir/Segment.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\anna\CLionProjects\Programming2sem\lab4\Segment.cpp -o CMakeFiles\lab4.dir\Segment.cpp.s

CMakeFiles/lab4.dir/Hexagon.cpp.obj: CMakeFiles/lab4.dir/flags.make
CMakeFiles/lab4.dir/Hexagon.cpp.obj: ../Hexagon.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\anna\CLionProjects\Programming2sem\lab4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/lab4.dir/Hexagon.cpp.obj"
	C:\MinGW\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\lab4.dir\Hexagon.cpp.obj -c C:\Users\anna\CLionProjects\Programming2sem\lab4\Hexagon.cpp

CMakeFiles/lab4.dir/Hexagon.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/lab4.dir/Hexagon.cpp.i"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\anna\CLionProjects\Programming2sem\lab4\Hexagon.cpp > CMakeFiles\lab4.dir\Hexagon.cpp.i

CMakeFiles/lab4.dir/Hexagon.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/lab4.dir/Hexagon.cpp.s"
	C:\MinGW\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\anna\CLionProjects\Programming2sem\lab4\Hexagon.cpp -o CMakeFiles\lab4.dir\Hexagon.cpp.s

# Object files for target lab4
lab4_OBJECTS = \
"CMakeFiles/lab4.dir/main.cpp.obj" \
"CMakeFiles/lab4.dir/Segment.cpp.obj" \
"CMakeFiles/lab4.dir/Hexagon.cpp.obj"

# External object files for target lab4
lab4_EXTERNAL_OBJECTS =

lab4.exe: CMakeFiles/lab4.dir/main.cpp.obj
lab4.exe: CMakeFiles/lab4.dir/Segment.cpp.obj
lab4.exe: CMakeFiles/lab4.dir/Hexagon.cpp.obj
lab4.exe: CMakeFiles/lab4.dir/build.make
lab4.exe: CMakeFiles/lab4.dir/linklibs.rsp
lab4.exe: CMakeFiles/lab4.dir/objects1.rsp
lab4.exe: CMakeFiles/lab4.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\anna\CLionProjects\Programming2sem\lab4\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Linking CXX executable lab4.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\lab4.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/lab4.dir/build: lab4.exe

.PHONY : CMakeFiles/lab4.dir/build

CMakeFiles/lab4.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\lab4.dir\cmake_clean.cmake
.PHONY : CMakeFiles/lab4.dir/clean

CMakeFiles/lab4.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\anna\CLionProjects\Programming2sem\lab4 C:\Users\anna\CLionProjects\Programming2sem\lab4 C:\Users\anna\CLionProjects\Programming2sem\lab4\cmake-build-debug C:\Users\anna\CLionProjects\Programming2sem\lab4\cmake-build-debug C:\Users\anna\CLionProjects\Programming2sem\lab4\cmake-build-debug\CMakeFiles\lab4.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/lab4.dir/depend

