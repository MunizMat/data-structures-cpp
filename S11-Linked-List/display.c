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

void displayLinkedList(struct Node *p)
{

    while (p != NULL)
    {
        printf("%d\n", p->data);
        p = p->nextNode;
    }
};

void recursiveDisplayLinkedList(struct Node *p)
{
    if (p == NULL)
        return;

    printf("%d\n", p->data);
    recursiveDisplayLinkedList(p->nextNode);
};

int main()
{
    int array[] = {1, 2, 3, 4, 5};
    createLinkedList(array, 5);
    displayLinkedList(first);
    recursiveDisplayLinkedList(first);

    return 0;
}