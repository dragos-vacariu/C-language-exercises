#include <stdio.h>

int main()
{
    unsigned char a = 0;
    unsigned int b = 0;
    unsigned short c = 2;
    printf("Unsigned int printed with %%d: %d - 5 = ", b);
    b-=5;
    printf("%d\n", b);
    /*
    It is strongly recommended to use %u when working with unsigned in c, because printf has this weird behavior
    when treating unsigned int with %d, it will assume that the variable is signed.
    */
    printf("Unsigned int printed with %%u: %d - 5 = ", b);
    b-=5;
    printf("%u\n", b);
    printf("Unsigned char: %d - 5 = ", a);
    a-=5;
    /*
    Unsigned char cannot go below 0 so when trying to do 0-5 it will go to the unsigned char's max value 255 and then
    //subtract 4 so the result will be 251.
    */
    printf("%d\n", a);
    printf("Unsigned short: %d - 5 = ", c);
    c-=5;
    printf("%d\n", c);
    /*
    Unsigned short cannot go below 0 so when trying to do 0-5 it will go to the unsigned short's max value 65537 and then
    //subtract 4 so the result will be 65533.
    */
    scanf("%d");
    return 0;
}
