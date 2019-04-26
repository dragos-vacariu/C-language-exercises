#include <stdio.h>

int main()
{
    /*
    Volatile tells the compiler not to optimize anything that has to do with the volatile variable.
    A volatile variable is flagged by the compiler that, that variable's value could change any time, even if it
    doesn't loop so, so the compiler will not effect any optimizations on it, this could be very useful when working
    with embedded systems.The reason to use it: When you interface with hardware.
    */
    volatile int a;
    a= 22;
    printf("The value of a is: %d\n", a);
    scanf("%d", &a);
    return 0;
}
