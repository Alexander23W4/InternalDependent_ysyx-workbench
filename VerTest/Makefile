# DEFAULT VARIABLES:

# Compiling a C program: n.o is made automatically from n.c with a command of the form 
# $(CC) -c $(CPPFLAGS) $(CFLAGS) $^ -o $@
# Compiling a C++ program: n.o is made automatically from n.cc or n.cpp with a command of the form 
# $(CXX) -c $(CPPFLAGS) $(CXXFLAGS) $^ -o $@
# Linking a single object file: n is made automatically from n.o by running the command 
# $(CC) $(LDFLAGS) $^ $(LOADLIBES) $(LDLIBS) -o $@

CFLAGS= -g -o0 -Wall
SHELL=/bin/bash

create:
		mkdir -p ./Testfile && echo "sucessful"
		mkdir -p build src tests bin

file1: file1.c
		gcc -g -o0 file1.c -o file1

file1.c:
		if [ ! -f file1.c ]; then \
			touch file1.c && \
			echo '#include <stdlib.h>\nint main(){return 0;}' > file1.c; \
		fi

f: f1.o f2.o

# $@ means all targets 
f1.o f2.o:
	echo $@

DEFAULT_FILES:= LICENSE|Makefile|README\.md

clean:
		rm -rf ./Testfile
		ls -p ./ | grep -v '/$$' | grep -Ev "$(DEFAULT_FILES)" | xargs -I {} rm -rf {}   
# \meaning tranfer valid only in "", but invalid in ''

# single | double quote are note necessary in Makefile syntax
fuck:
		echo fuck

all: create file1 fuck

print: $(wildcard *.c)
		ls -la  $?

hey: one two
	# Outputs "hey", since this is the target name
	echo $@

	# Outputs all prerequisites newer than the target
	echo $?

	# Outputs all prerequisites
	echo $^

	# Outputs the first prerequisite
	echo $<

	touch hey

one:
	touch one

two:
	touch two

objects= file1.o file2.o file.c


# Syntax - targets ...: target-pattern: prereq-patterns ...
# In the case of the first target, foo.o, the target-pattern matches foo.o and sets the "stem" to be "foo".
# It then replaces the '%' in prereq-patterns with that stem

# suck: $(objects)
# 		echo $(CC)

# $(objects): %.o: %.c 
# 		gcc -c $^ -o $@

# (filter %.o,$(objects)): %.o: %.c 
# 		gcc -c $^ -o $@

# suckyou: suckyou.c 
# .PHONY: suckyou


# %:%.c 
# 		echo $<
# 		echo $@
# 		gcc -c $< -o $@