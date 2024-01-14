#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *nextNode;
};

struct Node *first = NULL;

void createLinkedList(int array[], int n)
{
    int i;
    struct Node *temp, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = array[0];
    first->nextNode = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        temp = (struct Node *)malloc(sizeof(struct Node));
        temp->data = array[i];
        temp->nextNode = NULL;
        last->nextNode = temp;
        last = temp;
    }
};

int sumElements(struct Node *p)
{
    int sum = 0;

    while (p)
    {
        sum += p->data;
        p = p->nextNode;
    }

    return sum;
};

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    createLinkedList(array, 5);
    int sum = sumElements(first); // 15

    printf("Sum: %d\n", sum);

    return 0;
}