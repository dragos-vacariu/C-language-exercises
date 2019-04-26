#include "headerfile.h"
#include "codefile2.c"

/*
PRACTICALLY FOR COMPILATION TO WORK ON THIS FILE WHICH ASSEMBLES ALL THE DATA TOGETHER, YOU FIRST NEED TO COMPILE.
THE OTHER TWO FILES WHICH CONTAINS THE DECLARATION OF THIS DATA.
*/
int main()
{
    printf("The value of a: %d\n", a);
    printf("The message: %s\n", message);
    printf("The value of num2: %d\n", num2);
    //BEFORE USING MY EXTERNAL FUNCTION IT NEEDS TO BE DECLARED IN ONE OF THE INCLUDED FILES:
    extern void PrintInformation();
    //CALLING THE FUNCTION:
    PrintInformation();
    extern void PrintTwo();
    PrintTwo();
    scanf("%d", &a);
    return 0;
}
