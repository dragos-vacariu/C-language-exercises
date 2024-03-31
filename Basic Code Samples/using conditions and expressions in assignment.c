#include <stdio.h>

int main()
{
    int i=1, j=2, k=3;
    int m;
    m = (++i && ++j); // m=1 because the condition is TRUE.
    //THE CONDITION ABOVE IS TRUE BECAUSE BOTH NUMBERS ARE DIFFERENT FROM 0;
    printf("%d\n", m);
    m = (1||0); // m is still 1, because using || (OR) both numbers needs to be 0, for the condition to be FALSE._
    printf("%d\n", m);
    m = (0||0); // m = 0 because, both number are 0;
    printf("%d\n", m);
    scanf("%d");
    return 0;
}
