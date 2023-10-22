#include <stdio.h>

int fun(int n)
{
    // Static variables are created and stored in code section of memory
    static int x = 0;

    if (n > 0)
    {
        x++;
        return fun(n - 1) + x;
    }

    return 0;
};

int main(void)
{
    int result = fun(5);

    printf("%d\n", result);

    return 0;
}