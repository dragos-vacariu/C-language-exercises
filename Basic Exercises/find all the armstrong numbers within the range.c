#include <stdio.h>
#include <stdlib.h>

void FindAllTheArmstrongWithinRange(int range);
int GetNumberOfDigits(int number);
int GetCubeOfNumber(int number);
int* GetDigitsArray(int number, int size);

int main()
{
    int range;
    printf("Enter the range: ");
    scanf("%d", &range);
    FindAllTheArmstrongWithinRange(range);
    scanf("%d");
    return 0;
}
void FindAllTheArmstrongWithinRange(int range)
{
    int i=0;
    int counter;
    int* Digits;
    int size;
    int result=0;
    while(i<range+1)
    {
        size=GetNumberOfDigits(i);
        Digits=GetDigitsArray(i, size);
        for(counter=0;counter<size;counter++)
        {
            result+=GetCubeOfNumber(*(Digits+counter));
        }
        if(result==i)
        {
            printf("%d ", i);
        }
        i++;
        result=0;
        free(Digits);
    }
    printf("\n");
}
int* GetDigitsArray(int number, int size)
{
    int* Digits = (int*) malloc(size*sizeof(int));
    int i=0;
    while(number)
    {
        *(Digits+i)=number%10;
        number/=10;
        i++;
    }
    return Digits;
}
int GetNumberOfDigits(int number)
{
    int i=0;
    while(number)
    {
        i++;
        number/=10;
    }
    return i;
}
int GetCubeOfNumber(int number)
{
    return number*number*number;
}
