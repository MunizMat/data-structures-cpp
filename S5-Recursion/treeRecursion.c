#include <stdio.h>

/*
Space complexity - O(n)
Time complexity - (O 2^n)
*/

void treeRecursion(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        treeRecursion(n - 1);
        treeRecursion(n - 1);
    }
};

int main()
{
    int n = 3;

    treeRecursion(n);

    return 0;
}