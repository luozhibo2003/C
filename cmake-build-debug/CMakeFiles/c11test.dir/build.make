# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.12

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
CMAKE_COMMAND = /home/luobo/soft/clion-2018.2/bin/cmake/linux/bin/cmake

# The command to remove a file.
RM = /home/luobo/soft/clion-2018.2/bin/cmake/linux/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/luobo/CLionProjects/c11test

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/luobo/CLionProjects/c11test/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/c11test.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/c11test.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/c11test.dir/flags.make

CMakeFiles/c11test.dir/main.c.o: CMakeFiles/c11test.dir/flags.make
CMakeFiles/c11test.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/luobo/CLionProjects/c11test/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/c11test.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/c11test.dir/main.c.o   -c /home/luobo/CLionProjects/c11test/main.c

CMakeFiles/c11test.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/c11test.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/luobo/CLionProjects/c11test/main.c > CMakeFiles/c11test.dir/main.c.i

CMakeFiles/c11test.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/c11test.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/luobo/CLionProjects/c11test/main.c -o CMakeFiles/c11test.dir/main.c.s

CMakeFiles/c11test.dir/support.c.o: CMakeFiles/c11test.dir/flags.make
CMakeFiles/c11test.dir/support.c.o: ../support.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/luobo/CLionProjects/c11test/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/c11test.dir/support.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/c11test.dir/support.c.o   -c /home/luobo/CLionProjects/c11test/support.c

CMakeFiles/c11test.dir/support.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/c11test.dir/support.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/luobo/CLionProjects/c11test/support.c > CMakeFiles/c11test.dir/support.c.i

CMakeFiles/c11test.dir/support.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/c11test.dir/support.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/luobo/CLionProjects/c11test/support.c -o CMakeFiles/c11test.dir/support.c.s

CMakeFiles/c11test.dir/multyArrayDemo.c.o: CMakeFiles/c11test.dir/flags.make
CMakeFiles/c11test.dir/multyArrayDemo.c.o: ../multyArrayDemo.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/luobo/CLionProjects/c11test/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/c11test.dir/multyArrayDemo.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/c11test.dir/multyArrayDemo.c.o   -c /home/luobo/CLionProjects/c11test/multyArrayDemo.c

CMakeFiles/c11test.dir/multyArrayDemo.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/c11test.dir/multyArrayDemo.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/luobo/CLionProjects/c11test/multyArrayDemo.c > CMakeFiles/c11test.dir/multyArrayDemo.c.i

CMakeFiles/c11test.dir/multyArrayDemo.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/c11test.dir/multyArrayDemo.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/luobo/CLionProjects/c11test/multyArrayDemo.c -o CMakeFiles/c11test.dir/multyArrayDemo.c.s

CMakeFiles/c11test.dir/pointDemo.c.o: CMakeFiles/c11test.dir/flags.make
CMakeFiles/c11test.dir/pointDemo.c.o: ../pointDemo.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/luobo/CLionProjects/c11test/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/c11test.dir/pointDemo.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/c11test.dir/pointDemo.c.o   -c /home/luobo/CLionProjects/c11test/pointDemo.c

CMakeFiles/c11test.dir/pointDemo.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/c11test.dir/pointDemo.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/luobo/CLionProjects/c11test/pointDemo.c > CMakeFiles/c11test.dir/pointDemo.c.i

CMakeFiles/c11test.dir/pointDemo.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/c11test.dir/pointDemo.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/luobo/CLionProjects/c11test/pointDemo.c -o CMakeFiles/c11test.dir/pointDemo.c.s

CMakeFiles/c11test.dir/strDemo.c.o: CMakeFiles/c11test.dir/flags.make
CMakeFiles/c11test.dir/strDemo.c.o: ../strDemo.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/luobo/CLionProjects/c11test/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/c11test.dir/strDemo.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/c11test.dir/strDemo.c.o   -c /home/luobo/CLionProjects/c11test/strDemo.c

CMakeFiles/c11test.dir/strDemo.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/c11test.dir/strDemo.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/luobo/CLionProjects/c11test/strDemo.c > CMakeFiles/c11test.dir/strDemo.c.i

CMakeFiles/c11test.dir/strDemo.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/c11test.dir/strDemo.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/luobo/CLionProjects/c11test/strDemo.c -o CMakeFiles/c11test.dir/strDemo.c.s

