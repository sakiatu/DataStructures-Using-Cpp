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
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2019.3.3\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2019.3.3\bin\cmake\win\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "E:\DataStructures using C++\dataStructures"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "E:\DataStructures using C++\dataStructures\cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/dataStructures.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/dataStructures.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/dataStructures.dir/flags.make

CMakeFiles/dataStructures.dir/main.cpp.obj: CMakeFiles/dataStructures.dir/flags.make
CMakeFiles/dataStructures.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="E:\DataStructures using C++\dataStructures\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/dataStructures.dir/main.cpp.obj"
	C:\PROGRA~1\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\dataStructures.dir\main.cpp.obj -c "E:\DataStructures using C++\dataStructures\main.cpp"

CMakeFiles/dataStructures.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/dataStructures.dir/main.cpp.i"
	C:\PROGRA~1\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "E:\DataStructures using C++\dataStructures\main.cpp" > CMakeFiles\dataStructures.dir\main.cpp.i

CMakeFiles/dataStructures.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/dataStructures.dir/main.cpp.s"
	C:\PROGRA~1\mingw-w64\x86_64-8.1.0-posix-seh-rt_v6-rev0\mingw64\bin\g++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "E:\DataStructures using C++\dataStructures\main.cpp" -o CMakeFiles\dataStructures.dir\main.cpp.s

# Object files for target dataStructures
dataStructures_OBJECTS = \
"CMakeFiles/dataStructures.dir/main.cpp.obj"

# External object files for target dataStructures
dataStructures_EXTERNAL_OBJECTS =

dataStructures.exe: CMakeFiles/dataStructures.dir/main.cpp.obj
dataStructures.exe: CMakeFiles/dataStructures.dir/build.make
dataStructures.exe: CMakeFiles/dataStructures.dir/linklibs.rsp
dataStructures.exe: CMakeFiles/dataStructures.dir/objects1.rsp
dataStructures.exe: CMakeFiles/dataStructures.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="E:\DataStructures using C++\dataStructures\cmake-build-debug\CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable dataStructures.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\dataStructures.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/dataStructures.dir/build: dataStructures.exe

.PHONY : CMakeFiles/dataStructures.dir/build

CMakeFiles/dataStructures.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\dataStructures.dir\cmake_clean.cmake
.PHONY : CMakeFiles/dataStructures.dir/clean

CMakeFiles/dataStructures.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" "E:\DataStructures using C++\dataStructures" "E:\DataStructures using C++\dataStructures" "E:\DataStructures using C++\dataStructures\cmake-build-debug" "E:\DataStructures using C++\dataStructures\cmake-build-debug" "E:\DataStructures using C++\dataStructures\cmake-build-debug\CMakeFiles\dataStructures.dir\DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/dataStructures.dir/depend
