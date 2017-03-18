#include <stdio.h>

int main()
{
    /*
        &p is the address of p.
        *p is the thing pointed at by the address p.
        *&p is *(&p) the thing pointed at by the address &p
        *& -> cancels each  other
    */
    char *p = "Hello";
    printf("%s \n", *&p);
    printf("%s \n", p);
    printf("%s \n", *&*&p);
    //printf("%s \n", *p); //this is an error
    printf("%d \n", &p);
    scanf("%d");
    return 0;
}
