CC=gcc
LD=gcc
CFLAGS=-g -W -Wall -ansi -pedantic -std=c11

all: introsort

introsort: introsort.o quicksort.o insertsort.o heapsort.o
	$(LD) -o introsort introsort.o quicksort.o insertsort.o heapsort.o -lm

introsort.o: introsort.c introsort.h
	$(CC) -o introsort.o -c introsort.c $(CFLAGS) 

quicksort.o: quickSort.c
	$(CC) -o quicksort.o -c quickSort.c $(CFLAGS)

insertsort.o: insertsort.c
	$(CC) -o insertsort.o -c insertsort.c $(CFLAGS)

heapsort.o: heapsort.c
	$(CC) -o heapsort.o -c heapsort.c $(CFLAGS)

clean:
	rm -f introsort introsort.o quicksort.o
