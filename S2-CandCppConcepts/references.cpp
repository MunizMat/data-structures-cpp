#include <iostream>

using namespace std;

int main()
{
    int a = 10;
    int &r = a; // Reference declaration

    int b = 25;
    r = b; // r is not a reference to b. The value of a will become 25. You cannot change the reference

    cout << a << endl
         << r << endl
         << b << endl;

    return 0;
}