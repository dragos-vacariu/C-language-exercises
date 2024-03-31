#include <stdio.h>

int main(int argc, char* argv[])
{
    //DEFINING NESTED FUNCTION WORKING IN GCC COMPILER: (FUNCTION INSIDE ANOTHER FUNCTION)
    //THESE KIND OF DECLARATIONS ARE NOT SUPPORTED BY MOST OF COMPILERS BECAUSE IT'S NON-STANDARD (BAD PROGRAMMING)
    int addnumber(int a, int b)
    {
        return a+b;
    }
    printf("%d\n", addnumber(12,3));
    //NASTY PRINTF
    printf("%d >> %d %d >> %d\n", 4 >> 1, 8 >> 1); //this will print 2 for the value of 4, because 4 gets shifted
    //so 4 which is 0100 becomes 0010, which is 2. and then printf prints the value of the next argument which is: 8 shifted
    //to the right it become for because 1000 shifted right becomes 0100.
    //AND after printing these 2, printf runs out of arguments to print, but it still needs to print 2 more values,
    //so those values will be garbage values.
    scanf("%d", &argc);
    return 0;
}
