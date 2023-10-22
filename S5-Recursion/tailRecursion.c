#include <stdio.h>

/*
This code compares two functions with the exact same output:
One is a tail recursive function, another is a function with a while loop
The goal is to show that tail recursions can easily be converted into a loop

Altough this is a very simple program, if we were to compare
The normal tail recursion with the while loop, the
while loop is more efficient in space complexity (time complexity is constant).
The while loop is more efficient in space complexity because in the tail recursion
each time the function is called, it creates a new activation record in the stack memory
with a copy of the local variables required in that function.

So in the execution of tailRecursionIntoWhileLoop(int n) only one activation record is created,
no matter the value of n

In the execution of tailRecursion(int n), the number of activation records created in the stack memory
is proportional to the value of n
*/

void tailRecursion(int n)
{
    if (n > 0)
    {
        printf("%d ", n);
        tailRecursion(n - 1);
    }
};

void tailRecursionIntoWhileLoop(int n)
{
    while (n > 0)
    {
        printf("%d ", n);
        n--;
    }
};

int main()
{
    int n = 4;
    tailRecursion(n);
    printf("\n");
    tailRecursionIntoWhileLoop(n);
}