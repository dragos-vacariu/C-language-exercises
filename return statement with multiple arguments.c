#include <stdio.h>

//AS NOTICED, this program will compile without even prototyping the function
//without even the declaration of int Multiple();

int main()
{
    int a, b;
    a=Multiple(1,4,5);
    printf("%d\n", a);
    b=Multiple(1,4,5);
    printf("%d\n", a);
    scanf("%d");
    return (0);
}

int Multiple(int num1, int num2, int num3)
{
    num1=num2+num3;
    num2=num1+num3;
    //return (num1, num2); // this will return only the second value (num2);
    return (1,2,4,5,6,7,8); //this will return only 8 (the last specified argument);
}
