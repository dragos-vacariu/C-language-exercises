#include<stdio.h>
#define CUBE(x) (x*x*x)

int main()
{
    int a, b=3;
    a = CUBE(b++);
    printf("%d, %d\n", a, b);
    /*the output that is expected would be 27, 4, because b is post-incremented so
    its value it's first used and then incremented, so it should be 3*3*3 = 27 and b = 3+1 (because of incrementation)
    BUT THE RESULTED OUTPUT IS FAR FROM THE EXPECTED ONE:

    -> the way that MACRO Function does the job IN TURBO C is:
    a = 3++ * 3++ * 3++; as the post incrementation works a = 3*3*3 = 27
    but b still gets incremented 3 times in a row, so b = 3+1+1+1 = 6
    SO THE OUTPUT WILL BE 27, 6;

    -> the way that MACRO Function does the job GNU Compiler (also called GCC) is:
    a = 3++ * 3++ * 3++ as the post incrementation works in GCC: a=3*4*5 = 60
    SO THE OUTPUT WILL BE: 60, 6;
    */
    scanf("%d");
    return 0;
}
