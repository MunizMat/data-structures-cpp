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

int max(struct Node *first)
{
    int max = INT16_MIN;
    struct Node *currentNode = first;

    while (currentNode)
    {
        if (currentNode->data > max)
            max = currentNode->data;

        currentNode = currentNode->nextNode;
    }

    return max;
};

int main()
{
    int array[] = {10, 2, 15, 4, 5};
    createLinkedList(array, 5);

    int maxNum = max(first);

    printf("The maximum number of the linked list is: %d\n", maxNum);

    return 0;
}