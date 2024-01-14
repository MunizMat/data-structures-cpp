#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int size;
    int length;
    int *p;
};

void mergeArrays(struct Array *arr1, struct Array *arr2)
{
    int i, j, k;
    i = j = k = 0;
    struct Array *arr3 = (struct Array *)malloc(sizeof(struct Array));

    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->p[i] < arr2->p[j])
            arr3->p[k++] = arr1->p[i++];
        else
            arr3->p[k++] = arr2->p[j++];
    }

    for (; i < arr1->length; i++)
        arr3->p[k++] = arr1->p[i];
}

int main()
{
    struct Array arr1 = {{2, 6, 10, 15, 25}, 10, 5};
    struct Array arr2 = {{3, 4, 7, 18, 20}, 10, 5};

    return 0;
}