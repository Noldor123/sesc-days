run:prog
	./prog
prog:prog.c
	gcc -std=c99 prog.c -lm -o prog
build:prog
