gcc singly.c -c singly.o
ar rcs libsingly.a singly.o
gcc circular.c -c circular.o
ar rcs libcircular.a circular.o