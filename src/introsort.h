#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define K 2
#define S 16
#define ARRAY_LENGTH 32
#define RANDMIN 0
#define RANDMAX 1200

typedef int ListeTri[ARRAY_LENGTH];

/* introsort.c */
void initArray(ListeTri array);
void printArray(ListeTri array);

/* quicksort.c */
void swap(int array[], int firstIndex, int secondIndex);
int partition(int array[], int low, int high);
void quickSort(int array[], int low, int high);

/* insertsort.c */
void insertSort(int array[], int size);

