#include <stdio.h>
/*
A union is a special data type available in C that allows to store different data types in the same memory location.
You can define a union with many members, but only one member can contain a value at any given time. Unions provide
an efficient way of using the same memory location for multiple-purpose.

The memory occupied by a union will be large enough to hold the largest member of the union. You cannot hold multiple
elements in one union, you can hold only one element at a time, because when you try to hold 2 elements in one union
at the same time, the first element that is added, become corrupted.

Default initialization of unions:
union a z2 = {12}; if you try to pass any more values between the brackets, they will be ignored, because of the
property above

IN C LANGUAGE UNIONS and STRUCTS cannot have constructors or destructor.
IN C LANGUAGE THERE IS NO INHERITANCE.

DIFFERENCES BETWEEN STRUCTS AND UNIONS:
With unions, you're only supposed to use one of the elements, because they're all stored at the same spot.
This makes it useful when you want to store something that could be one of several types. A struct, on the other hand,
has a separate memory location for each of its elements and they all can be used at once.
*/
//FIRST TYPE OF DECLARATION AND DEFINITION
union a
{
    int i;
    char ch;
};
//FIRST TYPE OF DECLARATION AND DEFINITION
typedef union myname {int a; float b;} name; // name is a tag, that tag can be used to create an instance of the union
//or struct, just like it used to be in C++;

int main()
{
    char ch [] = " Hello";
    //GOOD C UNION INTIALIZATION;
    union a z1 = {512}; //
    printf("%d\n", z1);
    //BAD C UNION INITIALIZATION:
    union a z2 = {12,'w'}; // the second value 'w' will be ignored.
    //AS IT CAN BE SEEN IN THIS EXAMPLE, ONLY ONE VALUE WILL BE RETRIEVED FROM THE UNION
    printf("%d\n", z2);
    z2.ch = 'w';
    printf("%c\n", z2);
    //GOOD C INITIALIZATION:
    union myname abc;
    abc.a = 123;
    printf("%d\n", abc);
    //GOOD INITIALIZATION:
    name agb;
    agb.b = 125.6;
    printf("%f\n", agb.b);
    int s;
    scanf("%d", &s);
    return 0;
}
