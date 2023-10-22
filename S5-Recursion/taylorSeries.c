#include <stdio.h>

double e(int x, int n)
{
    static double p = 1, f = 1;
    double r;

    if (n == 0)
        return 1;

    r = e(x, n - 1);

    p = p * x;
    f = f * n;

    return r + p / f;
};

double eVariation(int x, int n)
{
    static double s;

    if (n == 0)
        return s;

    s = 1 + x * s / n;

    return eVariation(x, n - 1);
}

int main()
{
    printf("%lf\n", e(1, 10));
    printf("%lf\n", eVariation(1, 10));

    return 0;
};