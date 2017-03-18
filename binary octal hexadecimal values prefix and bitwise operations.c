#include <stdio.h>

int main()
{
    int a = 0b00000001; // each value can be written in binary, decimal, hexadecimal or octal;
    printf("a=%d\n", a);
    a=0b01;
    printf("a=%d\n", a);
    a=0b1111; //a=15;
    printf("a=%d\n", a);
    int b=0b110; //b=6;
    printf("b=%d\n", b);
    int c=a&b;
    /*
    0b1111
    0b0110 =
    0b0110      (6)
    */
    printf("a&b=%d\n", c);
    c=a|b;
    /*
    0b1111
    0b0110=
    0b1111      (15)
    */
    printf("a|b=%d\n", c);
    c=a^b;
    /*
    0b1111
    0b0110=
    0b1001      (9)
    */
    printf("a^b=%d\n", c);
    //Using octal:
    c=076; //this is in octal... the prefix is 0;
    //c=098; => this is wrong, 0 is octal prefix but 9 and 8 are not octal digits.
    printf("Octal c=%d\n", c);
    //Using hexadecimal
    c=0xF; //the prefix for hexadecimal is 0x
    printf("Hexadecimal c=%d\n", c);
    scanf("%d");
    return 0;
}
