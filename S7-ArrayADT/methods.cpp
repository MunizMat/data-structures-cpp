#include <iostream>

using namespace std;

class Array
{

public:
    int length;
    int size;
    int *p;
    Array(int length);
    int get(int index);
    int set(int index, int value);
    int max();
    int min();
    int avg();
    int sum();
};

Array::Array(int length)
{
    this->length = length;
    size = length * 2;
    p = new int[size];
};

int Array::get(int index)
{
    if (index < 0 || index >= length)
        return -1;

    return p[index];
};

int Array::set(int index, int value)
{
    if (index < 0 || index >= length)
        return -1;

    p[index] = value;
};

int Array::max()
{
    int max = p[0];

    for (int i = 0; i < length; i++)
    {
        if (p[i] > max)
            max = p[i];
    }

    return max;
}

int Array::min()
{
    int min = p[0];

    for (int i = 0; i < length; i++)
    {
        if (p[i] < min)
            min = p[i];
    }

    return min;
}

int Array::sum()
{
    int total = 0;

    for (int i = 0; i < length; i++)
    {
        total += p[i];
    }

    return total;
}

int Array::avg()
{
    int total = sum();

    return total / length;
}

int main()
{
    Array arr = Array(10);

    for (int i = 0; i < arr.length; i++)
    {
        arr.p[i] = i;
    }

    cout << arr.get(1) << endl; // 1

    return 0;
};