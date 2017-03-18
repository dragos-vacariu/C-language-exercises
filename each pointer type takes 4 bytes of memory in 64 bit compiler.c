#include <stdio.h>
/*
Any pointer will take size 4bits in 64 bit compiler, 2 bits in 32 bit compiler.
*/
int main()
{
    char * p;
    int * p2;
    long * p3;
    float * p4;
    double * p5;
    printf("Size of char pointer: %d\n", sizeof(p));
    printf("Size of int pointer: %d\n", sizeof(p2));
    printf("Size of long pointer: %d\n", sizeof(p3));
    printf("Size of float pointer: %d\n", sizeof(p4));
    printf("Size of double pointer: %d\n", sizeof(p5));
    scanf("%d", &*p2);
    return 0;
}
