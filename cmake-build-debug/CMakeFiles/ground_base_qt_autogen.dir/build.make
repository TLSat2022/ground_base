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
CMAKE_COMMAND = /home/szymon/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/212.5284.51/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/szymon/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/212.5284.51/bin/cmake/linux/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/szymon/Projects/CanSat/ground_base_qt

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/szymon/Projects/CanSat/ground_base_qt/cmake-build-debug

# Utility rule file for ground_base_qt_autogen.

# Include any custom commands dependencies for this target.
include CMakeFiles/ground_base_qt_autogen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/ground_base_qt_autogen.dir/progress.make

CMakeFiles/ground_base_qt_autogen:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/szymon/Projects/CanSat/ground_base_qt/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Automatic MOC and UIC for target ground_base_qt"
	/home/szymon/.local/share/JetBrains/Toolbox/apps/CLion/ch-0/212.5284.51/bin/cmake/linux/bin/cmake -E cmake_autogen /home/szymon/Projects/CanSat/ground_base_qt/cmake-build-debug/CMakeFiles/ground_base_qt_autogen.dir/AutogenInfo.json Debug

ground_base_qt_autogen: CMakeFiles/ground_base_qt_autogen
ground_base_qt_autogen: CMakeFiles/ground_base_qt_autogen.dir/build.make
.PHONY : ground_base_qt_autogen

# Rule to build all files generated by this target.
CMakeFiles/ground_base_qt_autogen.dir/build: ground_base_qt_autogen
.PHONY : CMakeFiles/ground_base_qt_autogen.dir/build

CMakeFiles/ground_base_qt_autogen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ground_base_qt_autogen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ground_base_qt_autogen.dir/clean

CMakeFiles/ground_base_qt_autogen.dir/depend:
	cd /home/szymon/Projects/CanSat/ground_base_qt/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/szymon/Projects/CanSat/ground_base_qt /home/szymon/Projects/CanSat/ground_base_qt /home/szymon/Projects/CanSat/ground_base_qt/cmake-build-debug /home/szymon/Projects/CanSat/ground_base_qt/cmake-build-debug /home/szymon/Projects/CanSat/ground_base_qt/cmake-build-debug/CMakeFiles/ground_base_qt_autogen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ground_base_qt_autogen.dir/depend

