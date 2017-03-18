#include<stdio.h>
/*
strupr () and strlwr() can be found in stdio.h
*/

int main()
{
    char a [] = "Black";
    char b [] = "Delegates";
    strupr(a); // this function converts to UPPERCASE:
    strlwr(b); // this function converts to lowercase:
    printf("%s\n", a);
    printf("%s\n", b);
    scanf("%c", &b);
    return 0;
}
