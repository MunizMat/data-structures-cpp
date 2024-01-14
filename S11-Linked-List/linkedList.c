#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *nextNode;
};

void *createLinkedList(int *array, int length)
{
    // Allocating memory for the first node
    struct Node *first = (struct Node *)malloc(sizeof(struct Node));

    struct Node *currentNode;

    first->data = array[0];
    first->nextNode = (struct Node *)malloc(sizeof(struct Node));

    currentNode = first->nextNode;

    for (int i = 1; i < length - 1; i++)
    {
        currentNode->data = array[i];
        currentNode->nextNode = (struct Node *)malloc(sizeof(struct Node));
        currentNode = currentNode->nextNode;
    };

    currentNode->data = array[length - 1];
    currentNode->nextNode = NULL;

    return first;
};

void displayLinkedList(struct Node *first)
{
    struct Node *currentNode = first;

    while (currentNode)
    {
        printf("%d\n", currentNode->data);
        currentNode = currentNode->nextNode;
    }
};

int main(void)
{
    int numbers[] = {2, 4, 6, 8, 10};

    struct Node *first = createLinkedList(numbers, 5);
    displayLinkedList(first);

    return 0;
}