#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{
    // * is used in declaration and referencing

    int a = 10;
    int *p; // Pointer declaration
    p = &a; // Pointer initialization -> P has the address of a

    int array[5] = {1, 2, 3, 4, 5};

    int *point;
    point = array;

    // Array created in Heap
    int *heapArray;
    heapArray = (int *)malloc(5 * sizeof(int)); // C syntax

    heapArray[0] = 1;
    heapArray[1] = 2;
    heapArray[2] = 3;
    heapArray[3] = 4;
    heapArray[4] = 5;

    int *heapArray2 = new int[5]; // C++ syntax

    heapArray2[0] = 1;
    heapArray2[1] = 2;
    heapArray2[2] = 3;
    heapArray2[3] = 4;
    heapArray2[4] = 5;

    delete[] heapArray; // De-allocating (C ++ syntax)
    free(heapArray2);   // De-allocating (C syntax)

    int myInt = 3;

    int *pointer = new int;
    pointer = &myInt;

    printf("My integre is %d\n", *pointer);

    return 0;
}