#include <stdio.h>
#include <stdlib.h>

int* SplitNumberIntoDigits(int number, int size);
int GetNumberOfDigits(int number);
void ArmstrongOrNot(int* Digits, int number, int size);
int GetCubeOfNumber(int number);

/*
An Armstrong number is a number such that the sum of its digits raised to the third power is equal to the number
itself.  For example, 371 is an Armstrong number, since 3**3 + 7**3 + 1**3 = 371.
In romana "armstrong number" = numar narcisist.
*/

int main()
{
    int number;
    printf("Enter a number: \n");
    scanf("%d", &number);
    int size = GetNumberOfDigits(number);
    int *Digits = SplitNumberIntoDigits(number, size);
    ArmstrongOrNot(Digits, number, size);
    scanf("%d");
    return 0;
}
int* SplitNumberIntoDigits(int number, int size)
{
    int* Array = (int *) malloc(size*sizeof(int));
    int i=0;
    while(number)
    {
        *(Array+i)=number%10;
        number/=10;
        i++;
    }
    return Array;
}
int GetNumberOfDigits(int number)
{
    int i=0;
    while(number)
    {
        number/=10;
        i++;
    }
    return i;
}
void ArmstrongOrNot(int* Digits, int number, int size)
{
    int i;
    int result=0;
    for(i=0;i<size;i++)
    {
        result+=GetCubeOfNumber(*(Digits+i));
    }
    if(number==result)
    {
        printf("Number %d is armstrong!\n", number);
    }
    else
    {
        printf("Number %d is not an armstrong!\n", number);
    }
}
int GetCubeOfNumber(int number)
{
    return number*number*number;
}
