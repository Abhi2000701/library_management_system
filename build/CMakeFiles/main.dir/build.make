# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/sahil/myfiles/iitk_acads/cs253/assignment_1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/sahil/myfiles/iitk_acads/cs253/assignment_1/build

# Include any dependencies generated for this target.
include CMakeFiles/main.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/main.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/main.dir/flags.make

CMakeFiles/main.dir/src/main.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/main.cpp.o: ../src/main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sahil/myfiles/iitk_acads/cs253/assignment_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/main.dir/src/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/src/main.cpp.o -c /home/sahil/myfiles/iitk_acads/cs253/assignment_1/src/main.cpp

CMakeFiles/main.dir/src/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sahil/myfiles/iitk_acads/cs253/assignment_1/src/main.cpp > CMakeFiles/main.dir/src/main.cpp.i

CMakeFiles/main.dir/src/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sahil/myfiles/iitk_acads/cs253/assignment_1/src/main.cpp -o CMakeFiles/main.dir/src/main.cpp.s

CMakeFiles/main.dir/src/helper_functions.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/helper_functions.cpp.o: ../src/helper_functions.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sahil/myfiles/iitk_acads/cs253/assignment_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/main.dir/src/helper_functions.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/src/helper_functions.cpp.o -c /home/sahil/myfiles/iitk_acads/cs253/assignment_1/src/helper_functions.cpp

CMakeFiles/main.dir/src/helper_functions.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/helper_functions.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sahil/myfiles/iitk_acads/cs253/assignment_1/src/helper_functions.cpp > CMakeFiles/main.dir/src/helper_functions.cpp.i

CMakeFiles/main.dir/src/helper_functions.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/helper_functions.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sahil/myfiles/iitk_acads/cs253/assignment_1/src/helper_functions.cpp -o CMakeFiles/main.dir/src/helper_functions.cpp.s

CMakeFiles/main.dir/src/user.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/user.cpp.o: ../src/user.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sahil/myfiles/iitk_acads/cs253/assignment_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/main.dir/src/user.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/src/user.cpp.o -c /home/sahil/myfiles/iitk_acads/cs253/assignment_1/src/user.cpp

CMakeFiles/main.dir/src/user.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/user.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sahil/myfiles/iitk_acads/cs253/assignment_1/src/user.cpp > CMakeFiles/main.dir/src/user.cpp.i

CMakeFiles/main.dir/src/user.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/user.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sahil/myfiles/iitk_acads/cs253/assignment_1/src/user.cpp -o CMakeFiles/main.dir/src/user.cpp.s

CMakeFiles/main.dir/src/user_database.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/user_database.cpp.o: ../src/user_database.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sahil/myfiles/iitk_acads/cs253/assignment_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/main.dir/src/user_database.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/src/user_database.cpp.o -c /home/sahil/myfiles/iitk_acads/cs253/assignment_1/src/user_database.cpp

CMakeFiles/main.dir/src/user_database.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/user_database.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sahil/myfiles/iitk_acads/cs253/assignment_1/src/user_database.cpp > CMakeFiles/main.dir/src/user_database.cpp.i

CMakeFiles/main.dir/src/user_database.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/user_database.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sahil/myfiles/iitk_acads/cs253/assignment_1/src/user_database.cpp -o CMakeFiles/main.dir/src/user_database.cpp.s

CMakeFiles/main.dir/src/book.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/book.cpp.o: ../src/book.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sahil/myfiles/iitk_acads/cs253/assignment_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/main.dir/src/book.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/src/book.cpp.o -c /home/sahil/myfiles/iitk_acads/cs253/assignment_1/src/book.cpp

CMakeFiles/main.dir/src/book.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/book.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sahil/myfiles/iitk_acads/cs253/assignment_1/src/book.cpp > CMakeFiles/main.dir/src/book.cpp.i

CMakeFiles/main.dir/src/book.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/book.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sahil/myfiles/iitk_acads/cs253/assignment_1/src/book.cpp -o CMakeFiles/main.dir/src/book.cpp.s

CMakeFiles/main.dir/src/book_database.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/book_database.cpp.o: ../src/book_database.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sahil/myfiles/iitk_acads/cs253/assignment_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/main.dir/src/book_database.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/src/book_database.cpp.o -c /home/sahil/myfiles/iitk_acads/cs253/assignment_1/src/book_database.cpp

CMakeFiles/main.dir/src/book_database.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/book_database.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sahil/myfiles/iitk_acads/cs253/assignment_1/src/book_database.cpp > CMakeFiles/main.dir/src/book_database.cpp.i

CMakeFiles/main.dir/src/book_database.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/book_database.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sahil/myfiles/iitk_acads/cs253/assignment_1/src/book_database.cpp -o CMakeFiles/main.dir/src/book_database.cpp.s

