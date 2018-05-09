# CMAKE generated file: DO NOT EDIT!
# Generated by "MinGW Makefiles" Generator, CMake Version 3.10

# Default target executed when no arguments are given to make.
default_target: all

.PHONY : default_target

# Allow only one "make -f Makefile2" at a time, but pass parallelism.
.NOTPARALLEL:


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
CMAKE_COMMAND = "C:\Program Files\CMake\bin\cmake.exe"

# The command to remove a file.
RM = "C:\Program Files\CMake\bin\cmake.exe" -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = C:\Users\Haro\Desktop\mems-HF2-master

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = C:\Users\Haro\Desktop\mems-HF2-master

#=============================================================================
# Targets provided globally by CMake.

# Special rule for the target package
package: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Run CPack packaging tool..."
	"C:\Program Files\CMake\bin\cpack.exe" --config ./CPackConfig.cmake
.PHONY : package

# Special rule for the target package
package/fast: package

.PHONY : package/fast

# Special rule for the target install/strip
install/strip: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing the project stripped..."
	"C:\Program Files\CMake\bin\cmake.exe" -DCMAKE_INSTALL_DO_STRIP=1 -P cmake_install.cmake
.PHONY : install/strip

# Special rule for the target install/strip
install/strip/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing the project stripped..."
	"C:\Program Files\CMake\bin\cmake.exe" -DCMAKE_INSTALL_DO_STRIP=1 -P cmake_install.cmake
.PHONY : install/strip/fast

# Special rule for the target package_source
package_source:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Run CPack packaging tool for source..."
	"C:\Program Files\CMake\bin\cpack.exe" --config ./CPackSourceConfig.cmake C:/Users/Haro/Desktop/mems-HF2-master/CPackSourceConfig.cmake
.PHONY : package_source

# Special rule for the target package_source
package_source/fast: package_source

.PHONY : package_source/fast

# Special rule for the target install
install: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Install the project..."
	"C:\Program Files\CMake\bin\cmake.exe" -P cmake_install.cmake
.PHONY : install

# Special rule for the target install
install/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Install the project..."
	"C:\Program Files\CMake\bin\cmake.exe" -P cmake_install.cmake
.PHONY : install/fast

# Special rule for the target install/local
install/local: preinstall
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing only the local directory..."
	"C:\Program Files\CMake\bin\cmake.exe" -DCMAKE_INSTALL_LOCAL_ONLY=1 -P cmake_install.cmake
.PHONY : install/local

# Special rule for the target install/local
install/local/fast: preinstall/fast
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Installing only the local directory..."
	"C:\Program Files\CMake\bin\cmake.exe" -DCMAKE_INSTALL_LOCAL_ONLY=1 -P cmake_install.cmake
.PHONY : install/local/fast

# Special rule for the target edit_cache
edit_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake cache editor..."
	"C:\Program Files\CMake\bin\cmake-gui.exe" -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : edit_cache

# Special rule for the target edit_cache
edit_cache/fast: edit_cache

.PHONY : edit_cache/fast

# Special rule for the target rebuild_cache
rebuild_cache:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Running CMake to regenerate build system..."
	"C:\Program Files\CMake\bin\cmake.exe" -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR)
.PHONY : rebuild_cache

# Special rule for the target rebuild_cache
rebuild_cache/fast: rebuild_cache

.PHONY : rebuild_cache/fast

# Special rule for the target list_install_components
list_install_components:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --cyan "Available install components are: \"Unspecified\""
.PHONY : list_install_components

# Special rule for the target list_install_components
list_install_components/fast: list_install_components

.PHONY : list_install_components/fast

# The main all target
all: cmake_check_build_system
	$(CMAKE_COMMAND) -E cmake_progress_start C:\Users\Haro\Desktop\mems-HF2-master\CMakeFiles C:\Users\Haro\Desktop\mems-HF2-master\CMakeFiles\progress.marks
	$(MAKE) -f CMakeFiles\Makefile2 all
	$(CMAKE_COMMAND) -E cmake_progress_start C:\Users\Haro\Desktop\mems-HF2-master\CMakeFiles 0
.PHONY : all

# The main clean target
clean:
	$(MAKE) -f CMakeFiles\Makefile2 clean
.PHONY : clean

# The main clean target
clean/fast: clean

.PHONY : clean/fast

# Prepare targets for installation.
preinstall: all
	$(MAKE) -f CMakeFiles\Makefile2 preinstall
