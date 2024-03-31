#include <stdio.h>

int main()
{
    int a = 4;
    int b = 5; // binary: 00000101;
    printf("%d\n", a=a<<1);
    printf("%d\n", a=a<<1);
    printf("%d\n", a=a<<1);
    printf("%d\n", a=a>>2);
    printf("%d\n", b=b<<1); // from 00000101=5 goes to 00001010 = 10
    printf("%d\n", b=b<<1); // from 00001010=10 goes to 00010100 = 20
    printf("%d\n", b=b<<1); // from 00010100=20 goes to 00101000 = 40
    printf("Hexadecimal B: %x\n", b); // printing the hexadecimal value of b5
    b = 5&6; // using bitwise operator & (and) to initialize a variable
    // so b = (0101 & 0110) so b gets value 4, because only the third bit (which give the value of 4) is
    //enabled in 5 and 6
    printf("Bitwise: %d\n", b);
    b = 5|11; // using bitwise operator | (OR) to initialize a variable
    //so b = (0101 | 1011) so b get the value 1111 (which is 15) because in | (OR) to obtain a 0 bit on position k
    //number1 and number2 must have both the value 0 on position k, so here it's not the case.
    //EXAMPLE:
    //a   b   c   d
    //0   0   0   0         -> num1
    //1   1   1   1         -> num2
    //APPLYING OR to num1 and num2 we will get the value 1111, because neither a,b,c,d position num1 and num2(BOTH TOGETHER)
    //doesn't have 0 value.
    printf("Bitwise: %d\n", b);
    scanf("%d", &a);
    return 0;
}
/*
IN the examples above: a=4; which means a = 0000100 in binary;
Shifting means moving all the 1 bit values to the left or to the right;
AFTER 1 shift to the right a = 00000010 = 2;
AFTER 2 shifts to the left a = 00001000 = 8;

IMPORTANT: Each shifting to the left will multiply by 2 the current value, while each shifting to the right will
divide by 2 the current value.
2 Shifts to the left will multiply the current value by 4, while 2 shifts to the right will divide the value by 4.
*/
