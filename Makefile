all: test.c
	gcc test.c -o test
	./test >/dev/dsp
harmonies: harmonies.c
	gcc harmonies.c -o test
	./test >/dev/dsp
