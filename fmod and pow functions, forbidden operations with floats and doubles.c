#include <stdio.h>
#include <math.h>

int main()
{
    float reminderOfFloat, ShiftingOnFloat;
    //rem = (5.5 % 1.3); -> this SINTHAX is wrong. Modulo operator cannot work with floats or doubles
    reminderOfFloat = fmod(5.5f, 1.3f);
    printf("%f\n", reminderOfFloat);
    ShiftingOnFloat = 3.55f;
    printf("Original Float Value: %f\n", ShiftingOnFloat);
    //ShiftingOnFloat << 1; -> this SINTHAX is wrong. The shift operator cannot be used on floats or doubles
    ShiftingOnFloat=pow(ShiftingOnFloat, 2); //pow() is a function designed to raise floats or doubles to an double of
    //float power exponent.
    printf("Pow Float Value: %f\n", ShiftingOnFloat);
    //ShiftingOnFloat^=3; -> this SINTHAX is wrong. Floats and Doubles cannot use bitwise operators &(AND) ^(XOR) |(OR)
    scanf("%d");
    return 0;
}
/*
OTHER THINGS ABOUT FLOATS AND DOUBLES:
-> they cannot be unsigned.
-> they cannot be shifted.
-> they cannot use modulo operator to find a reminder to a division
-> they cannot use bitwise operators
*/
