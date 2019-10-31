#include "introsort.h"

void heapify(ListeTri array, int index, int size)
{
    int i = index;
    int j = 2*i;
    while (j <= size)
    {
        if((j < size) && (array[j] < array[j+1]))
            j = j+1;
        if (array[i] < array[j])
        {
            swap(array, i, j);
            i = j;
            j = 2*i;
        }
        else
        {
            j = size+1;
        }
    }
}

void heapSort(ListeTri array, int size)
{
    printf("heapsort\n");
    for (int i = size/2; i >= 0; i--)
    {
        heapify(array, i, size);
    }
    for (int i = size; i >= 1; i--)
    {
        swap(array, i, 0);
        heapify(array, 0, i-1);
    }
}