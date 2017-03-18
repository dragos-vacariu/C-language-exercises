#include <stdio.h>

int main()
{
    void *P; //a void type pointer is a pointer that doesn't point anywhere, but it could point everywhere, to any data type.
    long a = 23435;
    P = &a;
    printf("Value of a is: %d\n", *((long*)P)); //in order to dereference a void pointer you need to cast it
    //into a pointer of type of what its reference is. In our case of type int or long.
    float fvalue = 3.124532;
    P = &fvalue;
    printf("Value of a is: %f\n", *((float*)P));
    scanf("%d");
    return 0;
}
