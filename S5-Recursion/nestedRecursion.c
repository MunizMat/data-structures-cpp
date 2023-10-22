#include <stdio.h>

int nestedRecursion(int n)
{
    if (n > 100)
    {
        return n - 100;
    }
    else
    {
        return nestedRecursion(nestedRecursion(n + 11));
    }
};

int main()
{
    int n = 95;

    nestedRecursion(n);
    return 0;
}