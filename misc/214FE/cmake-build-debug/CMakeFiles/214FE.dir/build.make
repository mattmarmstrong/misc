# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

SHELL = cmd.exe

# The CMake executable.
CMAKE_COMMAND = "C:\Program Files\JetBrains\CLion 2020.2.1\bin\cmake\win\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\JetBrains\CLion 2020.2.1\bin\cmake\win\bin\cmake.exe" -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\matta\CLionProjects\214FE

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\matta\CLionProjects\214FE\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/214FE.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/214FE.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/214FE.dir/flags.make

CMakeFiles/214FE.dir/question1.c.obj: CMakeFiles/214FE.dir/flags.make
CMakeFiles/214FE.dir/question1.c.obj: ../question1.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\matta\CLionProjects\214FE\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/214FE.dir/question1.c.obj"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles\214FE.dir\question1.c.obj   -c C:\Users\matta\CLionProjects\214FE\question1.c

CMakeFiles/214FE.dir/question1.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/214FE.dir/question1.c.i"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E C:\Users\matta\CLionProjects\214FE\question1.c > CMakeFiles\214FE.dir\question1.c.i

CMakeFiles/214FE.dir/question1.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/214FE.dir/question1.c.s"
	C:\PROGRA~2\MINGW-~1\I686-8~1.0-P\mingw32\bin\gcc.exe $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S C:\Users\matta\CLionProjects\214FE\question1.c -o CMakeFiles\214FE.dir\question1.c.s

# Object files for target 214FE
214FE_OBJECTS = \
"CMakeFiles/214FE.dir/question1.c.obj"

# External object files for target 214FE
214FE_EXTERNAL_OBJECTS =

214FE.exe: CMakeFiles/214FE.dir/question1.c.obj
214FE.exe: CMakeFiles/214FE.dir/build.make
214FE.exe: CMakeFiles/214FE.dir/linklibs.rsp
214FE.exe: CMakeFiles/214FE.dir/objects1.rsp
214FE.exe: CMakeFiles/214FE.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\matta\CLionProjects\214FE\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable 214FE.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\214FE.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/214FE.dir/build: 214FE.exe

.PHONY : CMakeFiles/214FE.dir/build

CMakeFiles/214FE.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\214FE.dir\cmake_clean.cmake
.PHONY : CMakeFiles/214FE.dir/clean

CMakeFiles/214FE.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\matta\CLionProjects\214FE C:\Users\matta\CLionProjects\214FE C:\Users\matta\CLionProjects\214FE\cmake-build-debug C:\Users\matta\CLionProjects\214FE\cmake-build-debug C:\Users\matta\CLionProjects\214FE\cmake-build-debug\CMakeFiles\214FE.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/214FE.dir/depend

