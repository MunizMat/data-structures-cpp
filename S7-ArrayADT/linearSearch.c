#include <stdio.h>

struct Array
{
    int size;
    int length;
    int *p;
};

// What's the difference between size and length?
// Size - allocated memory
// Length - occupied memory

int linearSearch(struct Array arr, int key) //  return the index
{
    // Loop through the elements of the array
    // If the element is equal to the key that is being searched, return it
    // If the key is not found, return -1

    for (int i = 0; i, arr.length; i++)
    {
        if (arr.p[i] == key)
            return i;
    };

    return -1;
};
