# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.9

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
CMAKE_COMMAND = C:\Users\Eier\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\173.4127.32\bin\cmake\bin\cmake.exe

# The command to remove a file.
RM = C:\Users\Eier\AppData\Local\JetBrains\Toolbox\apps\CLion\ch-0\173.4127.32\bin\cmake\bin\cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Eier\Desktop\C++\IO_File

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Eier\Desktop\C++\IO_File\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/IO_File.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/IO_File.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/IO_File.dir/flags.make

CMakeFiles/IO_File.dir/main.cpp.obj: CMakeFiles/IO_File.dir/flags.make
CMakeFiles/IO_File.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Eier\Desktop\C++\IO_File\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/IO_File.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\IO_File.dir\main.cpp.obj -c C:\Users\Eier\Desktop\C++\IO_File\main.cpp

CMakeFiles/IO_File.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/IO_File.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Eier\Desktop\C++\IO_File\main.cpp > CMakeFiles\IO_File.dir\main.cpp.i

CMakeFiles/IO_File.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/IO_File.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Eier\Desktop\C++\IO_File\main.cpp -o CMakeFiles\IO_File.dir\main.cpp.s

CMakeFiles/IO_File.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/IO_File.dir/main.cpp.obj.requires

CMakeFiles/IO_File.dir/main.cpp.obj.provides: CMakeFiles/IO_File.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\IO_File.dir\build.make CMakeFiles/IO_File.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/IO_File.dir/main.cpp.obj.provides

CMakeFiles/IO_File.dir/main.cpp.obj.provides.build: CMakeFiles/IO_File.dir/main.cpp.obj


# Object files for target IO_File
IO_File_OBJECTS = \
"CMakeFiles/IO_File.dir/main.cpp.obj"

# External object files for target IO_File
IO_File_EXTERNAL_OBJECTS =

IO_File.exe: CMakeFiles/IO_File.dir/main.cpp.obj
IO_File.exe: CMakeFiles/IO_File.dir/build.make
IO_File.exe: CMakeFiles/IO_File.dir/linklibs.rsp
IO_File.exe: CMakeFiles/IO_File.dir/objects1.rsp
IO_File.exe: CMakeFiles/IO_File.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Eier\Desktop\C++\IO_File\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable IO_File.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\IO_File.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/IO_File.dir/build: IO_File.exe

.PHONY : CMakeFiles/IO_File.dir/build

CMakeFiles/IO_File.dir/requires: CMakeFiles/IO_File.dir/main.cpp.obj.requires

.PHONY : CMakeFiles/IO_File.dir/requires

CMakeFiles/IO_File.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\IO_File.dir\cmake_clean.cmake
.PHONY : CMakeFiles/IO_File.dir/clean

CMakeFiles/IO_File.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Eier\Desktop\C++\IO_File C:\Users\Eier\Desktop\C++\IO_File C:\Users\Eier\Desktop\C++\IO_File\cmake-build-debug C:\Users\Eier\Desktop\C++\IO_File\cmake-build-debug C:\Users\Eier\Desktop\C++\IO_File\cmake-build-debug\CMakeFiles\IO_File.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/IO_File.dir/depend
