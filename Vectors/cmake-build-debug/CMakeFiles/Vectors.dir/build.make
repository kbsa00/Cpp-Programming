# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = "/Users/khalid_bs/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-1/173.3727.114/CLion.app/Contents/bin/cmake/bin/cmake"

# The command to remove a file.
RM = "/Users/khalid_bs/Library/Application Support/JetBrains/Toolbox/apps/CLion/ch-1/173.3727.114/CLion.app/Contents/bin/cmake/bin/cmake" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/khalid_bs/Desktop/C++ Projects/Vectors"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/khalid_bs/Desktop/C++ Projects/Vectors/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/Vectors.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Vectors.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Vectors.dir/flags.make

CMakeFiles/Vectors.dir/main.cpp.o: CMakeFiles/Vectors.dir/flags.make
CMakeFiles/Vectors.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/khalid_bs/Desktop/C++ Projects/Vectors/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Vectors.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Vectors.dir/main.cpp.o -c "/Users/khalid_bs/Desktop/C++ Projects/Vectors/main.cpp"

CMakeFiles/Vectors.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Vectors.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/khalid_bs/Desktop/C++ Projects/Vectors/main.cpp" > CMakeFiles/Vectors.dir/main.cpp.i

CMakeFiles/Vectors.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Vectors.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/khalid_bs/Desktop/C++ Projects/Vectors/main.cpp" -o CMakeFiles/Vectors.dir/main.cpp.s

CMakeFiles/Vectors.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/Vectors.dir/main.cpp.o.requires

CMakeFiles/Vectors.dir/main.cpp.o.provides: CMakeFiles/Vectors.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/Vectors.dir/build.make CMakeFiles/Vectors.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/Vectors.dir/main.cpp.o.provides

CMakeFiles/Vectors.dir/main.cpp.o.provides.build: CMakeFiles/Vectors.dir/main.cpp.o


# Object files for target Vectors
Vectors_OBJECTS = \
"CMakeFiles/Vectors.dir/main.cpp.o"

# External object files for target Vectors
Vectors_EXTERNAL_OBJECTS =

Vectors: CMakeFiles/Vectors.dir/main.cpp.o
Vectors: CMakeFiles/Vectors.dir/build.make
Vectors: CMakeFiles/Vectors.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/khalid_bs/Desktop/C++ Projects/Vectors/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable Vectors"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Vectors.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Vectors.dir/build: Vectors

.PHONY : CMakeFiles/Vectors.dir/build

CMakeFiles/Vectors.dir/requires: CMakeFiles/Vectors.dir/main.cpp.o.requires

.PHONY : CMakeFiles/Vectors.dir/requires

CMakeFiles/Vectors.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Vectors.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Vectors.dir/clean

CMakeFiles/Vectors.dir/depend:
	cd "/Users/khalid_bs/Desktop/C++ Projects/Vectors/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/khalid_bs/Desktop/C++ Projects/Vectors" "/Users/khalid_bs/Desktop/C++ Projects/Vectors" "/Users/khalid_bs/Desktop/C++ Projects/Vectors/cmake-build-debug" "/Users/khalid_bs/Desktop/C++ Projects/Vectors/cmake-build-debug" "/Users/khalid_bs/Desktop/C++ Projects/Vectors/cmake-build-debug/CMakeFiles/Vectors.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/Vectors.dir/depend

