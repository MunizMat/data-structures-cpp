#include <stdio.h>
#include "factorial.h"

int ncr(int n, int r)
{
    if (n == 0 || r == 0)
        return 1;

    return ncr(n - 1, r - 1) + ncr(n - 1, r);
};