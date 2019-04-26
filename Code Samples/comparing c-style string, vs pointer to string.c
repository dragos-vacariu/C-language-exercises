#include <stdio.h>
#include <string.h> //used for strcmp() and other string related functions;
int main()
{
    char a[] = "Black";
    char *b = "Black";
    //Comparing a c-style string using == if obviously wrong, and it doesn't work in C:
    if(a=="Black")
    {
        printf("A is Black!\n");
    }
    //Comparing a pointer to a string:
    if(b=="Black")
    {
        printf("B is Black!\n");
    }
    //Comparing a c-style string using strcmp();
    if(strcmp(a, "Black")==0) //strcmp() returns 0 if the strings passed as arguments are identical.
        //if string1 < string2 returns a value < 0, if string1 == string2 returns 0, if string1 > string2
        //returns a value > 0
    {
        printf("C is Black!\n");
    }
    scanf("%d");
    return 0;
}
