create:
		mkdir -p ./Testfile && echo "sucessful"
		mkdir build src tests bin

file1: file1.c
		gcc -g -o0 file1.c -o file1

#  immediate init (:=)
DEFAULT_FILES:= LICENSE Makefile README.md src bin build tests

clean:
		rm -rf ./Testfile
		ls ./ | grep -Ev "$(DEFAULT_FILES)" | xargs -I {} rm -rf {}

 