#include <stdio.h>
#include <stdlib.h>

int main()
{
    //DIFFERENCE BETWEEN CHAR ARRAYS (STRINGS) AND CHAR*
    char a[10];
    char *b;
    //ASSIGNMENT:
    printf("Enter a string value for char array: \n");
    scanf("%s", a); //scanf("%s", &a); -> this would still be right; because an array is a pointer with memory assigned
    //to it.

    printf("Enter a string value for char pointer: \n");
    //scanf("%s", b); //this is wrong, it will crash your program
    //WHEN WORKING WITH POINTERS OF EACH TYPE, IT IS MANDATORY TO MAKE SURE THAT THE POINTER HAS MEMORY LOCATION
    //ASIGNED TO IT, OTHERWISE HE CANNOT STORE ANYTHING, IT WILL CRASH YOUR APPLICATION.
    b = (char* ) malloc(10*sizeof(char));
    //THIS IS WORKING NOW, BECAUSE THIS POINTER HAS A DYNAMIC ARRAY ALLOCATED IN MEMORY SO IT CAN STORE 10 CHAR ELEMENTS

    scanf("%s", b); //when reading with scanf usually you type &variable so that the compiler would know which adress
    //to put that value to, AS POINTERS CAN STORE ONLY ADRESSES, it is a must not to type any & while trying to
    //assign a value to the location when that pointer is pointing to. OTHERWISE, Trying &pointer, the compiler is
    //forced to put a value to that pointer address. THIS SHOULD NEVER BE DONE, because as pointer can store only
    //addresses, users, and programmers, cannot enter them manually.

    printf("Value of array: %s\n", a);

    //WHEN PRINTING A POINTER TO AN ARRAY, THERE DOESN"T NEED TO BE SPECIFIED * (FOR DEREFERENCE)
    printf("Value of char pointer: %s\n", b);
    //printf("Value of char pointer: %s\n", *b); //this is wrong, dereferencing is made only when assigning a value
    //to the address where that pointer is poiting, putting *b in printf it is equivalent to saying **b = value; and
    //this is wrong b is a pointer to a memory location, not a pointer to another pointer... when doing this the
    //compiler will force the address to which b is pointing to, to dereference, but it cannot dereference, because
    //it's value it's a number, not an address.

    /*
    OTHER STORIES ABOUT POINTERS:
    int *p;
    int a;
    p=a; //this is totally wrong, because a holds a value, and p needs to hold an address.
    *p=&a //this is totally wrong also, unless p is pointing to another pointer, which is not in our case,
    so this would be like making the value through which p is pointing too, to hold an address.
    *p=a; //this is good, assigning the value of a, to the address where p is pointing too
    p=&a //this is good, assigning the address of a to p, so p is now pointing to a.
    */

    scanf("");
    return 0;
}