CMakeFiles/main.dir/src/librarian.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/librarian.cpp.o: ../src/librarian.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sahil/myfiles/iitk_acads/cs253/assignment_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/main.dir/src/librarian.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/src/librarian.cpp.o -c /home/sahil/myfiles/iitk_acads/cs253/assignment_1/src/librarian.cpp

CMakeFiles/main.dir/src/librarian.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/librarian.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sahil/myfiles/iitk_acads/cs253/assignment_1/src/librarian.cpp > CMakeFiles/main.dir/src/librarian.cpp.i

CMakeFiles/main.dir/src/librarian.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/librarian.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sahil/myfiles/iitk_acads/cs253/assignment_1/src/librarian.cpp -o CMakeFiles/main.dir/src/librarian.cpp.s

CMakeFiles/main.dir/src/professor.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/professor.cpp.o: ../src/professor.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sahil/myfiles/iitk_acads/cs253/assignment_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/main.dir/src/professor.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/src/professor.cpp.o -c /home/sahil/myfiles/iitk_acads/cs253/assignment_1/src/professor.cpp

CMakeFiles/main.dir/src/professor.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/professor.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sahil/myfiles/iitk_acads/cs253/assignment_1/src/professor.cpp > CMakeFiles/main.dir/src/professor.cpp.i

CMakeFiles/main.dir/src/professor.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/professor.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sahil/myfiles/iitk_acads/cs253/assignment_1/src/professor.cpp -o CMakeFiles/main.dir/src/professor.cpp.s

CMakeFiles/main.dir/src/student.cpp.o: CMakeFiles/main.dir/flags.make
CMakeFiles/main.dir/src/student.cpp.o: ../src/student.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/sahil/myfiles/iitk_acads/cs253/assignment_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/main.dir/src/student.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/main.dir/src/student.cpp.o -c /home/sahil/myfiles/iitk_acads/cs253/assignment_1/src/student.cpp

CMakeFiles/main.dir/src/student.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/main.dir/src/student.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/sahil/myfiles/iitk_acads/cs253/assignment_1/src/student.cpp > CMakeFiles/main.dir/src/student.cpp.i

CMakeFiles/main.dir/src/student.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/main.dir/src/student.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/sahil/myfiles/iitk_acads/cs253/assignment_1/src/student.cpp -o CMakeFiles/main.dir/src/student.cpp.s

# Object files for target main
main_OBJECTS = \
"CMakeFiles/main.dir/src/main.cpp.o" \
"CMakeFiles/main.dir/src/helper_functions.cpp.o" \
"CMakeFiles/main.dir/src/user.cpp.o" \
"CMakeFiles/main.dir/src/user_database.cpp.o" \
"CMakeFiles/main.dir/src/book.cpp.o" \
"CMakeFiles/main.dir/src/book_database.cpp.o" \
"CMakeFiles/main.dir/src/librarian.cpp.o" \
"CMakeFiles/main.dir/src/professor.cpp.o" \
"CMakeFiles/main.dir/src/student.cpp.o"

# External object files for target main
main_EXTERNAL_OBJECTS =

main: CMakeFiles/main.dir/src/main.cpp.o
main: CMakeFiles/main.dir/src/helper_functions.cpp.o
main: CMakeFiles/main.dir/src/user.cpp.o
main: CMakeFiles/main.dir/src/user_database.cpp.o
main: CMakeFiles/main.dir/src/book.cpp.o
main: CMakeFiles/main.dir/src/book_database.cpp.o
main: CMakeFiles/main.dir/src/librarian.cpp.o
main: CMakeFiles/main.dir/src/professor.cpp.o
main: CMakeFiles/main.dir/src/student.cpp.o
main: CMakeFiles/main.dir/build.make
main: CMakeFiles/main.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/sahil/myfiles/iitk_acads/cs253/assignment_1/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_10) "Linking CXX executable main"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/main.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/main.dir/build: main

.PHONY : CMakeFiles/main.dir/build

CMakeFiles/main.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/main.dir/cmake_clean.cmake
.PHONY : CMakeFiles/main.dir/clean

CMakeFiles/main.dir/depend:
	cd /home/sahil/myfiles/iitk_acads/cs253/assignment_1/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/sahil/myfiles/iitk_acads/cs253/assignment_1 /home/sahil/myfiles/iitk_acads/cs253/assignment_1 /home/sahil/myfiles/iitk_acads/cs253/assignment_1/build /home/sahil/myfiles/iitk_acads/cs253/assignment_1/build /home/sahil/myfiles/iitk_acads/cs253/assignment_1/build/CMakeFiles/main.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/main.dir/depend
