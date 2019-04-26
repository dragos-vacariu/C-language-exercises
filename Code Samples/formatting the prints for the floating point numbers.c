#include<stdio.h>

int main()
{
    float a=34.15529;
    //THIS WILL PRINT 1 DECIMAL DIGIT
    printf("%2.1f\n", a);
    //THIS WILL PRINT 2 DECIMAL DIGITS
    printf("%2.2f\n", a);
    //THIS WILL PRINT 3 DECIMAL DIGITS
    printf("%2.3f\n", a);
    //THIS WILL PRINT 4 DECIMAL DIGITS
    printf("%2.4f\n", a);
    printf("%3.5f\n", a);
    printf("%5.10f\n", a);
    printf("%8.10f\n\n", a); //the value 2,3,5,8 that are in front of the .2f .3f .4f... won't affect the format of
    //of printing the floating value.

    //THESE WORK THE SAME WAY AS THOSE ABOVE:
    printf("%.5f\n", a);
    printf("%.6f\n", a);
    printf("%.7f\n\n", a);
    //THESE WILL PRINT THE SAME THING:
    printf("%5f\n", a);
    printf("%6f\n", a);
    printf("%7f\n", a);

    scanf("%f", &a);
    return 0;
}
