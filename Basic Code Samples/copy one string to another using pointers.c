#include<stdio.h>

int main()
{
    char str1[] = "Hello";
    char str2[10]; // uninitialized
    char *t, *s;
    s = str1;
    t = str2;
    printf("%c\n", *s); // the value of *s is 'H'
    printf("%c\n", *t); // the value of *t is unknown...

    //THE LOOP ENDS WHEN THE STRING ENDS
    while(*t=*s) // *t = *s is an assignment, so now *t = *s
        *t++ = *s++; // setting the value for the next iteration.

    printf("%s\n", str2);
    scanf("%d");
    return 0;
}
