#include <stdio.h>
#include <stdlib.h> // used for itoa();


int main()
{
    int a=10;
    long b = 2000384;
    unsigned long c = 1200002;
    char UnsignedStr [52];
    char longBstring [5];
    char IntegerString [5];
    itoa(a, IntegerString, 10); //converting integer a to string under decimal form;
    /*
    Converts an integer value to a null-terminated string using the specified base and stores the result in the
    array given by str parameter.
    SINTHAX: char *  itoa ( int value, char * str, int base );
    int base -> is the form of the integer which you want to convert to string, Example:
    2 -> is for binary form;
    10 -> is for decimal form;
    16 -> is for hexadecimal form;
    int base = Numerical base used to represent the value as a string, between 2 and 36,
    where 10 means decimal base, 16 hexadecimal, 8 octal, and 2 binary.

    SIMILARLY WE CAN USE:
    ltoa() function for long data types;
    SINTHAX: char *ltoa(long N, char *str, int base);
    int base -> is the same like in itoa () function;

    utoa() function for unsigned long data type:
    SINTHAX: char * ultoa(unsigned long l, char * buffer, int redix);
    int rex -> is the same like in itoa () function and ltoa () function: only having these values:
    HEX -> hexadecimal representation
    DECIMAL -> decimal representation
    OCTAL -> octal representation

    sprintf() function can be used to convert any type to a string:
    SINTHAX: int sprintf(char *str, const char *format, ...)
    The C library function int sprintf(char *str, const char *format, ...) sends formatted output to a
    string pointed to, by str.
    If the string passed into this function, which should hold the string value of the conversion is not
    large enough, then the conversion will get corrupted, and the string will only only garbage...
    */
    printf("String Value of Integer: %s\n", IntegerString);
    itoa(a, IntegerString, 2); //converting integer a to string under binary form;
    printf("String Value of Integer: %s\n", IntegerString);
    itoa(a, IntegerString, 3); //converting integer a to string under base 3;
    printf("String Value of Integer: %s\n", IntegerString);
    //SIMILARLY WE CAN CONVERT LONG TO STRING USING ltoa() function:
    ltoa(b, longBstring, 10); //convert this long in string under decimal form;
    printf("String Value of Long: %s\n", longBstring);
    ltoa(b, longBstring, 2); //convert this long in string under binary form;
    printf("String Value of Long: %s\n", longBstring);
    //USING sprintf () function
    sprintf (UnsignedStr, "%ld", c); //if the size of the c-string passed in this function is not
    //large enough the conversion will get corrupted.
    printf("String Value of Unsigned Long: %s\n", UnsignedStr);

    //KEEP THE WINDOW OPENED:
    scanf("%d", &a);
    return 0;
}
