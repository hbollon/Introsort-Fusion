#include "introsort.h"

void initArray(ListeTri array)
{
    srand(time(NULL));
    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        array[i] = (rand() % (RANDMAX - RANDMIN + 1)) + RANDMIN;
    }
}
void initArrayNeg(ListeTri array)
{
    srand(time(NULL));
    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        array[i] = (rand() % (RANDMAX - RANDMINNEG + 1)) + RANDMINNEG;
    }
}
void initArrayCustom(ListeTri array)
{
    printf("Entrez les valeurs du tableau :\n");
    for (int i = 0; i < ARRAY_LENGTH; i++)
    {
        scanf("%d", &array[i]);
        printf("\n");
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

void menu(ListeTri array)
{
    int input, valid = 0;
    while(valid != 1)
    {
        printf("Bienvenue sur ce programme de tri\n Veuillez entrez le numéro correspondant à l'action souhaité:\n 1 - Tri sur un tableau d'entiers positifs\n 2 - Tri sur un tableau d'entiers positifs et négatifs\n 3 - Tri sur un tableau d'entiers personnalisés\n 0 - Quitter\n");
        scanf("%d", &input);
        switch(input)
        {
        case 0:
            printf("Arrêt\n");
            valid = 1;
            break;

        case 1:
            initArray(array);
            valid = 1;
            break;

        case 2:
            initArrayNeg(array);
            valid = 1;
            break;

        case 3:
            initArrayCustom(array);
            valid = 1;
            break;

        default:
            printf("Erreur de saisie, veuillez recommencer.");
            break;
        }
    }
}

int main()
{
    ListeTri array;
    int borneInf = 0;
    int borneSup = ARRAY_LENGTH-1;

    menu(array);
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