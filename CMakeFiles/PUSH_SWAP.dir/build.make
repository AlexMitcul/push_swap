# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.25

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
CMAKE_COMMAND = /Users/alexmitcul/.brew/Cellar/cmake/3.25.1/bin/cmake

# The command to remove a file.
RM = /Users/alexmitcul/.brew/Cellar/cmake/3.25.1/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/alexmitcul/Library/Mobile Documents/com~apple~CloudDocs/Documents/push_swap"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/alexmitcul/Library/Mobile Documents/com~apple~CloudDocs/Documents/push_swap"

# Include any dependencies generated for this target.
include CMakeFiles/push_swap.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include CMakeFiles/push_swap.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/push_swap.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/push_swap.dir/flags.make

CMakeFiles/push_swap.dir/src/main.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/src/main.c.o: src/main.c
CMakeFiles/push_swap.dir/src/main.c.o: CMakeFiles/push_swap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/alexmitcul/Library/Mobile Documents/com~apple~CloudDocs/Documents/push_swap/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/push_swap.dir/src/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/push_swap.dir/src/main.c.o -MF CMakeFiles/push_swap.dir/src/main.c.o.d -o CMakeFiles/push_swap.dir/src/main.c.o -c "/Users/alexmitcul/Library/Mobile Documents/com~apple~CloudDocs/Documents/push_swap/src/main.c"

CMakeFiles/push_swap.dir/src/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/src/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/alexmitcul/Library/Mobile Documents/com~apple~CloudDocs/Documents/push_swap/src/main.c" > CMakeFiles/push_swap.dir/src/main.c.i

CMakeFiles/push_swap.dir/src/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/src/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/alexmitcul/Library/Mobile Documents/com~apple~CloudDocs/Documents/push_swap/src/main.c" -o CMakeFiles/push_swap.dir/src/main.c.s

CMakeFiles/push_swap.dir/src/moves.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/src/moves.c.o: src/moves.c
CMakeFiles/push_swap.dir/src/moves.c.o: CMakeFiles/push_swap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/alexmitcul/Library/Mobile Documents/com~apple~CloudDocs/Documents/push_swap/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/push_swap.dir/src/moves.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/push_swap.dir/src/moves.c.o -MF CMakeFiles/push_swap.dir/src/moves.c.o.d -o CMakeFiles/push_swap.dir/src/moves.c.o -c "/Users/alexmitcul/Library/Mobile Documents/com~apple~CloudDocs/Documents/push_swap/src/moves.c"

CMakeFiles/push_swap.dir/src/moves.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/src/moves.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/alexmitcul/Library/Mobile Documents/com~apple~CloudDocs/Documents/push_swap/src/moves.c" > CMakeFiles/push_swap.dir/src/moves.c.i

CMakeFiles/push_swap.dir/src/moves.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/src/moves.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/alexmitcul/Library/Mobile Documents/com~apple~CloudDocs/Documents/push_swap/src/moves.c" -o CMakeFiles/push_swap.dir/src/moves.c.s

CMakeFiles/push_swap.dir/src/stack_operations.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/src/stack_operations.c.o: src/stack_operations.c
CMakeFiles/push_swap.dir/src/stack_operations.c.o: CMakeFiles/push_swap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/alexmitcul/Library/Mobile Documents/com~apple~CloudDocs/Documents/push_swap/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building C object CMakeFiles/push_swap.dir/src/stack_operations.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/push_swap.dir/src/stack_operations.c.o -MF CMakeFiles/push_swap.dir/src/stack_operations.c.o.d -o CMakeFiles/push_swap.dir/src/stack_operations.c.o -c "/Users/alexmitcul/Library/Mobile Documents/com~apple~CloudDocs/Documents/push_swap/src/stack_operations.c"

CMakeFiles/push_swap.dir/src/stack_operations.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/src/stack_operations.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/alexmitcul/Library/Mobile Documents/com~apple~CloudDocs/Documents/push_swap/src/stack_operations.c" > CMakeFiles/push_swap.dir/src/stack_operations.c.i

CMakeFiles/push_swap.dir/src/stack_operations.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/src/stack_operations.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/alexmitcul/Library/Mobile Documents/com~apple~CloudDocs/Documents/push_swap/src/stack_operations.c" -o CMakeFiles/push_swap.dir/src/stack_operations.c.s

