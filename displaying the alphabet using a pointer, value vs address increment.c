#include <stdio.h>
#include <stdlib.h>

int main()
{
    int* p = (int*)malloc(sizeof(int));
    *p = 65;
    int i;
    for(i=0;i<26;i++)
    {
        printf("%c ", *p);
        (*p)++; //incrementing the value through which p is pointing by 1.
        /*
        *(p) = value of address where p is pointing;
        *p++ = the value where p++ is pointing;
        *(p++) = the same thing as above, the value where p++ is pointing;
        (*p)++ = the value of p incremented by one.
        */
    }
    printf("\n");
    scanf("%d");
    return 0;
}