.PHONY : preinstall

# Prepare targets for installation.
preinstall/fast:
	$(MAKE) -f CMakeFiles\Makefile2 preinstall
.PHONY : preinstall/fast

# clear depends
depend:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles\Makefile.cmake 1
.PHONY : depend

#=============================================================================
# Target rules for targets named mems-scan

# Build rule for target.
mems-scan: cmake_check_build_system
	$(MAKE) -f CMakeFiles\Makefile2 mems-scan
.PHONY : mems-scan

# fast build rule for target.
mems-scan/fast:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/build
.PHONY : mems-scan/fast

#=============================================================================
# Target rules for targets named mems-scan_autogen

# Build rule for target.
mems-scan_autogen: cmake_check_build_system
	$(MAKE) -f CMakeFiles\Makefile2 mems-scan_autogen
.PHONY : mems-scan_autogen

# fast build rule for target.
mems-scan_autogen/fast:
	$(MAKE) -f CMakeFiles\mems-scan_autogen.dir\build.make CMakeFiles/mems-scan_autogen.dir/build
.PHONY : mems-scan_autogen/fast

aboutbox.obj: aboutbox.cpp.obj

.PHONY : aboutbox.obj

# target to build an object file
aboutbox.cpp.obj:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/aboutbox.cpp.obj
.PHONY : aboutbox.cpp.obj

aboutbox.i: aboutbox.cpp.i

.PHONY : aboutbox.i

# target to preprocess a source file
aboutbox.cpp.i:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/aboutbox.cpp.i
.PHONY : aboutbox.cpp.i

aboutbox.s: aboutbox.cpp.s

.PHONY : aboutbox.s

# target to generate assembly for a file
aboutbox.cpp.s:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/aboutbox.cpp.s
.PHONY : aboutbox.cpp.s

analogwidgets/abstractmeter.obj: analogwidgets/abstractmeter.cpp.obj

.PHONY : analogwidgets/abstractmeter.obj

# target to build an object file
analogwidgets/abstractmeter.cpp.obj:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/analogwidgets/abstractmeter.cpp.obj
.PHONY : analogwidgets/abstractmeter.cpp.obj

analogwidgets/abstractmeter.i: analogwidgets/abstractmeter.cpp.i

.PHONY : analogwidgets/abstractmeter.i

# target to preprocess a source file
analogwidgets/abstractmeter.cpp.i:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/analogwidgets/abstractmeter.cpp.i
.PHONY : analogwidgets/abstractmeter.cpp.i

analogwidgets/abstractmeter.s: analogwidgets/abstractmeter.cpp.s

.PHONY : analogwidgets/abstractmeter.s

# target to generate assembly for a file
analogwidgets/abstractmeter.cpp.s:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/analogwidgets/abstractmeter.cpp.s
.PHONY : analogwidgets/abstractmeter.cpp.s

analogwidgets/abstractmeter100.obj: analogwidgets/abstractmeter100.cpp.obj

.PHONY : analogwidgets/abstractmeter100.obj

# target to build an object file
analogwidgets/abstractmeter100.cpp.obj:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/analogwidgets/abstractmeter100.cpp.obj
.PHONY : analogwidgets/abstractmeter100.cpp.obj

analogwidgets/abstractmeter100.i: analogwidgets/abstractmeter100.cpp.i

.PHONY : analogwidgets/abstractmeter100.i

# target to preprocess a source file
analogwidgets/abstractmeter100.cpp.i:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/analogwidgets/abstractmeter100.cpp.i
.PHONY : analogwidgets/abstractmeter100.cpp.i

analogwidgets/abstractmeter100.s: analogwidgets/abstractmeter100.cpp.s

.PHONY : analogwidgets/abstractmeter100.s

# target to generate assembly for a file
analogwidgets/abstractmeter100.cpp.s:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/analogwidgets/abstractmeter100.cpp.s
.PHONY : analogwidgets/abstractmeter100.cpp.s

analogwidgets/abstractmeter900.obj: analogwidgets/abstractmeter900.cpp.obj

.PHONY : analogwidgets/abstractmeter900.obj

# target to build an object file
analogwidgets/abstractmeter900.cpp.obj:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/analogwidgets/abstractmeter900.cpp.obj
.PHONY : analogwidgets/abstractmeter900.cpp.obj

analogwidgets/abstractmeter900.i: analogwidgets/abstractmeter900.cpp.i

