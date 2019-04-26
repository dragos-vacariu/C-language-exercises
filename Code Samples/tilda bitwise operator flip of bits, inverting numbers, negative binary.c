#include <stdio.h>

int main()
{
    int a= 2;
    int b = ~a;
    // this operator has the effect of fliping the bits.
    //SO FROM a = 2 (0000 0010) BY APPLYING b= ~a WILL RESULT b= (1111 1101) which is -3
    /*so it will keep the 1 bits unchanged and it will change the 0 bits to 1.*/
    printf("The value of b is: %d\n", b);
    a = 32; //0010 0000 this is 32;
    b = ~a; //1101 1111 this is -33;
    /*
    TO CONVERT POSITIVE BINARY NUMBERS TO NEGATIVE BINARY NUMBERS THE RULE IS THE FOLLOWING:
    -> let's say we have 00100101 (which 37);
    -> to convert that number to negative binary, the first step is to invert all the bits:
    -> so inverting all the bits 00100101 will become 11011010;
    -> after inverting the bits you need to add 1 to the resulted value
    -> so 11011010 + 1 will be 11011011;
    -> so -37 will be 11011011;
    */
    printf("The value of b is: %d\n", b);
    a = 66;
    b = ~a;
    printf("The value of b is: %d\n", b);
    a = 132;
    b = ~a;
    printf("The value of b is: %d\n", b);
    scanf("%d", &a);
    return 0;
}
