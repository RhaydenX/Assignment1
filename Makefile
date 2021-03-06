#compiler
CC=gcc
#linker
LD=gcc
#include file directory
CFLAGS=-I.

#linker rule
testSort: main.o insertionSort.o sort1.o sort2.o
#	gcc -o testSort main.o insertionSort.o
	$(LD) -o testSort main.o insertionSort.o sort1.o sort2.o
	
#compiler rules
main.o: main.c
#gcc -c -I. main.c
	$(CC) $(CFLAGS) -c main.c	
	 
insertionSort.o: insertionSort.c
	$(CC) $(CFLAGS) -c insertionSort.c	
sort1.o: sort1.c
	$(CC) $(CFLAGS) -c sort1.c	
sort2.o: sort2.c
	$(CC) $(CFLAGS) -c sort2.c	

#clean up procedure		
clean:
	rm *.o
	rm testSort