CMakeFiles/c11test.dir/structDemo.c.o: CMakeFiles/c11test.dir/flags.make
CMakeFiles/c11test.dir/structDemo.c.o: ../structDemo.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/luobo/CLionProjects/c11test/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/c11test.dir/structDemo.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/c11test.dir/structDemo.c.o   -c /home/luobo/CLionProjects/c11test/structDemo.c

CMakeFiles/c11test.dir/structDemo.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/c11test.dir/structDemo.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/luobo/CLionProjects/c11test/structDemo.c > CMakeFiles/c11test.dir/structDemo.c.i

CMakeFiles/c11test.dir/structDemo.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/c11test.dir/structDemo.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/luobo/CLionProjects/c11test/structDemo.c -o CMakeFiles/c11test.dir/structDemo.c.s

CMakeFiles/c11test.dir/unionDemo.c.o: CMakeFiles/c11test.dir/flags.make
CMakeFiles/c11test.dir/unionDemo.c.o: ../unionDemo.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/luobo/CLionProjects/c11test/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/c11test.dir/unionDemo.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/c11test.dir/unionDemo.c.o   -c /home/luobo/CLionProjects/c11test/unionDemo.c

CMakeFiles/c11test.dir/unionDemo.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/c11test.dir/unionDemo.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/luobo/CLionProjects/c11test/unionDemo.c > CMakeFiles/c11test.dir/unionDemo.c.i

CMakeFiles/c11test.dir/unionDemo.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/c11test.dir/unionDemo.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/luobo/CLionProjects/c11test/unionDemo.c -o CMakeFiles/c11test.dir/unionDemo.c.s

CMakeFiles/c11test.dir/bitDomainDemo.c.o: CMakeFiles/c11test.dir/flags.make
CMakeFiles/c11test.dir/bitDomainDemo.c.o: ../bitDomainDemo.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/luobo/CLionProjects/c11test/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/c11test.dir/bitDomainDemo.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/c11test.dir/bitDomainDemo.c.o   -c /home/luobo/CLionProjects/c11test/bitDomainDemo.c

CMakeFiles/c11test.dir/bitDomainDemo.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/c11test.dir/bitDomainDemo.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/luobo/CLionProjects/c11test/bitDomainDemo.c > CMakeFiles/c11test.dir/bitDomainDemo.c.i

CMakeFiles/c11test.dir/bitDomainDemo.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/c11test.dir/bitDomainDemo.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/luobo/CLionProjects/c11test/bitDomainDemo.c -o CMakeFiles/c11test.dir/bitDomainDemo.c.s

CMakeFiles/c11test.dir/typedefDemo.c.o: CMakeFiles/c11test.dir/flags.make
CMakeFiles/c11test.dir/typedefDemo.c.o: ../typedefDemo.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/luobo/CLionProjects/c11test/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building C object CMakeFiles/c11test.dir/typedefDemo.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/c11test.dir/typedefDemo.c.o   -c /home/luobo/CLionProjects/c11test/typedefDemo.c

CMakeFiles/c11test.dir/typedefDemo.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/c11test.dir/typedefDemo.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/luobo/CLionProjects/c11test/typedefDemo.c > CMakeFiles/c11test.dir/typedefDemo.c.i

CMakeFiles/c11test.dir/typedefDemo.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/c11test.dir/typedefDemo.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/luobo/CLionProjects/c11test/typedefDemo.c -o CMakeFiles/c11test.dir/typedefDemo.c.s

CMakeFiles/c11test.dir/inputOutPutDemo.c.o: CMakeFiles/c11test.dir/flags.make
CMakeFiles/c11test.dir/inputOutPutDemo.c.o: ../inputOutPutDemo.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/luobo/CLionProjects/c11test/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Building C object CMakeFiles/c11test.dir/inputOutPutDemo.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/c11test.dir/inputOutPutDemo.c.o   -c /home/luobo/CLionProjects/c11test/inputOutPutDemo.c

CMakeFiles/c11test.dir/inputOutPutDemo.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/c11test.dir/inputOutPutDemo.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/luobo/CLionProjects/c11test/inputOutPutDemo.c > CMakeFiles/c11test.dir/inputOutPutDemo.c.i

CMakeFiles/c11test.dir/inputOutPutDemo.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/c11test.dir/inputOutPutDemo.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/luobo/CLionProjects/c11test/inputOutPutDemo.c -o CMakeFiles/c11test.dir/inputOutPutDemo.c.s