.PHONY : analogwidgets/abstractmeter900.i

# target to preprocess a source file
analogwidgets/abstractmeter900.cpp.i:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/analogwidgets/abstractmeter900.cpp.i
.PHONY : analogwidgets/abstractmeter900.cpp.i

analogwidgets/abstractmeter900.s: analogwidgets/abstractmeter900.cpp.s

.PHONY : analogwidgets/abstractmeter900.s

# target to generate assembly for a file
analogwidgets/abstractmeter900.cpp.s:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/analogwidgets/abstractmeter900.cpp.s
.PHONY : analogwidgets/abstractmeter900.cpp.s

analogwidgets/functions.obj: analogwidgets/functions.cpp.obj

.PHONY : analogwidgets/functions.obj

# target to build an object file
analogwidgets/functions.cpp.obj:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/analogwidgets/functions.cpp.obj
.PHONY : analogwidgets/functions.cpp.obj

analogwidgets/functions.i: analogwidgets/functions.cpp.i

.PHONY : analogwidgets/functions.i

# target to preprocess a source file
analogwidgets/functions.cpp.i:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/analogwidgets/functions.cpp.i
.PHONY : analogwidgets/functions.cpp.i

analogwidgets/functions.s: analogwidgets/functions.cpp.s

.PHONY : analogwidgets/functions.s

# target to generate assembly for a file
analogwidgets/functions.cpp.s:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/analogwidgets/functions.cpp.s
.PHONY : analogwidgets/functions.cpp.s

analogwidgets/led.obj: analogwidgets/led.cpp.obj

.PHONY : analogwidgets/led.obj

# target to build an object file
analogwidgets/led.cpp.obj:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/analogwidgets/led.cpp.obj
.PHONY : analogwidgets/led.cpp.obj

analogwidgets/led.i: analogwidgets/led.cpp.i

.PHONY : analogwidgets/led.i

# target to preprocess a source file
analogwidgets/led.cpp.i:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/analogwidgets/led.cpp.i
.PHONY : analogwidgets/led.cpp.i

analogwidgets/led.s: analogwidgets/led.cpp.s

.PHONY : analogwidgets/led.s

# target to generate assembly for a file
analogwidgets/led.cpp.s:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/analogwidgets/led.cpp.s
.PHONY : analogwidgets/led.cpp.s

analogwidgets/manometer.obj: analogwidgets/manometer.cpp.obj

.PHONY : analogwidgets/manometer.obj

# target to build an object file
analogwidgets/manometer.cpp.obj:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/analogwidgets/manometer.cpp.obj
.PHONY : analogwidgets/manometer.cpp.obj

analogwidgets/manometer.i: analogwidgets/manometer.cpp.i

.PHONY : analogwidgets/manometer.i

# target to preprocess a source file
analogwidgets/manometer.cpp.i:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/analogwidgets/manometer.cpp.i
.PHONY : analogwidgets/manometer.cpp.i

analogwidgets/manometer.s: analogwidgets/manometer.cpp.s

.PHONY : analogwidgets/manometer.s

# target to generate assembly for a file
analogwidgets/manometer.cpp.s:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/analogwidgets/manometer.cpp.s
.PHONY : analogwidgets/manometer.cpp.s

analogwidgets/manometer100.obj: analogwidgets/manometer100.cpp.obj

.PHONY : analogwidgets/manometer100.obj

# target to build an object file
analogwidgets/manometer100.cpp.obj:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/analogwidgets/manometer100.cpp.obj
.PHONY : analogwidgets/manometer100.cpp.obj

analogwidgets/manometer100.i: analogwidgets/manometer100.cpp.i

.PHONY : analogwidgets/manometer100.i

# target to preprocess a source file
analogwidgets/manometer100.cpp.i:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/analogwidgets/manometer100.cpp.i
.PHONY : analogwidgets/manometer100.cpp.i

analogwidgets/manometer100.s: analogwidgets/manometer100.cpp.s

.PHONY : analogwidgets/manometer100.s

# target to generate assembly for a file
analogwidgets/manometer100.cpp.s:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/analogwidgets/manometer100.cpp.s
.PHONY : analogwidgets/manometer100.cpp.s

analogwidgets/manometer900.obj: analogwidgets/manometer900.cpp.obj

.PHONY : analogwidgets/manometer900.obj

