#include <stdio.h>
#include <conio.h>
int main ()
{
    int a;
    char b;
    int *p;
    char *q;
    p=&a;
    q=&b;
    a=10;
    b='d';
    printf ("The value of a is %d. \n", a);
    printf ("The address of a is %d. \n", p);
    printf ("The value of b is %c. \n", b);
    printf ("The address of b is %d. \n", q);
    printf ("The value in pointer p is %d \n", *p);
    printf ("The value in pointer q is %c \n", *q);
    getch();
    return 0;
}
