#include<stdio.h>

int main()
{
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    //THIS IS NOT POSSIBLE // THE COMPILER WILL WARN THIS AS "Wdiv by zero - WARNING".
    a=a/0; //division by 0 will crash every program at the runtime.
    /*
    There cannot exist division by 0; In some programming languages an exception will be thrown, after the program crashes.
    */
    printf("%d\n", a);
    scanf("%d");
    return;
}
