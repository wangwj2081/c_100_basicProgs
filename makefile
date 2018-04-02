CC=gcc
CFLAGS = -lm
main:tmp.o
	$(CC)  -o main tmp.o $(CFLAGS)
tmp.o:test.c
	gcc -o tmp.o -c test.c
clean:
	rm main tmp.o
	@echo "clean files"
#	echo "clean success"
