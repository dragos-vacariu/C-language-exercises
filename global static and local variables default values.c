#include <stdio.h>

//Global Variables
int GlobalVar; // global variables have 0 value as default even when they are not initialized.
//Prototyping the functions:
int DisplayValues();

int main()
{
    DisplayValues();
    return 0;
}

int DisplayValues()
{
    //Static Variables as well as Global Variables are stored in heap memory.
    static int a; // static variables have 0 value as default even when they are not initialized.
    unsigned char b;
    unsigned int c;
    printf("Default value for Static variable is: %d\n", a);
    printf("Default value for unsigned char variable is: %c\n", b);
    printf("Default value for unsigned variable is: %d\n", c);
    printf("Default value for Global variable is: %d\n", GlobalVar);
}
