#include<stdio.h>

int main()
{
    int a=0, b=1, c=3;
    *((a) ? &b : &a) = a ? b : c; // the assignment operator is right to left... so a?b:c will be evaluated before the
    //condition that's in front of the equal sign.
    printf("%d, %d, %d\n", a, b, c); //the output expected would be 0, 1, 3
    /*
    BUT ACTUALY THE OUTPUT WOULD BE: 3, 1, 3. LET'S SEE WHY:
    Step 1: int a=0, b=1, c=3; here variable a, b, and c are declared as integer type and initialized to 0, 1, 3
    respectively.
    Step 2: *((a) ? &b : &a) = a ? b : c; The right side of the expression(a?b:c) becomes (0?1:3). So it return the
    value '3'. The left side of the expression *((a) ? &b : &a) becomes *((0) ? &b : &a). So this contains the address
    of the variable a *(&a).
    Step 3: *((a) ? &b : &a) = a ? b : c; Finally this statement becomes *(&a)=3 (AN ASIGNMENT MADE JUST LIKE A POINTER).
    Hence the variable a has the value '3'.
    Step 4: printf("%d, %d, %d\n", a, b, c); It prints "3, 1, 3".
    */
    scanf("%d");
    return 0;
}
