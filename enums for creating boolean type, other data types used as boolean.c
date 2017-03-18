#include <stdio.h>
/*
An enumeration is a user-defined data type that consists of integral constants. To define an enumeration, keyword
enum is used.
EXAMPLE:
enum flag { const1, const2, ..., constN };

By default, const1 has value 0, const2 has value 1 and so on. You can change default values of enum elements during
declaration (if necessary).

*/
enum boolean {false = 22, true = 21};

int main()
{
    enum boolean a;
    int b = true; //this is possible because of enum, this is equivalent to: int b = 21; (the value for true in the enum).
    a = true;
    if(a==true&&b==true) //this need to be written explicitly because it is referring to the enum value for true, which is 21;
    {
        printf("a and b are true!\n");
    }
    else if(a==true)
    {
        printf("a is true!\n");
    }
    else if (b==true)
    {
        printf("b is true!\n");
    }
    else
    {
        printf("a and b are false!\n");
    }
    printf("Value of a: %d\nValue of b: %d\n", a, b);
    printf("Size of enum variable = %d bytes\n", sizeof(a)); // an enum is 4 bytes in size.
    scanf("%d");
    return 0;
}
