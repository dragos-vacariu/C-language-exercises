#include<stdio.h>
#include<stdlib.h>

int main ()
{
    char input[] = "8.0 2.0";
    char * ptr_end;
    double x, y;
    //Converting string elements into double;
    x = strtod (input,&ptr_end);
    y = strtod (ptr_end,NULL);
    /*
    The C library function double strtod(const char *str, char **endptr) converts the string pointed to by the argument
    str to a floating-point number (type double). If endptr is not NULL, a pointer to the character after the last
    character used in the conversion is stored in the location referenced by endptr.

    SINTHAX: double strtod(const char *str, char **endptr)
    str -- This is the value to be converted to a string.
    endptr -- This is the reference to an already allocated object of type char*, whose value is set by the function
    to the next character in str after the numerical value.

    */
    printf ("Num1= %.2lf\nNum2 = %.2lf\n", x,y);
    scanf("%d");
    return 0;
}
