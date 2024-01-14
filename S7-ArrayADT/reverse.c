#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int size;
    int length;
    int *p;
};

/*
    Two reverse methods
        - Copy values from one array to another
        - Swap the elements of the array
*/

void reverseByCopy(struct Array *arr)
{
    int *copy;
    int arrIndex, copyIndex;

    copy = (int *)malloc(arr->length * sizeof(int));

    for (int copyIndex = 0, arrIndex = arr->length - 1; arrIndex > -1; arrIndex--, copyIndex++)
    {
        copy[copyIndex] = arr->p[arrIndex];
    }

    for (int i = 0; i < arr->length; i++)
    {
        arr->p[i] = copy[i];
    }

    free(copy);
}

void reverseBySwap(struct Array *arr)
{
    int ascendingIndex, descendingIndex, temp;

    for (ascendingIndex = 0, descendingIndex = arr->length - 1; descendingIndex > ascendingIndex; descendingIndex--, ascendingIndex++)
    {
        temp = arr->p[ascendingIndex];
        arr->p[ascendingIndex] = arr->p[descendingIndex];
        arr->p[descendingIndex] = temp;
    }
}

int main(void)
{
    struct Array arr = {5, 5, malloc(sizeof(int) * 5)};

    for (int i = 0; i < arr.length; i++)
    {
        arr.p[i] = i + 1;
    }

    printf("Original array\n\n");

    for (int i = 0; i < arr.length; i++)
    {
        printf("Element: %d\n", arr.p[i]);
    }

    printf("\nReversing by copy...\n");

    reverseByCopy(&arr);

    for (int i = 0; i < arr.length; i++)
    {
        printf("Element: %d\n", arr.p[i]);
    }

    printf("\nReversing back to original by swap...\n");

    reverseBySwap(&arr);

    for (int i = 0; i < arr.length; i++)
    {
        printf("Element: %d\n", arr.p[i]);
    }

    return 0;
}