gcc -ansi singly.c -c singly.o
ar rcs libsingly.a singly.o
gcc -ansi circular.c -c circular.o
ar rcs libcircular.a circular.o
gcc -ansi doubly.c -c doubly.o
ar rcs libdoubly.a doubly.o
gcc -ansi circulardoubly.c -c circulardoubly.o
ar rcs libcirculardoubly.a circulardoubly.o