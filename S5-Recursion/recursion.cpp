#include <iostream>

using namespace std;

void ascendingRecursion(int n)
{
    if (n > 0)
    {
        cout << n << ' ';
        ascendingRecursion(n - 1);
    }
};

void descendingRecursion(int n)
{
    if (n > 0)
    {
        descendingRecursion(n - 1);
        cout << n << ' ';
    }
};

int main(void)
{
    int n = 5;

    ascendingRecursion(5);

    cout << endl;

    descendingRecursion(5);

    // What will be the output of the previous code ?

    // ascendingRecursion(5) will output: 5 4 3 2 1
    // descendingRecursion(5) will output: 1 2 3 4 5
    // Why?
    // Because the ascendingRecursion function outputs the value of n during the ascending phase of the recursion.
    // The ascending phase of a recursive function refers to code execution that is done before the function calls itself again
    // In the descendingRecursion function, the output of n is performed during the descending phase of the recursion
    // The descending phase of a recursive function refers to code execution that is done after the function stops executing, returns, and the
    // function's activation record is removed from stack memory

    return 0;
};