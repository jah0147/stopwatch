# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.22

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

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2022.1.2\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2022.1.2\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\jacob_howard\CLionProjects\stopwatch

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\jacob_howard\CLionProjects\stopwatch\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/counter.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/counter.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/counter.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/counter.dir/flags.make

CMakeFiles/counter.dir/main.cpp.obj: CMakeFiles/counter.dir/flags.make
CMakeFiles/counter.dir/main.cpp.obj: ../main.cpp
CMakeFiles/counter.dir/main.cpp.obj: CMakeFiles/counter.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\jacob_howard\CLionProjects\stopwatch\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/counter.dir/main.cpp.obj"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT CMakeFiles/counter.dir/main.cpp.obj -MF CMakeFiles\counter.dir\main.cpp.obj.d -o CMakeFiles\counter.dir\main.cpp.obj -c C:\Users\jacob_howard\CLionProjects\stopwatch\main.cpp

CMakeFiles/counter.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/counter.dir/main.cpp.i"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\jacob_howard\CLionProjects\stopwatch\main.cpp > CMakeFiles\counter.dir\main.cpp.i

CMakeFiles/counter.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/counter.dir/main.cpp.s"
	C:\PROGRA~1\JETBRA~1\CLION2~1.2\bin\mingw\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\jacob_howard\CLionProjects\stopwatch\main.cpp -o CMakeFiles\counter.dir\main.cpp.s

# Object files for target counter
counter_OBJECTS = \
"CMakeFiles/counter.dir/main.cpp.obj"

# External object files for target counter
counter_EXTERNAL_OBJECTS =

counter.exe: CMakeFiles/counter.dir/main.cpp.obj
counter.exe: CMakeFiles/counter.dir/build.make
counter.exe: CMakeFiles/counter.dir/linklibs.rsp
counter.exe: CMakeFiles/counter.dir/objects1.rsp
counter.exe: CMakeFiles/counter.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\jacob_howard\CLionProjects\stopwatch\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable counter.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\counter.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/counter.dir/build: counter.exe
.PHONY : CMakeFiles/counter.dir/build

CMakeFiles/counter.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\counter.dir\cmake_clean.cmake
.PHONY : CMakeFiles/counter.dir/clean

CMakeFiles/counter.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\jacob_howard\CLionProjects\stopwatch C:\Users\jacob_howard\CLionProjects\stopwatch C:\Users\jacob_howard\CLionProjects\stopwatch\cmake-build-debug C:\Users\jacob_howard\CLionProjects\stopwatch\cmake-build-debug C:\Users\jacob_howard\CLionProjects\stopwatch\cmake-build-debug\CMakeFiles\counter.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/counter.dir/depend

