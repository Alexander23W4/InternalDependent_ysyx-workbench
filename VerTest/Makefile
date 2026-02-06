# DEFAULT VARIABLES:

# Compiling a C program: n.o is made automatically from n.c with a command of the form 
# $(CC) -c $(CPPFLAGS) $(CFLAGS) $^ -o $@
# Compiling a C++ program: n.o is made automatically from n.cc or n.cpp with a command of the form 
# $(CXX) -c $(CPPFLAGS) $(CXXFLAGS) $^ -o $@
# Linking a single object file: n is made automatically from n.o by running the command 
# $(CC) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) -o $@

CFLAGS= -Wall
SHELL:=/bin/bash

VERILATOR_DEFAULT_MODE= --binary
DEFAULT_FIELS:=Makefile|README\.md|LICENSE
DEFAULT_DIR:=src|build|bin|tests

%: ./src/vercode/%.v 
		verilator $(VERILATOR_DEFAULT_MODE) ./src/vercode/%.v 
		obj_dir/V$@

#clean all Verilator generated code
cleanc:    
		rm -rf ./obj_dir

#clean all files and directories on ./ , except workshop defaults
cleanall:
		ls -l | grep -Ev '^d' | grep -Ev "$(DEFAULT_FIELS)" | xargs -I {} rm -rf {}
		ls -l | grep -E '^d' | grep -Ev "$(DEFAULT_DIR)" | xargs -I {} rm -rf {}

