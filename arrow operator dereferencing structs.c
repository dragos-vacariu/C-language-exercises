#include <stdio.h>

typedef struct mystruct {
        int a;
        char b;

} tagStruct;

void main()
{
    //Creating a pointer to a structure;
    tagStruct* p1;
    //p1->a = 22; // you cannot modify these values until you assign a struct address to pointer p1.
    tagStruct ObjectStr = {11,'A'};
    p1 = &ObjectStr;
    printf("Before: %d, %c\n", p1->a, p1->b);
    p1->a = 22; //the arrow operator is used to dereference a struct field from the pointer which is pointing to it.
    p1->b = 'D';
    printf("After: %d, %c\n", p1->a, p1->b);
    scanf("%d");
    return;
}
