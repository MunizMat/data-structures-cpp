#include <stdio.h>

void headRecursion(int n)
{
    if (n > 0)
    {
        headRecursion(n - 1);
        printf("%d ", n);
    }
};

int main()
{
    int n = 4;

    headRecursion(n);

    return 0;
};