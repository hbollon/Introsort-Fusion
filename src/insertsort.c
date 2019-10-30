#include "introsort.h"

void insertSort(int array[], int size)
{
    int index, val;
    for (int i = 0; i < size; i++)
    {
        val = array[i];
        index = i-1;
        while (index >= 0 && array[index] > val)
        {
            array[index+1] = array[index];
            index--;
        }
        array[index+1] = val;
    }
}