# target to build an object file
analogwidgets/manometer900.cpp.obj:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/analogwidgets/manometer900.cpp.obj
.PHONY : analogwidgets/manometer900.cpp.obj

analogwidgets/manometer900.i: analogwidgets/manometer900.cpp.i

.PHONY : analogwidgets/manometer900.i

# target to preprocess a source file
analogwidgets/manometer900.cpp.i:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/analogwidgets/manometer900.cpp.i
.PHONY : analogwidgets/manometer900.cpp.i

analogwidgets/manometer900.s: analogwidgets/manometer900.cpp.s

.PHONY : analogwidgets/manometer900.s

# target to generate assembly for a file
analogwidgets/manometer900.cpp.s:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/analogwidgets/manometer900.cpp.s
.PHONY : analogwidgets/manometer900.cpp.s

analogwidgets/widgetwithbackground.obj: analogwidgets/widgetwithbackground.cpp.obj

.PHONY : analogwidgets/widgetwithbackground.obj

# target to build an object file
analogwidgets/widgetwithbackground.cpp.obj:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/analogwidgets/widgetwithbackground.cpp.obj
.PHONY : analogwidgets/widgetwithbackground.cpp.obj

analogwidgets/widgetwithbackground.i: analogwidgets/widgetwithbackground.cpp.i

.PHONY : analogwidgets/widgetwithbackground.i

# target to preprocess a source file
analogwidgets/widgetwithbackground.cpp.i:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/analogwidgets/widgetwithbackground.cpp.i
.PHONY : analogwidgets/widgetwithbackground.cpp.i

analogwidgets/widgetwithbackground.s: analogwidgets/widgetwithbackground.cpp.s

.PHONY : analogwidgets/widgetwithbackground.s

# target to generate assembly for a file
analogwidgets/widgetwithbackground.cpp.s:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/analogwidgets/widgetwithbackground.cpp.s
.PHONY : analogwidgets/widgetwithbackground.cpp.s

helpviewer.obj: helpviewer.cpp.obj

.PHONY : helpviewer.obj

# target to build an object file
helpviewer.cpp.obj:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/helpviewer.cpp.obj
.PHONY : helpviewer.cpp.obj

helpviewer.i: helpviewer.cpp.i

.PHONY : helpviewer.i

# target to preprocess a source file
helpviewer.cpp.i:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/helpviewer.cpp.i
.PHONY : helpviewer.cpp.i

helpviewer.s: helpviewer.cpp.s

.PHONY : helpviewer.s

# target to generate assembly for a file
helpviewer.cpp.s:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/helpviewer.cpp.s
.PHONY : helpviewer.cpp.s

logger.obj: logger.cpp.obj

.PHONY : logger.obj

# target to build an object file
logger.cpp.obj:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/logger.cpp.obj
.PHONY : logger.cpp.obj

logger.i: logger.cpp.i

.PHONY : logger.i

# target to preprocess a source file
logger.cpp.i:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/logger.cpp.i
.PHONY : logger.cpp.i

logger.s: logger.cpp.s

.PHONY : logger.s

# target to generate assembly for a file
logger.cpp.s:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/logger.cpp.s
.PHONY : logger.cpp.s

main.obj: main.cpp.obj

.PHONY : main.obj

# target to build an object file
main.cpp.obj:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/main.cpp.obj
.PHONY : main.cpp.obj

main.i: main.cpp.i

.PHONY : main.i

# target to preprocess a source file
main.cpp.i:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/main.cpp.i
.PHONY : main.cpp.i

main.s: main.cpp.s

.PHONY : main.s

# target to generate assembly for a file
main.cpp.s:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/main.cpp.s
.PHONY : main.cpp.s

mainwindow.obj: mainwindow.cpp.obj

.PHONY : mainwindow.obj

# target to build an object file
mainwindow.cpp.obj:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/mainwindow.cpp.obj
.PHONY : mainwindow.cpp.obj

mainwindow.i: mainwindow.cpp.i

.PHONY : mainwindow.i

# target to preprocess a source file
mainwindow.cpp.i:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/mainwindow.cpp.i
.PHONY : mainwindow.cpp.i

mainwindow.s: mainwindow.cpp.s

.PHONY : mainwindow.s

# target to generate assembly for a file
mainwindow.cpp.s:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/mainwindow.cpp.s
.PHONY : mainwindow.cpp.s

mems-scan_autogen/mocs_compilation.obj: mems-scan_autogen/mocs_compilation.cpp.obj

