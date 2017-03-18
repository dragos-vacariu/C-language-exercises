#include <stdio.h>

void main()
{
    int a=1;
    int b=2;
    //UNOPTIMIZED IF STATEMENT:
    if(a==1&&b==2)
    {
        printf("This is UNOPTIMIZED IF STATEMENT!\n");
    }

    //OPTIMIZED IF STATEMENT:
    if(a==1) //nested if statement can be faster that simple if statement
        //when have to check for multiple conditions instead of using && operator it would be more optimized
        //to use this technique with nested if.
    {
        if(b==2)
        {
            printf("This is OPTIMIZED IF STATEMENT!\n");
        }
    }
    scanf("%d");
    return;
}
