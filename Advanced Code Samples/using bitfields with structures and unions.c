#include <stdio.h>

struct MyStruct{
    int a:3; //this will create an int consisting in 3 bits
    int b:3; //this will create an int consisting in 3 bits
    int c:13; //this will create an int consisting in 13 bits
    int d:11; //this will create an int consisting in 11 bits
};
union MyUnion{
    char a:3; //this will create an int consisting in 3 bits
    char b:3; //this will create an int consisting in 3 bits
};
int main()
{
    printf("Marimea structurii: %d\n", sizeof(struct MyStruct));
    printf("Marimea uniunii: %d\n", sizeof(union MyUnion));

    union MyUnion m; //union will be only 3 bits wide, since the largest elements has 3 bits.
    m.a=3;
    //These 2 will get the same value.
    printf("a = %d\n", m.a);
    printf("b = %d\n", m.b);
    return 0;
}