.PHONY : mems-scan_autogen/mocs_compilation.obj

# target to build an object file
mems-scan_autogen/mocs_compilation.cpp.obj:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/mems-scan_autogen/mocs_compilation.cpp.obj
.PHONY : mems-scan_autogen/mocs_compilation.cpp.obj

mems-scan_autogen/mocs_compilation.i: mems-scan_autogen/mocs_compilation.cpp.i

.PHONY : mems-scan_autogen/mocs_compilation.i

# target to preprocess a source file
mems-scan_autogen/mocs_compilation.cpp.i:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/mems-scan_autogen/mocs_compilation.cpp.i
.PHONY : mems-scan_autogen/mocs_compilation.cpp.i

mems-scan_autogen/mocs_compilation.s: mems-scan_autogen/mocs_compilation.cpp.s

.PHONY : mems-scan_autogen/mocs_compilation.s

# target to generate assembly for a file
mems-scan_autogen/mocs_compilation.cpp.s:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/mems-scan_autogen/mocs_compilation.cpp.s
.PHONY : mems-scan_autogen/mocs_compilation.cpp.s

memsinterface.obj: memsinterface.cpp.obj

.PHONY : memsinterface.obj

# target to build an object file
memsinterface.cpp.obj:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/memsinterface.cpp.obj
.PHONY : memsinterface.cpp.obj

memsinterface.i: memsinterface.cpp.i

.PHONY : memsinterface.i

# target to preprocess a source file
memsinterface.cpp.i:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/memsinterface.cpp.i
.PHONY : memsinterface.cpp.i

memsinterface.s: memsinterface.cpp.s

.PHONY : memsinterface.s

# target to generate assembly for a file
memsinterface.cpp.s:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/memsinterface.cpp.s
.PHONY : memsinterface.cpp.s

optionsdialog.obj: optionsdialog.cpp.obj

.PHONY : optionsdialog.obj

# target to build an object file
optionsdialog.cpp.obj:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/optionsdialog.cpp.obj
.PHONY : optionsdialog.cpp.obj

optionsdialog.i: optionsdialog.cpp.i

.PHONY : optionsdialog.i

# target to preprocess a source file
optionsdialog.cpp.i:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/optionsdialog.cpp.i
.PHONY : optionsdialog.cpp.i

optionsdialog.s: optionsdialog.cpp.s

.PHONY : optionsdialog.s

# target to generate assembly for a file
optionsdialog.cpp.s:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/optionsdialog.cpp.s
.PHONY : optionsdialog.cpp.s

qledindicator/qledindicator.obj: qledindicator/qledindicator.cpp.obj

.PHONY : qledindicator/qledindicator.obj

# target to build an object file
qledindicator/qledindicator.cpp.obj:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/qledindicator/qledindicator.cpp.obj
.PHONY : qledindicator/qledindicator.cpp.obj

qledindicator/qledindicator.i: qledindicator/qledindicator.cpp.i

.PHONY : qledindicator/qledindicator.i

# target to preprocess a source file
qledindicator/qledindicator.cpp.i:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/qledindicator/qledindicator.cpp.i
.PHONY : qledindicator/qledindicator.cpp.i

qledindicator/qledindicator.s: qledindicator/qledindicator.cpp.s

.PHONY : qledindicator/qledindicator.s

# target to generate assembly for a file
qledindicator/qledindicator.cpp.s:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/qledindicator/qledindicator.cpp.s
.PHONY : qledindicator/qledindicator.cpp.s

qrc_resources.obj: qrc_resources.cpp.obj

.PHONY : qrc_resources.obj

# target to build an object file
qrc_resources.cpp.obj:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/qrc_resources.cpp.obj
.PHONY : qrc_resources.cpp.obj

qrc_resources.i: qrc_resources.cpp.i

.PHONY : qrc_resources.i

# target to preprocess a source file
qrc_resources.cpp.i:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/qrc_resources.cpp.i
.PHONY : qrc_resources.cpp.i

qrc_resources.s: qrc_resources.cpp.s

.PHONY : qrc_resources.s

# target to generate assembly for a file
qrc_resources.cpp.s:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/qrc_resources.cpp.s
.PHONY : qrc_resources.cpp.s

serialdevenumerator.obj: serialdevenumerator.cpp.obj

.PHONY : serialdevenumerator.obj

# target to build an object file
serialdevenumerator.cpp.obj:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/serialdevenumerator.cpp.obj
.PHONY : serialdevenumerator.cpp.obj

