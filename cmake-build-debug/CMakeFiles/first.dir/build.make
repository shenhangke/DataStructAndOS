# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.14

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
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/moonknight/Project/C++/first

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/moonknight/Project/C++/first/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/first.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/first.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/first.dir/flags.make

CMakeFiles/first.dir/main.cpp.o: CMakeFiles/first.dir/flags.make
CMakeFiles/first.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/moonknight/Project/C++/first/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/first.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/first.dir/main.cpp.o -c /Users/moonknight/Project/C++/first/main.cpp

CMakeFiles/first.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/first.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/moonknight/Project/C++/first/main.cpp > CMakeFiles/first.dir/main.cpp.i

CMakeFiles/first.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/first.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/moonknight/Project/C++/first/main.cpp -o CMakeFiles/first.dir/main.cpp.s

CMakeFiles/first.dir/linkedTable/linkedTable.cpp.o: CMakeFiles/first.dir/flags.make
CMakeFiles/first.dir/linkedTable/linkedTable.cpp.o: ../linkedTable/linkedTable.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/moonknight/Project/C++/first/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/first.dir/linkedTable/linkedTable.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/first.dir/linkedTable/linkedTable.cpp.o -c /Users/moonknight/Project/C++/first/linkedTable/linkedTable.cpp

CMakeFiles/first.dir/linkedTable/linkedTable.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/first.dir/linkedTable/linkedTable.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/moonknight/Project/C++/first/linkedTable/linkedTable.cpp > CMakeFiles/first.dir/linkedTable/linkedTable.cpp.i

CMakeFiles/first.dir/linkedTable/linkedTable.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/first.dir/linkedTable/linkedTable.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/moonknight/Project/C++/first/linkedTable/linkedTable.cpp -o CMakeFiles/first.dir/linkedTable/linkedTable.cpp.s

CMakeFiles/first.dir/stack/stack.cpp.o: CMakeFiles/first.dir/flags.make
CMakeFiles/first.dir/stack/stack.cpp.o: ../stack/stack.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/moonknight/Project/C++/first/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/first.dir/stack/stack.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/first.dir/stack/stack.cpp.o -c /Users/moonknight/Project/C++/first/stack/stack.cpp

CMakeFiles/first.dir/stack/stack.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/first.dir/stack/stack.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/moonknight/Project/C++/first/stack/stack.cpp > CMakeFiles/first.dir/stack/stack.cpp.i

CMakeFiles/first.dir/stack/stack.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/first.dir/stack/stack.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/moonknight/Project/C++/first/stack/stack.cpp -o CMakeFiles/first.dir/stack/stack.cpp.s

CMakeFiles/first.dir/queue/queue.cpp.o: CMakeFiles/first.dir/flags.make
CMakeFiles/first.dir/queue/queue.cpp.o: ../queue/queue.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/moonknight/Project/C++/first/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/first.dir/queue/queue.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/first.dir/queue/queue.cpp.o -c /Users/moonknight/Project/C++/first/queue/queue.cpp

CMakeFiles/first.dir/queue/queue.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/first.dir/queue/queue.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/moonknight/Project/C++/first/queue/queue.cpp > CMakeFiles/first.dir/queue/queue.cpp.i

CMakeFiles/first.dir/queue/queue.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/first.dir/queue/queue.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/moonknight/Project/C++/first/queue/queue.cpp -o CMakeFiles/first.dir/queue/queue.cpp.s

CMakeFiles/first.dir/array/array.cpp.o: CMakeFiles/first.dir/flags.make
CMakeFiles/first.dir/array/array.cpp.o: ../array/array.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/moonknight/Project/C++/first/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/first.dir/array/array.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/first.dir/array/array.cpp.o -c /Users/moonknight/Project/C++/first/array/array.cpp

CMakeFiles/first.dir/array/array.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/first.dir/array/array.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/moonknight/Project/C++/first/array/array.cpp > CMakeFiles/first.dir/array/array.cpp.i

CMakeFiles/first.dir/array/array.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/first.dir/array/array.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/moonknight/Project/C++/first/array/array.cpp -o CMakeFiles/first.dir/array/array.cpp.s

CMakeFiles/first.dir/string/mystring.cpp.o: CMakeFiles/first.dir/flags.make
CMakeFiles/first.dir/string/mystring.cpp.o: ../string/mystring.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/moonknight/Project/C++/first/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/first.dir/string/mystring.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/first.dir/string/mystring.cpp.o -c /Users/moonknight/Project/C++/first/string/mystring.cpp

CMakeFiles/first.dir/string/mystring.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/first.dir/string/mystring.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/moonknight/Project/C++/first/string/mystring.cpp > CMakeFiles/first.dir/string/mystring.cpp.i

CMakeFiles/first.dir/string/mystring.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/first.dir/string/mystring.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/moonknight/Project/C++/first/string/mystring.cpp -o CMakeFiles/first.dir/string/mystring.cpp.s

CMakeFiles/first.dir/Tree/Tree.cpp.o: CMakeFiles/first.dir/flags.make
CMakeFiles/first.dir/Tree/Tree.cpp.o: ../Tree/Tree.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/moonknight/Project/C++/first/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/first.dir/Tree/Tree.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/first.dir/Tree/Tree.cpp.o -c /Users/moonknight/Project/C++/first/Tree/Tree.cpp

CMakeFiles/first.dir/Tree/Tree.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/first.dir/Tree/Tree.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /Users/moonknight/Project/C++/first/Tree/Tree.cpp > CMakeFiles/first.dir/Tree/Tree.cpp.i

CMakeFiles/first.dir/Tree/Tree.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/first.dir/Tree/Tree.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /Users/moonknight/Project/C++/first/Tree/Tree.cpp -o CMakeFiles/first.dir/Tree/Tree.cpp.s

# Object files for target first
first_OBJECTS = \
"CMakeFiles/first.dir/main.cpp.o" \
"CMakeFiles/first.dir/linkedTable/linkedTable.cpp.o" \
"CMakeFiles/first.dir/stack/stack.cpp.o" \
"CMakeFiles/first.dir/queue/queue.cpp.o" \
"CMakeFiles/first.dir/array/array.cpp.o" \
"CMakeFiles/first.dir/string/mystring.cpp.o" \
"CMakeFiles/first.dir/Tree/Tree.cpp.o"

# External object files for target first
first_EXTERNAL_OBJECTS =

first: CMakeFiles/first.dir/main.cpp.o
first: CMakeFiles/first.dir/linkedTable/linkedTable.cpp.o
first: CMakeFiles/first.dir/stack/stack.cpp.o
first: CMakeFiles/first.dir/queue/queue.cpp.o
first: CMakeFiles/first.dir/array/array.cpp.o
first: CMakeFiles/first.dir/string/mystring.cpp.o
first: CMakeFiles/first.dir/Tree/Tree.cpp.o
first: CMakeFiles/first.dir/build.make
first: CMakeFiles/first.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/moonknight/Project/C++/first/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Linking CXX executable first"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/first.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/first.dir/build: first

.PHONY : CMakeFiles/first.dir/build

CMakeFiles/first.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/first.dir/cmake_clean.cmake
.PHONY : CMakeFiles/first.dir/clean

CMakeFiles/first.dir/depend:
	cd /Users/moonknight/Project/C++/first/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/moonknight/Project/C++/first /Users/moonknight/Project/C++/first /Users/moonknight/Project/C++/first/cmake-build-debug /Users/moonknight/Project/C++/first/cmake-build-debug /Users/moonknight/Project/C++/first/cmake-build-debug/CMakeFiles/first.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/first.dir/depend
