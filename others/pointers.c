#include <stdio.h>
#include <stdlib.h>

struct Person
{
    char *name;
    int age;
};

int main(void)
{

    // Create a person in the heap

    // To create in the heap I have to use malloc()

    // Malloc function returns the memory address of the first byte of the memory block

    size_t byteSize = sizeof(struct Person);

    struct Person *person = (struct Person *)malloc(byteSize);

    person->name = "John Doe";
    person->age = 30;

    printf("Name: %s\n", person->name);
    printf("Name: %d\n", person->age);

    free(person);

    return 0;
}