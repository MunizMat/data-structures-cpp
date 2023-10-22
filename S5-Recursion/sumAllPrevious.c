#include <stdio.h>

// This can be calculated in other more efficient ways.
// The goal here is only to practice recursion

int sumAllPrevious(int n)
{
    if (n > 0)
        return n + sumAllPrevious(n - 1);
    else
        return 0;
};

int main()
{
    printf("Sum: %d\n", sumAllPrevious(3)); // 6
    printf("Sum: %d\n", sumAllPrevious(4)); // 10
    printf("Sum: %d\n", sumAllPrevious(5)); // 15

    return 0;
};