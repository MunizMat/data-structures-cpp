#include <stdio.h>
#include <stdlib.h>

struct Array
{
    int size;
    int length;
    int *value;
};

void unsortedArraysUnion(struct Array *firstArray, struct Array *secondArray)
{
    // Declare and initialize variables
    int firstArrayIndex = 0, secondArrayIndex = 0, resultArrayIndex = 0;
    struct Array resultArray;
    resultArray.value = malloc(sizeof(int) * (firstArray->length + secondArray->length));

    // Copy all values from first array into new array
    for (int i = 0; i < firstArray->length; i++)
    {
        resultArray.value[i] = firstArray->value[i];
        resultArray.length++;
    }

    for (int i = 0; i < secondArray->length; i++)
    {
        int itemBeingChecked = secondArray->value[i];
        int isAlreadyInArray = 0;

        for (int j = 0; j < resultArray.length; j++)
        {
            if (resultArray.value[j] == itemBeingChecked)
            {
                isAlreadyInArray = 1;
                break;
            }
        }

        if (isAlreadyInArray == 1)
            ;
        continue;
    }
};

int main()
{
    struct Array union1 = {{3, 5, 10, 4, 6}, 5, 5};
    struct Array union2 = {{12, 4, 7, 2, 5}, 5, 5};

    unsortedArraysUnion(&union1, &union2);

    return 0;
}