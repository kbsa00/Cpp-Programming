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
CMAKE_SOURCE_DIR = C:\Users\Eier\Desktop\C++\StudentDB

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Eier\Desktop\C++\StudentDB\cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/StudentDB.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/StudentDB.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/StudentDB.dir/flags.make

CMakeFiles/StudentDB.dir/main.cpp.obj: CMakeFiles/StudentDB.dir/flags.make
CMakeFiles/StudentDB.dir/main.cpp.obj: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Eier\Desktop\C++\StudentDB\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/StudentDB.dir/main.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\StudentDB.dir\main.cpp.obj -c C:\Users\Eier\Desktop\C++\StudentDB\main.cpp

CMakeFiles/StudentDB.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/StudentDB.dir/main.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Eier\Desktop\C++\StudentDB\main.cpp > CMakeFiles\StudentDB.dir\main.cpp.i

CMakeFiles/StudentDB.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/StudentDB.dir/main.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Eier\Desktop\C++\StudentDB\main.cpp -o CMakeFiles\StudentDB.dir\main.cpp.s

CMakeFiles/StudentDB.dir/main.cpp.obj.requires:

.PHONY : CMakeFiles/StudentDB.dir/main.cpp.obj.requires

CMakeFiles/StudentDB.dir/main.cpp.obj.provides: CMakeFiles/StudentDB.dir/main.cpp.obj.requires
	$(MAKE) -f CMakeFiles\StudentDB.dir\build.make CMakeFiles/StudentDB.dir/main.cpp.obj.provides.build
.PHONY : CMakeFiles/StudentDB.dir/main.cpp.obj.provides

CMakeFiles/StudentDB.dir/main.cpp.obj.provides.build: CMakeFiles/StudentDB.dir/main.cpp.obj


CMakeFiles/StudentDB.dir/StudentDB.cpp.obj: CMakeFiles/StudentDB.dir/flags.make
CMakeFiles/StudentDB.dir/StudentDB.cpp.obj: ../StudentDB.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=C:\Users\Eier\Desktop\C++\StudentDB\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/StudentDB.dir/StudentDB.cpp.obj"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles\StudentDB.dir\StudentDB.cpp.obj -c C:\Users\Eier\Desktop\C++\StudentDB\StudentDB.cpp

CMakeFiles/StudentDB.dir/StudentDB.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/StudentDB.dir/StudentDB.cpp.i"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E C:\Users\Eier\Desktop\C++\StudentDB\StudentDB.cpp > CMakeFiles\StudentDB.dir\StudentDB.cpp.i

CMakeFiles/StudentDB.dir/StudentDB.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/StudentDB.dir/StudentDB.cpp.s"
	C:\PROGRA~1\MINGW-~1\X86_64~1.0-P\mingw64\bin\G__~1.EXE $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S C:\Users\Eier\Desktop\C++\StudentDB\StudentDB.cpp -o CMakeFiles\StudentDB.dir\StudentDB.cpp.s

CMakeFiles/StudentDB.dir/StudentDB.cpp.obj.requires:

.PHONY : CMakeFiles/StudentDB.dir/StudentDB.cpp.obj.requires

CMakeFiles/StudentDB.dir/StudentDB.cpp.obj.provides: CMakeFiles/StudentDB.dir/StudentDB.cpp.obj.requires
	$(MAKE) -f CMakeFiles\StudentDB.dir\build.make CMakeFiles/StudentDB.dir/StudentDB.cpp.obj.provides.build
.PHONY : CMakeFiles/StudentDB.dir/StudentDB.cpp.obj.provides

CMakeFiles/StudentDB.dir/StudentDB.cpp.obj.provides.build: CMakeFiles/StudentDB.dir/StudentDB.cpp.obj


# Object files for target StudentDB
StudentDB_OBJECTS = \
"CMakeFiles/StudentDB.dir/main.cpp.obj" \
"CMakeFiles/StudentDB.dir/StudentDB.cpp.obj"

# External object files for target StudentDB
StudentDB_EXTERNAL_OBJECTS =

StudentDB.exe: CMakeFiles/StudentDB.dir/main.cpp.obj
StudentDB.exe: CMakeFiles/StudentDB.dir/StudentDB.cpp.obj
StudentDB.exe: CMakeFiles/StudentDB.dir/build.make
StudentDB.exe: CMakeFiles/StudentDB.dir/linklibs.rsp
StudentDB.exe: CMakeFiles/StudentDB.dir/objects1.rsp
StudentDB.exe: CMakeFiles/StudentDB.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=C:\Users\Eier\Desktop\C++\StudentDB\cmake-build-debug\CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable StudentDB.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles\StudentDB.dir\link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/StudentDB.dir/build: StudentDB.exe

.PHONY : CMakeFiles/StudentDB.dir/build

CMakeFiles/StudentDB.dir/requires: CMakeFiles/StudentDB.dir/main.cpp.obj.requires
CMakeFiles/StudentDB.dir/requires: CMakeFiles/StudentDB.dir/StudentDB.cpp.obj.requires

.PHONY : CMakeFiles/StudentDB.dir/requires

CMakeFiles/StudentDB.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles\StudentDB.dir\cmake_clean.cmake
.PHONY : CMakeFiles/StudentDB.dir/clean

CMakeFiles/StudentDB.dir/depend:
	$(CMAKE_COMMAND) -E cmake_depends "MinGW Makefiles" C:\Users\Eier\Desktop\C++\StudentDB C:\Users\Eier\Desktop\C++\StudentDB C:\Users\Eier\Desktop\C++\StudentDB\cmake-build-debug C:\Users\Eier\Desktop\C++\StudentDB\cmake-build-debug C:\Users\Eier\Desktop\C++\StudentDB\cmake-build-debug\CMakeFiles\StudentDB.dir\DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/StudentDB.dir/depend

