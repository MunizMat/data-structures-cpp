#include <stdio.h>

// A C program to be transformed into a C++ class

struct Rectangle
{
    int length;
    int breadth;
};

void initialize(struct Rectangle *r, int l, int b)
{
    r->length = l;
    r->breadth = b;
};

int area(struct Rectangle r)
{
    return r.length * r.breadth;
};

void changeLength(struct Rectangle *r, int l)
{
    r->length = l;
};

int main(void)
{
    struct Rectangle r;

    initialize(&r, 5, 5);

    area(r);

    changeLength(&r, 9);

    return 0;
}