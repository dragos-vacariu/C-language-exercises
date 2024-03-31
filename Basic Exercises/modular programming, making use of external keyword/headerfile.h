#ifndef HEADERFILE_H_INCLUDED
#define HEADERFILE_H_INCLUDED
#include <stdio.h>

//YOU NEED TO COMPILE EACH FILE IN THE PROJECT.

//CREATING THE EXTERN VARIABLES
extern int a; //this is marked to extern so it can be used outside of this file.
extern char* message; // this is marked as extern so it can be used outside of this file.
extern void PrintInformation()
{
    printf("The address of a: %d\n", a);
    printf("The address of message: %d\n", message);
    return;
}
int num2=10;
#endif // HEADERFILE_H_INCLUDED
