#include <iostream>
#include <stdio.h>

using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};

int main()
{

    struct Rectangle r1 = {10000, 5};

    r1.length = 15;
    r1.breadth = 9;

    printf("Length: %lu\n", sizeof(r1));

    return 0;
}