all: test.c
	gcc test.c -o test
	./test >/dev/dsp
