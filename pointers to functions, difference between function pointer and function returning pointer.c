#include <stdio.h>

//CREATING A POINTER TO A FUNCTION THAT TAKE (int, int) AS ARGUMENTS AND RETURNS AN INT;
int (*PointerToAFunction)(int, int);
//CREATING A FUNCTION THAT RETURNS A POINTER TO INT
int *FunctionReturningAPointer(int, int);
/*
As seen above the SINTHAX between creating a pointer to a function, and creating a function that returns a pointer to
something it very similar. So they should not be confused, because those parentheses are very important;
*/

//PROTOTYPING THE FUNCTION:
int FunctionToBePointedTo();

int main()
{
    //ASSIGNING THE VALUE FOR A POINTER TO FUNCTION:
    PointerToAFunction = &FunctionToBePointedTo;
    //PRINTING THE RESULT OFFERED BY FUNCTION TO BE POINTED TO:
    printf("%d\n", PointerToAFunction(8, 7)); // this will be just equivalent to the FunctionToBePointedTo() call;
    printf("%d\n", *FunctionReturningAPointer(5,6));
    scanf("%d");
    return 0;
}

int* FunctionReturningAPointer(int a, int b)
{
    int* p;
    p=&a; // making this pointer to point somewhere, so that he could store a value.
    *p+=b; // increasing the value of a, because p is pointing to a;
    return p;
}
int FunctionToBePointedTo(int a, int b)
{
    return a+b;
}
