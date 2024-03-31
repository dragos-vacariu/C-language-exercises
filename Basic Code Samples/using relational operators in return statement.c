#include <stdio.h>
#include <stdbool.h> // for bool data type;
/*
C90 does not support the boolean data type. That's why we need to make use of stdbool.h library.
*/

bool checkEquality();
bool checkGreater();
int CheckNotEqualTo();
main() // the default return type (when it's unspecified) it's integer.
{
    printf("%d\n",checkEquality(2,3));
    printf("%d\n",checkGreater(3,2));
    printf("%d\n",CheckNotEqualTo(3,2));
    scanf("%d");
    return 0;
}

bool checkEquality (int a, int b)
{
    return (a==b); // will return either 1 (for true) or 0 (for false)
}
bool checkGreater (int a, int b)
{
    return (a>b); // will return either 1 (for true) or 0 (for false)
}
int CheckNotEqualTo(int a, int b)
{
    return (a!=b);
}
