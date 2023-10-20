#include <stdio.h>

using namespace std;

// A C++ object oriented implementation of a C program

class Rectangle
{
private:
    int length;
    int breadth;

public:
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int area()
    {
        return length * breadth;
    }

    void changeLength(int l)
    {
        length = l;
    }
};

int main(void)
{
    Rectangle r(10, 5);

    r.area();
    r.changeLength(9);

    return 0;
}