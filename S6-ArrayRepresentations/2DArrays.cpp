#include <iostream>

// In stack memory
void method1()
{
    // Rows x Columns
    int array[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 0, 1, 2}};
};

// Stack + Heap memory
void method2()
{
    // Array of pointers
    int *array[3];

    array[0] = new int[4];
    array[1] = new int[4];
    array[2] = new int[4];
};

// Double pointer
// In heap memory
void method3()
{
    int **array;

    // Creates an array of pointers in heap
    array = new int *[3];

    array[0] = new int[4];
    array[1] = new int[4];
    array[2] = new int[4];
};
