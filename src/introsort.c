#include "introsort.h"

void initArray(ListeTri array)
{
    srand(time(NULL));
    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        array[i] = (rand() % (RANDMAX - RANDMIN + 1)) + RANDMIN;
    }
}

void printArray(ListeTri array)
{
    printf("{ ");
    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        printf("%d ", array[i]);
    }
    printf("}\n\n");
}

int main()
{
    ListeTri array;
    int borneInf = 0;
    int borneSup = ARRAY_LENGTH-1;

    initArray(array);
    printArray(array);

    if((borneSup - borneInf) < S)
    {
        printf("insertsort\n");
        insertSort(array, ARRAY_LENGTH);
    }
    else
    {
        printf("quicksort\n");
        quickSort(array, 0, ARRAY_LENGTH-1, 0, ARRAY_LENGTH);
    }

    printArray(array);
    return 0;
}