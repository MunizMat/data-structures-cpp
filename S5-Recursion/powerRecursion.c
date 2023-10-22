#include <stdio.h>

int exponential(int m, int n)
{
    if (n < 1)
        return 1;

    return m * exponential(m, n - 1);
};

// More efficient version

int moreEfficient(int m, int n)
{
    if (n == 0)
        return 1;

    if (n % 2 == 0)
        return moreEfficient(m * m, n / 2);

    else
        return m * moreEfficient(m * m, (n - 1) / 2);
}

int main()
{
    int twoSquared = exponential(2, 2);
    int fiveSquared = exponential(5, 2);

    printf("Two squared: %d\n", twoSquared);
    printf("Five squared: %d\n", fiveSquared);

    twoSquared = moreEfficient(2, 2);
    fiveSquared = moreEfficient(5, 2);

    printf("Two squared (more efficient): %d\n", twoSquared);
    printf("Five squared (more efficient): %d\n", fiveSquared);

    return 0;
};