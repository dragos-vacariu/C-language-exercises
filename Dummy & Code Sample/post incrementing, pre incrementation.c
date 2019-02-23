#include <stdio.h>

int main()
{
    int a = 3, b=5, c = 0;
    printf("Before: a=%d, b=%d, c=%d \n", a,b,c);
    c = a+++b; // c = (a++) + b = 2 + 5 = 7;
    printf("After post incrementation: a=%d, b=%d, c=%d \n", a,b,c);
    a = 3, b=5, c=0;
    c = ++a+b; // c = (++a) + b = 3+5 = 8
    printf("After pre incrementation: a=%d, b=%d, c=%d", a,b,c);
    scanf("%d");
    return 0;
}
