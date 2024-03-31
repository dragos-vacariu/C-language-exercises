#include<stdio.h>
#include <stdarg.h>
#define SQUARE(x) x*x

int main()
{
    float s=10, u=30, t=2, a;
    a = 2*(s-u*t)/SQUARE(t);
    /*
    the expected output is -25, because:
    2*(10-30*2)/2*2 = 2*(10-60)/4 = 2* (-50) / 4 = -100/4 = -25
    but the way that macro calculates it's like this:
    2*(10-30*2)/2*2 = 2* (10-60)/2*2 = 2* -50/2*2 = 2* -25 * 2 = -100

    THE MACROS DON'T KNOW THE CALCULATON RULES!
    */

    printf("Result = %f\n", a);
    a = 2*(s-u*t)/Squaring((int)t);
    /*
    this will bring us the expected outcome: -25;
    because it will calculate like this: 2*(10-30*2)/2*2 = 2*(10-60)/4 = 2* (-50) / 4 = -100/4 = -25
    */
    printf("Result = %f\n", a);
    scanf("%d");
    return 0;
}
int Squaring(int number)
{
    return number*number;
}
