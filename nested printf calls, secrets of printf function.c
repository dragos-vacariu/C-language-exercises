#include <stdio.h>

int main()
{
    int a=0;
    char* p;
    a=a>>2; // shifting a 0 value to the right won't change the value of 0;
    printf("%d\n", sizeof('A')); //this will display the size of integer.
    printf("%c\n", 7["IndiaBIX"]); //this will display the 7th letter of the string ["IndiaBIX"];
    p="hello";
    printf("%s\n", *&*&p); // the * and & cancels each other, so this will print only the value of p.
    char str[] = "STRING";
    printf(a >10?"Ps\n":"%s\n", str); // using conditional operators in printf() function.
    /*the above printf will print the value of p.*/
    scanf("%d");
    return 0;
}