serialdevenumerator.i: serialdevenumerator.cpp.i

.PHONY : serialdevenumerator.i

# target to preprocess a source file
serialdevenumerator.cpp.i:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/serialdevenumerator.cpp.i
.PHONY : serialdevenumerator.cpp.i

serialdevenumerator.s: serialdevenumerator.cpp.s

.PHONY : serialdevenumerator.s

# target to generate assembly for a file
serialdevenumerator.cpp.s:
	$(MAKE) -f CMakeFiles\mems-scan.dir\build.make CMakeFiles/mems-scan.dir/serialdevenumerator.cpp.s
.PHONY : serialdevenumerator.cpp.s

# Help Target
help:
	@echo The following are some of the valid targets for this Makefile:
	@echo ... all (the default if no target is provided)
	@echo ... clean
	@echo ... depend
	@echo ... package
	@echo ... mems-scan
	@echo ... install/strip
	@echo ... package_source
	@echo ... install
	@echo ... install/local
	@echo ... edit_cache
	@echo ... rebuild_cache
	@echo ... list_install_components
	@echo ... mems-scan_autogen
	@echo ... aboutbox.obj
	@echo ... aboutbox.i
	@echo ... aboutbox.s
	@echo ... analogwidgets/abstractmeter.obj
	@echo ... analogwidgets/abstractmeter.i
	@echo ... analogwidgets/abstractmeter.s
	@echo ... analogwidgets/abstractmeter100.obj
	@echo ... analogwidgets/abstractmeter100.i
	@echo ... analogwidgets/abstractmeter100.s
	@echo ... analogwidgets/abstractmeter900.obj
	@echo ... analogwidgets/abstractmeter900.i
	@echo ... analogwidgets/abstractmeter900.s
	@echo ... analogwidgets/functions.obj
	@echo ... analogwidgets/functions.i
	@echo ... analogwidgets/functions.s
	@echo ... analogwidgets/led.obj
	@echo ... analogwidgets/led.i
	@echo ... analogwidgets/led.s
	@echo ... analogwidgets/manometer.obj
	@echo ... analogwidgets/manometer.i
	@echo ... analogwidgets/manometer.s
	@echo ... analogwidgets/manometer100.obj
	@echo ... analogwidgets/manometer100.i
	@echo ... analogwidgets/manometer100.s
	@echo ... analogwidgets/manometer900.obj
	@echo ... analogwidgets/manometer900.i
	@echo ... analogwidgets/manometer900.s
	@echo ... analogwidgets/widgetwithbackground.obj
	@echo ... analogwidgets/widgetwithbackground.i
	@echo ... analogwidgets/widgetwithbackground.s
	@echo ... helpviewer.obj
	@echo ... helpviewer.i
	@echo ... helpviewer.s
	@echo ... logger.obj
	@echo ... logger.i
	@echo ... logger.s
	@echo ... main.obj
	@echo ... main.i
	@echo ... main.s
	@echo ... mainwindow.obj
	@echo ... mainwindow.i
	@echo ... mainwindow.s
	@echo ... mems-scan_autogen/mocs_compilation.obj
	@echo ... mems-scan_autogen/mocs_compilation.i
	@echo ... mems-scan_autogen/mocs_compilation.s
	@echo ... memsinterface.obj
	@echo ... memsinterface.i
	@echo ... memsinterface.s
	@echo ... optionsdialog.obj
	@echo ... optionsdialog.i
	@echo ... optionsdialog.s
	@echo ... qledindicator/qledindicator.obj
	@echo ... qledindicator/qledindicator.i
	@echo ... qledindicator/qledindicator.s
	@echo ... qrc_resources.obj
	@echo ... qrc_resources.i
	@echo ... qrc_resources.s
	@echo ... serialdevenumerator.obj
	@echo ... serialdevenumerator.i
	@echo ... serialdevenumerator.s
.PHONY : help



#=============================================================================
# Special targets to cleanup operation of make.

# Special rule to run CMake to check the build system integrity.
# No rule that depends on this can have commands that come from listfiles
# because they might be regenerated.
cmake_check_build_system:
	$(CMAKE_COMMAND) -H$(CMAKE_SOURCE_DIR) -B$(CMAKE_BINARY_DIR) --check-build-system CMakeFiles\Makefile.cmake 0
.PHONY : cmake_check_build_system
