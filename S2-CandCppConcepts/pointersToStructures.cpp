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
    Rectangle r = {10, 5}; // In C++, struct keyword is optional

    Rectangle *p = &r;

    cout << p->length << endl;
    cout << p->breadth << endl;

    // Creating in Heap memory
    Rectangle *pointer;

    // Rectangle object will be created in Heap memory
    pointer = (struct Rectangle *)malloc(sizeof(struct Rectangle)); // C syntax

    pointer->length = 15;
    pointer->breadth = 8;

    cout << pointer->length << endl;
    cout << pointer->breadth << endl;

    // C++ syntax
    Rectangle *p2;
    p2 = new Rectangle;

    p2->length = 20;
    p2->breadth = 10;

    cout << p2->length << endl;
    cout << p2->breadth << endl;

    return 0;
}