#include <stdio.h>

int fib(int n)
{
    if (n <= 1)
        return n;

    return fib(n - 2) + fib(n - 1);
}

// Using loop

int fibWithLoop(int n)
{
    int t0 = 0, t1 = 1, sum, i;

    if (n <= 1)
        return n;

    for (i = 2; i <= n; i++)
    {
        sum = t0 + t1;
        t0 = t1;
        t1 = sum;
    }

    return sum;
}

int fibWithMemoization(int n)
{
    static int memo[10];

    if (memo[n] > 0)
        return memo[n];

    if (n <= 1)
    {
        memo[n] = n;
        return n;
    }

    return fib(n - 2) + fib(n - 1);
}

int main()
{
    printf("Fibonacci of %d using recursion: %d\n", 7, fib(7));
    printf("Fibonacci of %d using loop: %d\n", 7, fibWithLoop(7));
    printf("Fibonacci of %d using recursion and memoization: %d\n", 7, fibWithMemoization(7));

    return 0;
};