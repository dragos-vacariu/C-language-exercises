#include <stdio.h>

int main()
{
    long double a;
    a = 22.3334f;
    printf("%g\n", (double)a);
    /*
    A long double cannot be properly printed using GCC compiler, so it must be converted/casted into a double
    and displayed as in the example above.
    */
    scanf("%d");
    return 0;
}
/*
Float is a 4 bytes data type able to store precision (float) gives you 23 bits of significant, 6 bits of exponent (6 decimals),
and 1 sign bit.
Double is 8 bytes data type able to store precision (double) gives you 52 bits of significant, 15 bits of exponent (15 decimals),
and 1 sign bit.
Long Double is a 10 bytes data type able to store precision up to 19 exponent (19 decimal) digits.

Type 	   Storage size 	       Value range                 Precision
float 	     4 byte 	           1.2E-38 to 3.4E+38        6 decimal places
double 	      8 byte 	          2.3E-308 to 1.7E+308       15 decimal places
long double  10 byte            3.4E-4932 to 1.1E+4932 	     19 decimal places
*/