CMakeFiles/c11test.dir/fileDemo.c.o: CMakeFiles/c11test.dir/flags.make
CMakeFiles/c11test.dir/fileDemo.c.o: ../fileDemo.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/luobo/CLionProjects/c11test/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_11) "Building C object CMakeFiles/c11test.dir/fileDemo.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/c11test.dir/fileDemo.c.o   -c /home/luobo/CLionProjects/c11test/fileDemo.c

CMakeFiles/c11test.dir/fileDemo.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/c11test.dir/fileDemo.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/luobo/CLionProjects/c11test/fileDemo.c > CMakeFiles/c11test.dir/fileDemo.c.i

CMakeFiles/c11test.dir/fileDemo.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/c11test.dir/fileDemo.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/luobo/CLionProjects/c11test/fileDemo.c -o CMakeFiles/c11test.dir/fileDemo.c.s

CMakeFiles/c11test.dir/preprocessorDemo.c.o: CMakeFiles/c11test.dir/flags.make
CMakeFiles/c11test.dir/preprocessorDemo.c.o: ../preprocessorDemo.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/luobo/CLionProjects/c11test/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_12) "Building C object CMakeFiles/c11test.dir/preprocessorDemo.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/c11test.dir/preprocessorDemo.c.o   -c /home/luobo/CLionProjects/c11test/preprocessorDemo.c

CMakeFiles/c11test.dir/preprocessorDemo.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/c11test.dir/preprocessorDemo.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /home/luobo/CLionProjects/c11test/preprocessorDemo.c > CMakeFiles/c11test.dir/preprocessorDemo.c.i

CMakeFiles/c11test.dir/preprocessorDemo.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/c11test.dir/preprocessorDemo.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /home/luobo/CLionProjects/c11test/preprocessorDemo.c -o CMakeFiles/c11test.dir/preprocessorDemo.c.s

# Object files for target c11test
c11test_OBJECTS = \
"CMakeFiles/c11test.dir/main.c.o" \
"CMakeFiles/c11test.dir/support.c.o" \
"CMakeFiles/c11test.dir/multyArrayDemo.c.o" \
"CMakeFiles/c11test.dir/pointDemo.c.o" \
"CMakeFiles/c11test.dir/strDemo.c.o" \
"CMakeFiles/c11test.dir/structDemo.c.o" \
"CMakeFiles/c11test.dir/unionDemo.c.o" \
"CMakeFiles/c11test.dir/bitDomainDemo.c.o" \
"CMakeFiles/c11test.dir/typedefDemo.c.o" \
"CMakeFiles/c11test.dir/inputOutPutDemo.c.o" \
"CMakeFiles/c11test.dir/fileDemo.c.o" \
"CMakeFiles/c11test.dir/preprocessorDemo.c.o"

# External object files for target c11test
c11test_EXTERNAL_OBJECTS =

c11test: CMakeFiles/c11test.dir/main.c.o
c11test: CMakeFiles/c11test.dir/support.c.o
c11test: CMakeFiles/c11test.dir/multyArrayDemo.c.o
c11test: CMakeFiles/c11test.dir/pointDemo.c.o
c11test: CMakeFiles/c11test.dir/strDemo.c.o
c11test: CMakeFiles/c11test.dir/structDemo.c.o
c11test: CMakeFiles/c11test.dir/unionDemo.c.o
c11test: CMakeFiles/c11test.dir/bitDomainDemo.c.o
c11test: CMakeFiles/c11test.dir/typedefDemo.c.o
c11test: CMakeFiles/c11test.dir/inputOutPutDemo.c.o
c11test: CMakeFiles/c11test.dir/fileDemo.c.o
c11test: CMakeFiles/c11test.dir/preprocessorDemo.c.o
c11test: CMakeFiles/c11test.dir/build.make
c11test: CMakeFiles/c11test.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/luobo/CLionProjects/c11test/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_13) "Linking C executable c11test"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/c11test.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/c11test.dir/build: c11test

.PHONY : CMakeFiles/c11test.dir/build

CMakeFiles/c11test.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/c11test.dir/cmake_clean.cmake
.PHONY : CMakeFiles/c11test.dir/clean

CMakeFiles/c11test.dir/depend:
	cd /home/luobo/CLionProjects/c11test/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/luobo/CLionProjects/c11test /home/luobo/CLionProjects/c11test /home/luobo/CLionProjects/c11test/cmake-build-debug /home/luobo/CLionProjects/c11test/cmake-build-debug /home/luobo/CLionProjects/c11test/cmake-build-debug/CMakeFiles/c11test.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/c11test.dir/depend

