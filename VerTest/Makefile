# DEFAULT VARIABLES:

# Compiling a C program: n.o is made automatically from n.c with a command of the form 
# $(CC) -c $(CPPFLAGS) $(CFLAGS) $^ -o $@
# Compiling a C++ program: n.o is made automatically from n.cc or n.cpp with a command of the form 
# $(CXX) -c $(CPPFLAGS) $(CXXFLAGS) $^ -o $@
# Linking a single object file: n is made automatically from n.o by running the command 
# $(CC) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) -o $@

# --binary -j 0 -Wall 
# --cc --exe --build -Wall --trace 
# --cc --exe --build -j 0 -Wall

CFLAGS= -Wall
SHELL:=/bin/bash

# the ver_flag for C++ configure compilation
VERILATOR_DEFAULT_MODE=--cc --exe --build -j 0 -Wall
# --trace-vcd

DEFAULT_FILES:=Makefile|README\.md|LICENSE
DEFAULT_DIR:=src|build|bin|tests

%: ./src/Cppcode/%.cpp ./src/vercode/%.v
		verilator $(VERILATOR_DEFAULT_MODE) $^
		./obj_dir/V$@

#clean all Verilator generated code
cleanc:    
		rm -rf ./obj_dir

#clean all files and directories on ./ , except workshop defaults
cleanall:
		ls -p | grep -Ev '/$$' | grep -Ev "$(DEFAULT_FILES)" | xargs -I {} rm -rf {}
		ls -p | grep -E '/$$' | grep -Ev "$(DEFAULT_DIR)" | xargs -I {} rm -rf {}

