CFLAGS=-std=gnu99 --pedantic -Wall -Werror
rotate-matrix: read-matrix.o rotate.c
	gcc -o rotate-matrix read-matrix.o rotate.c
read-matrix.o: rotate.c
	gcc $(CFLAGS) -c rotate.c