CMakeFiles/push_swap.dir/src/stack.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/src/stack.c.o: src/stack.c
CMakeFiles/push_swap.dir/src/stack.c.o: CMakeFiles/push_swap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/alexmitcul/Library/Mobile Documents/com~apple~CloudDocs/Documents/push_swap/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building C object CMakeFiles/push_swap.dir/src/stack.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/push_swap.dir/src/stack.c.o -MF CMakeFiles/push_swap.dir/src/stack.c.o.d -o CMakeFiles/push_swap.dir/src/stack.c.o -c "/Users/alexmitcul/Library/Mobile Documents/com~apple~CloudDocs/Documents/push_swap/src/stack.c"

CMakeFiles/push_swap.dir/src/stack.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/src/stack.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/alexmitcul/Library/Mobile Documents/com~apple~CloudDocs/Documents/push_swap/src/stack.c" > CMakeFiles/push_swap.dir/src/stack.c.i

CMakeFiles/push_swap.dir/src/stack.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/src/stack.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/alexmitcul/Library/Mobile Documents/com~apple~CloudDocs/Documents/push_swap/src/stack.c" -o CMakeFiles/push_swap.dir/src/stack.c.s

CMakeFiles/push_swap.dir/src/read.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/src/read.c.o: src/read.c
CMakeFiles/push_swap.dir/src/read.c.o: CMakeFiles/push_swap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/alexmitcul/Library/Mobile Documents/com~apple~CloudDocs/Documents/push_swap/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building C object CMakeFiles/push_swap.dir/src/read.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/push_swap.dir/src/read.c.o -MF CMakeFiles/push_swap.dir/src/read.c.o.d -o CMakeFiles/push_swap.dir/src/read.c.o -c "/Users/alexmitcul/Library/Mobile Documents/com~apple~CloudDocs/Documents/push_swap/src/read.c"

CMakeFiles/push_swap.dir/src/read.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/src/read.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/alexmitcul/Library/Mobile Documents/com~apple~CloudDocs/Documents/push_swap/src/read.c" > CMakeFiles/push_swap.dir/src/read.c.i

CMakeFiles/push_swap.dir/src/read.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/src/read.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/alexmitcul/Library/Mobile Documents/com~apple~CloudDocs/Documents/push_swap/src/read.c" -o CMakeFiles/push_swap.dir/src/read.c.s

CMakeFiles/push_swap.dir/src/free.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/src/free.c.o: src/free.c
CMakeFiles/push_swap.dir/src/free.c.o: CMakeFiles/push_swap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/alexmitcul/Library/Mobile Documents/com~apple~CloudDocs/Documents/push_swap/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building C object CMakeFiles/push_swap.dir/src/free.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/push_swap.dir/src/free.c.o -MF CMakeFiles/push_swap.dir/src/free.c.o.d -o CMakeFiles/push_swap.dir/src/free.c.o -c "/Users/alexmitcul/Library/Mobile Documents/com~apple~CloudDocs/Documents/push_swap/src/free.c"

CMakeFiles/push_swap.dir/src/free.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/src/free.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/alexmitcul/Library/Mobile Documents/com~apple~CloudDocs/Documents/push_swap/src/free.c" > CMakeFiles/push_swap.dir/src/free.c.i

CMakeFiles/push_swap.dir/src/free.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/src/free.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/alexmitcul/Library/Mobile Documents/com~apple~CloudDocs/Documents/push_swap/src/free.c" -o CMakeFiles/push_swap.dir/src/free.c.s

CMakeFiles/push_swap.dir/src/ft_atoll.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/src/ft_atoll.c.o: src/ft_atoll.c
CMakeFiles/push_swap.dir/src/ft_atoll.c.o: CMakeFiles/push_swap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/alexmitcul/Library/Mobile Documents/com~apple~CloudDocs/Documents/push_swap/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building C object CMakeFiles/push_swap.dir/src/ft_atoll.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/push_swap.dir/src/ft_atoll.c.o -MF CMakeFiles/push_swap.dir/src/ft_atoll.c.o.d -o CMakeFiles/push_swap.dir/src/ft_atoll.c.o -c "/Users/alexmitcul/Library/Mobile Documents/com~apple~CloudDocs/Documents/push_swap/src/ft_atoll.c"

CMakeFiles/push_swap.dir/src/ft_atoll.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/src/ft_atoll.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/alexmitcul/Library/Mobile Documents/com~apple~CloudDocs/Documents/push_swap/src/ft_atoll.c" > CMakeFiles/push_swap.dir/src/ft_atoll.c.i

