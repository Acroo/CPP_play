# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/christianholmqvist/Code/CPP_play/project/Containers

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/christianholmqvist/Code/CPP_play/project/Containers/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/List.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/List.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/List.dir/flags.make

CMakeFiles/List.dir/lists.cpp.o: CMakeFiles/List.dir/flags.make
CMakeFiles/List.dir/lists.cpp.o: ../lists.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/christianholmqvist/Code/CPP_play/project/Containers/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/List.dir/lists.cpp.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/List.dir/lists.cpp.o -c /Users/christianholmqvist/Code/CPP_play/project/Containers/lists.cpp

CMakeFiles/List.dir/lists.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/List.dir/lists.cpp.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/christianholmqvist/Code/CPP_play/project/Containers/lists.cpp > CMakeFiles/List.dir/lists.cpp.i

CMakeFiles/List.dir/lists.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/List.dir/lists.cpp.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/christianholmqvist/Code/CPP_play/project/Containers/lists.cpp -o CMakeFiles/List.dir/lists.cpp.s

# Object files for target List
List_OBJECTS = \
"CMakeFiles/List.dir/lists.cpp.o"

# External object files for target List
List_EXTERNAL_OBJECTS =

List: CMakeFiles/List.dir/lists.cpp.o
List: CMakeFiles/List.dir/build.make
List: CMakeFiles/List.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/christianholmqvist/Code/CPP_play/project/Containers/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable List"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/List.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/List.dir/build: List

.PHONY : CMakeFiles/List.dir/build

CMakeFiles/List.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/List.dir/cmake_clean.cmake
.PHONY : CMakeFiles/List.dir/clean

CMakeFiles/List.dir/depend:
	cd /Users/christianholmqvist/Code/CPP_play/project/Containers/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/christianholmqvist/Code/CPP_play/project/Containers /Users/christianholmqvist/Code/CPP_play/project/Containers /Users/christianholmqvist/Code/CPP_play/project/Containers/cmake-build-debug /Users/christianholmqvist/Code/CPP_play/project/Containers/cmake-build-debug /Users/christianholmqvist/Code/CPP_play/project/Containers/cmake-build-debug/CMakeFiles/List.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/List.dir/depend

