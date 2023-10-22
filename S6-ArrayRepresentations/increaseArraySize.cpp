#include <iostream>

void increaseSize(int array[], int oldSize, int newSize)
{
    // Declares & initializes a pointer to an integer array created in heap memory
    int *p = new int[newSize];

    // Copies the values from the old array to the new array
    for (int i = 0; i < oldSize; i++)
        p[i] = array[i];

    // De-allocates memory from the old array
    delete[] array;

    // Makes the pointer of the old array point to the new array
    array = p;

    p = NULL;
};

int main()
{
    int oldSize = 5, newSize = 10;
    int *array = new int[oldSize];

    for (int i = 0; i < oldSize; i++)
        array[i] = i;

    increaseSize(array, 5, 10);

    return 0;
}