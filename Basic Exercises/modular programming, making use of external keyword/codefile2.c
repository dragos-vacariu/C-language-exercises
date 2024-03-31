#include "headerfile.h"

//YOU NEED TO COMPILE EACH FILE IN THE PROJECT

/* Definition checked against declaration
THIS FUNCTION NEEDS TO BE REDECLARED HERE SO  THEY CAN BE INITIALIZED
*/
int a=20;
char* message = "This is an external string!";

extern void PrintTwo()
{
    printf("The address of a: %d\n", a);
    printf("The address of message: %d\n", message);
}
