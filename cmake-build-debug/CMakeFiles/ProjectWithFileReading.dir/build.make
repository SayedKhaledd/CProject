# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.20

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
CMAKE_COMMAND = /cygdrive/c/Users/seka5/AppData/Local/JetBrains/CLion2021.2/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/seka5/AppData/Local/JetBrains/CLion2021.2/cygwin_cmake/bin/cmake.exe -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/g/Github/CProject

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/g/Github/CProject/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ProjectWithFileReading.dir/depend.make
# Include the progress variables for this target.
include CMakeFiles/ProjectWithFileReading.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ProjectWithFileReading.dir/flags.make

CMakeFiles/ProjectWithFileReading.dir/ProjectWithFileReading.c.o: CMakeFiles/ProjectWithFileReading.dir/flags.make
CMakeFiles/ProjectWithFileReading.dir/ProjectWithFileReading.c.o: ../ProjectWithFileReading.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/g/Github/CProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ProjectWithFileReading.dir/ProjectWithFileReading.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ProjectWithFileReading.dir/ProjectWithFileReading.c.o -c /cygdrive/g/Github/CProject/ProjectWithFileReading.c

CMakeFiles/ProjectWithFileReading.dir/ProjectWithFileReading.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ProjectWithFileReading.dir/ProjectWithFileReading.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /cygdrive/g/Github/CProject/ProjectWithFileReading.c > CMakeFiles/ProjectWithFileReading.dir/ProjectWithFileReading.c.i

CMakeFiles/ProjectWithFileReading.dir/ProjectWithFileReading.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ProjectWithFileReading.dir/ProjectWithFileReading.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /cygdrive/g/Github/CProject/ProjectWithFileReading.c -o CMakeFiles/ProjectWithFileReading.dir/ProjectWithFileReading.c.s

# Object files for target ProjectWithFileReading
ProjectWithFileReading_OBJECTS = \
"CMakeFiles/ProjectWithFileReading.dir/ProjectWithFileReading.c.o"

# External object files for target ProjectWithFileReading
ProjectWithFileReading_EXTERNAL_OBJECTS =

ProjectWithFileReading.exe: CMakeFiles/ProjectWithFileReading.dir/ProjectWithFileReading.c.o
ProjectWithFileReading.exe: CMakeFiles/ProjectWithFileReading.dir/build.make
ProjectWithFileReading.exe: CMakeFiles/ProjectWithFileReading.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/g/Github/CProject/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ProjectWithFileReading.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ProjectWithFileReading.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ProjectWithFileReading.dir/build: ProjectWithFileReading.exe
.PHONY : CMakeFiles/ProjectWithFileReading.dir/build

CMakeFiles/ProjectWithFileReading.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ProjectWithFileReading.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ProjectWithFileReading.dir/clean

CMakeFiles/ProjectWithFileReading.dir/depend:
	cd /cygdrive/g/Github/CProject/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/g/Github/CProject /cygdrive/g/Github/CProject /cygdrive/g/Github/CProject/cmake-build-debug /cygdrive/g/Github/CProject/cmake-build-debug /cygdrive/g/Github/CProject/cmake-build-debug/CMakeFiles/ProjectWithFileReading.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ProjectWithFileReading.dir/depend
