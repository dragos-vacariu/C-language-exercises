#include<stdio.h>
#define FUN(arg) do\
                 {\
                    if(arg)\
                        printf("IndiaBIX...", "\n");\
                  }while(--i) //this while loop it breaks when it reaches 0 because it does not depend on the
                  //arg condition, the this macro condition works it becomes false when it reaches 0;

int main()
{
    int i=2;
    FUN(i<3); //calling the MACRO
    //The FUNCTION BECOMES:
    /*
    do
    {
        if(2 < 3)
        printf("IndiaBIX...", "\n");
    }while(--2)
    */
    scanf("%d");
    return 0;
}
