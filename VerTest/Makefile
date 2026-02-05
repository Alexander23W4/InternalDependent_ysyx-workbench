create:
		mkdir -p ./Testfile && echo "sucessful"

file1: file2
		echo "the file1"
		touch ./Testfile/file1

file2:
		echo "the file2"

clean:
		ls -a ./Testfile | xargs -I {} rm -rf {}

