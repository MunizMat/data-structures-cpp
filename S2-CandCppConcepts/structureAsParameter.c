#include <stdio.h>
#include <stdlib.h>

struct Rectangle
{
    int length;
    int breadth;
};

// Call by value
int getArea(struct Rectangle r)
{
    return r.breadth * r.length;
};

// Call by address
void changeLength(struct Rectangle *r, int length)
{
    r->length = length;
};

struct Rectangle *createRectangle()
{
    struct Rectangle *p = malloc(sizeof(struct Rectangle));
    return p;
}

int main(void)
{
    struct Rectangle r = {10, 5};

    int area = getArea(r);

    printf("Rectangle area: %d\n", area);

    printf("The length is: %d\n", r.length);

    changeLength(&r, 30);

    printf("The length is now: %d\n", r.length);

    struct Rectangle *p = createRectangle();

    p->length = 10;
    p->breadth = 7;

    struct Rectangle rect = *p;

    int recArea = getArea(rect);

    printf("New created rectangle length: %d\n", rect.length);
    printf("New created rectangle breadth: %d\n", rect.breadth);
    printf("New created rectangle area: %d\n", recArea);

    free(p);

    return 0;
}