CMakeFiles/push_swap.dir/src/ft_atoll.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/src/ft_atoll.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/alexmitcul/Library/Mobile Documents/com~apple~CloudDocs/Documents/push_swap/src/ft_atoll.c" -o CMakeFiles/push_swap.dir/src/ft_atoll.c.s

CMakeFiles/push_swap.dir/src/tests.c.o: CMakeFiles/push_swap.dir/flags.make
CMakeFiles/push_swap.dir/src/tests.c.o: src/tests.c
CMakeFiles/push_swap.dir/src/tests.c.o: CMakeFiles/push_swap.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/alexmitcul/Library/Mobile Documents/com~apple~CloudDocs/Documents/push_swap/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Building C object CMakeFiles/push_swap.dir/src/tests.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT CMakeFiles/push_swap.dir/src/tests.c.o -MF CMakeFiles/push_swap.dir/src/tests.c.o.d -o CMakeFiles/push_swap.dir/src/tests.c.o -c "/Users/alexmitcul/Library/Mobile Documents/com~apple~CloudDocs/Documents/push_swap/src/tests.c"

CMakeFiles/push_swap.dir/src/tests.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/push_swap.dir/src/tests.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Users/alexmitcul/Library/Mobile Documents/com~apple~CloudDocs/Documents/push_swap/src/tests.c" > CMakeFiles/push_swap.dir/src/tests.c.i

CMakeFiles/push_swap.dir/src/tests.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/push_swap.dir/src/tests.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Users/alexmitcul/Library/Mobile Documents/com~apple~CloudDocs/Documents/push_swap/src/tests.c" -o CMakeFiles/push_swap.dir/src/tests.c.s

# Object files for target push_swap
push_swap_OBJECTS = \
"CMakeFiles/push_swap.dir/src/main.c.o" \
"CMakeFiles/push_swap.dir/src/moves.c.o" \
"CMakeFiles/push_swap.dir/src/stack_operations.c.o" \
"CMakeFiles/push_swap.dir/src/stack.c.o" \
"CMakeFiles/push_swap.dir/src/read.c.o" \
"CMakeFiles/push_swap.dir/src/free.c.o" \
"CMakeFiles/push_swap.dir/src/ft_atoll.c.o" \
"CMakeFiles/push_swap.dir/src/tests.c.o"

# External object files for target push_swap
push_swap_EXTERNAL_OBJECTS =

push_swap: CMakeFiles/push_swap.dir/src/main.c.o
push_swap: CMakeFiles/push_swap.dir/src/moves.c.o
push_swap: CMakeFiles/push_swap.dir/src/stack_operations.c.o
push_swap: CMakeFiles/push_swap.dir/src/stack.c.o
push_swap: CMakeFiles/push_swap.dir/src/read.c.o
push_swap: CMakeFiles/push_swap.dir/src/free.c.o
push_swap: CMakeFiles/push_swap.dir/src/ft_atoll.c.o
push_swap: CMakeFiles/push_swap.dir/src/tests.c.o
push_swap: CMakeFiles/push_swap.dir/build.make
push_swap: libs/libft/liblibft.a
push_swap: libs/ft_printf/libft_printf.a
push_swap: libs/get_next_line/libget_next_line.a
push_swap: CMakeFiles/push_swap.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/alexmitcul/Library/Mobile Documents/com~apple~CloudDocs/Documents/push_swap/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_9) "Linking C executable push_swap"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/push_swap.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/push_swap.dir/build: push_swap
.PHONY : CMakeFiles/push_swap.dir/build

CMakeFiles/push_swap.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/push_swap.dir/cmake_clean.cmake
.PHONY : CMakeFiles/push_swap.dir/clean

CMakeFiles/push_swap.dir/depend:
	cd "/Users/alexmitcul/Library/Mobile Documents/com~apple~CloudDocs/Documents/push_swap" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/alexmitcul/Library/Mobile Documents/com~apple~CloudDocs/Documents/push_swap" "/Users/alexmitcul/Library/Mobile Documents/com~apple~CloudDocs/Documents/push_swap" "/Users/alexmitcul/Library/Mobile Documents/com~apple~CloudDocs/Documents/push_swap" "/Users/alexmitcul/Library/Mobile Documents/com~apple~CloudDocs/Documents/push_swap" "/Users/alexmitcul/Library/Mobile Documents/com~apple~CloudDocs/Documents/push_swap/CMakeFiles/push_swap.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/push_swap.dir/depend

