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
CMAKE_COMMAND = /usr/local/bin/cmake

# The command to remove a file.
RM = /usr/local/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/home/olegovich22/brother/laboratory_works/Laboratory_work_#1(v2)"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/olegovich22/brother/laboratory_works/Laboratory_work_#1(v2)"

# Include any dependencies generated for this target.
include CMakeFiles/search_word.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/search_word.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/search_word.dir/flags.make

CMakeFiles/search_word.dir/main.c.o: CMakeFiles/search_word.dir/flags.make
CMakeFiles/search_word.dir/main.c.o: main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/olegovich22/brother/laboratory_works/Laboratory_work_#1(v2)/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/search_word.dir/main.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/search_word.dir/main.c.o   -c "/home/olegovich22/brother/laboratory_works/Laboratory_work_#1(v2)/main.c"

CMakeFiles/search_word.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/search_word.dir/main.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/olegovich22/brother/laboratory_works/Laboratory_work_#1(v2)/main.c" > CMakeFiles/search_word.dir/main.c.i

CMakeFiles/search_word.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/search_word.dir/main.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/olegovich22/brother/laboratory_works/Laboratory_work_#1(v2)/main.c" -o CMakeFiles/search_word.dir/main.c.s

CMakeFiles/search_word.dir/fun.c.o: CMakeFiles/search_word.dir/flags.make
CMakeFiles/search_word.dir/fun.c.o: fun.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/olegovich22/brother/laboratory_works/Laboratory_work_#1(v2)/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building C object CMakeFiles/search_word.dir/fun.c.o"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/search_word.dir/fun.c.o   -c "/home/olegovich22/brother/laboratory_works/Laboratory_work_#1(v2)/fun.c"

CMakeFiles/search_word.dir/fun.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/search_word.dir/fun.c.i"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/home/olegovich22/brother/laboratory_works/Laboratory_work_#1(v2)/fun.c" > CMakeFiles/search_word.dir/fun.c.i

CMakeFiles/search_word.dir/fun.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/search_word.dir/fun.c.s"
	/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/home/olegovich22/brother/laboratory_works/Laboratory_work_#1(v2)/fun.c" -o CMakeFiles/search_word.dir/fun.c.s

# Object files for target search_word
search_word_OBJECTS = \
"CMakeFiles/search_word.dir/main.c.o" \
"CMakeFiles/search_word.dir/fun.c.o"

# External object files for target search_word
search_word_EXTERNAL_OBJECTS =

search_word: CMakeFiles/search_word.dir/main.c.o
search_word: CMakeFiles/search_word.dir/fun.c.o
search_word: CMakeFiles/search_word.dir/build.make
search_word: CMakeFiles/search_word.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/olegovich22/brother/laboratory_works/Laboratory_work_#1(v2)/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking C executable search_word"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/search_word.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/search_word.dir/build: search_word

.PHONY : CMakeFiles/search_word.dir/build

CMakeFiles/search_word.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/search_word.dir/cmake_clean.cmake
.PHONY : CMakeFiles/search_word.dir/clean

CMakeFiles/search_word.dir/depend:
	cd "/home/olegovich22/brother/laboratory_works/Laboratory_work_#1(v2)" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/olegovich22/brother/laboratory_works/Laboratory_work_#1(v2)" "/home/olegovich22/brother/laboratory_works/Laboratory_work_#1(v2)" "/home/olegovich22/brother/laboratory_works/Laboratory_work_#1(v2)" "/home/olegovich22/brother/laboratory_works/Laboratory_work_#1(v2)" "/home/olegovich22/brother/laboratory_works/Laboratory_work_#1(v2)/CMakeFiles/search_word.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/search_word.dir/depend
