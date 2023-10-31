#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int size;
    int length;
    int p[20];
};

int binarySearchLoop(struct Array arr, int key)
{
    int high = arr.length - 1, low = 0, mid;

    while (low <= high)
    {
        mid = (high + low) / 2;

        int currentItem = arr.p[mid];

        if (key == currentItem)
            return mid;

        else if (key > currentItem)
            low = mid + 1;

        else
            high = mid - 1;
    }

    return -1;
};

int recursiveBianrySearch(struct Array arr, int key, int high, int mid, int low)
{
    if (low > high)
        return -1;

    mid = (high + low) / 2;

    int currentItem = arr.p[mid];

    if (key == currentItem)
        return mid;

    else if (key > currentItem)
        return recursiveBianrySearch(arr, key, high, mid, mid + 1);

    else
        return recursiveBianrySearch(arr, key, mid, mid - 1, low);
};

int main()
{
    struct Array arr = {10, 10, {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}};

    int searchKey = 20;

    int result = binarySearchLoop(arr, searchKey);

    printf("Search Result: %d\n", result);

    int high = arr.length;
    int low = 0;
    int mid = (high + low) / 2;

    int resultRecursion = recursiveBianrySearch(arr, searchKey, high, mid, low);

    printf("Search Result using recursion: %d\n", resultRecursion);
    return 0;
}