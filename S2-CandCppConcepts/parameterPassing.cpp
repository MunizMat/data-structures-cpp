#include <stdio.h>
#include <iostream>

using namespace std;

// Call by value
int add(int a, int b)
{
    return a + b;
};

// Call by address
void swapNumbersByAddress(int *a, int *b)
{
    int oldValueA = *a;
    *a = *b;
    *b = oldValueA;
}

// Call by reference (C++ feature)

void swapNumbersByReference(int &a, int &b)
{
    int oldValueA = a;
    a = b;
    b = oldValueA;
}

int main()
{
    // Call/pass by value
    int a = 10;
    int b = 20;

    cout << "A is: " << a << endl;
    cout << "B is: " << b << endl;

    int sum = add(a, b); // sum = 30;

    // Call/pass by address

    swapNumbersByAddress(&a, &b);

    cout << "A is now: " << a << endl; // A is now 20
    cout << "B is now: " << b << endl; // B is now 10

    // Call/pass by reference (and swapping the numbers back)

    swapNumbersByReference(a, b);

    cout << "A is now: " << a << endl; // A is now 10
    cout << "B is now: " << b << endl; // B is now 20

    return 0;
}