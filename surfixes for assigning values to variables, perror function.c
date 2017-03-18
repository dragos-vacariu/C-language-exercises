#include <stdio.h>

int main()
{
    int a = 0x44; //equivalent to a = 68;
    a = 215u; //the last u letter signifies unsigned.
    float b = 314159E-5L; //equivalent to b = 3.141590;
    b = 314159E-4L; //equivalent to b = 31.41590;
    b = 314159E-3L; //equivalent to b = 314.590;
    b = 314159E-6L; //equivalent to b = 0.314590;
    printf("%d\n", a);
    printf("%f\n", b);
    perror("Error"); // this is a useful function that will give you details about any errors.
    scanf("%d");
    return 0;
}
