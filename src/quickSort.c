#include "introsort.h"

void swap(int array[], int firstIndex, int secondIndex)
{
    int temp = array[firstIndex];
    array[firstIndex] = array[secondIndex];
    array[secondIndex] = temp;
}

int partition(int array[], int low, int high)
{
    int pivot = array[high];

    int lowerElem = (low-1);
    for(int i = low; i <= high-1; i++)
    {
        if(array[i] < pivot)
        {
            lowerElem++;
            swap(array, lowerElem, i);
        }
    }
    swap(array, lowerElem+1, high);
    return lowerElem+1;
}

void quickSort(int array[], int low, int high, int count, int size)
{
    if(low < high)
    {
        if(count <= K*log2(size))
        {
            int pivot = partition(array, low, high);
            quickSort(array, low, pivot-1, count+1, size);
            quickSort(array, pivot+1, high, count+1, size);
        }
        else if(count > K*log2(size))
        {
            heapSort(array, size-1);
        }
    }
}