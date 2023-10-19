#include <stdio.h>
#include <stdlib.h>

// Create an array in the heap memory, through a function, and then loop through it in the main function

int *createIntArray(int size)
{
    // Allocate heap memory based on the size

    // Here I allocate memory using malloc() and reference the allocated memory through a pointer
    int *p = malloc(size * (sizeof(int)));

    // Filling the array
    for (int i = 0; i < size; i++)
        p[i] = i * i;

    // Returning the pointer so it can be referenced in main
    return p;
};

int main(void)
{
    int size = 7;

    int *pointer;

    pointer = createIntArray(size);

    for (int i = 0; i < size; i++)
        printf("%d\n", pointer[i]);

    return 0;
}