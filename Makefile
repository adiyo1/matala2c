all: connections
connections: my_mat.o main.o
	gcc -Wall -g -o connections main.o my_mat.o
main.o: my_mat.h 
my_mat.o: my_mat.h
clean:
	rm -f *.o connections