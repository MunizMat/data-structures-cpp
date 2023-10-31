#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int *p;
    int size;
    int length;
};

int main()
{
    struct Array arr;

    printf("Enter size of an array: ");
    scanf("%d", &arr.size);

    arr.p = (int *)malloc(arr.size * sizeof(int));
    arr.length = 0;

    return 0;
}