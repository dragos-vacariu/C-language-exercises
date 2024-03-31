#include <stdio.h>
#include <stdlib.h>

//PROTOTYPING:
void PrintArrayOfDigits(int* Digits, unsigned int size);
unsigned int GetNumberOfDigits(int number);
int* StoreDigitsInArray(unsigned int number, unsigned int size);
unsigned int CalculateSizeFact(unsigned int size);
int SwapNumbersRepeat(int* Digits, int CurrentPosition, int NextPosition, int size, int sizeFactorial);

int main()
{
    unsigned int number;
    printf("Enter a number: \n");
    scanf("%d", &number);
    unsigned int size = GetNumberOfDigits(number);
    int* DigitsArray = StoreDigitsInArray(number, size);
    if(DigitsArray==NULL)
    {
        return -1;
    }
    unsigned int sizeFactorial = CalculateSizeFact(size);
    printf("There can be provided %d numbers using these digits!\n", sizeFactorial);
    int CurrentPos=0, NextPos=1;
    while(sizeFactorial)
    {
        if(SwapNumbersRepeat(DigitsArray, CurrentPos, NextPos, size, sizeFactorial)>0)
        {
            PrintArrayOfDigits(DigitsArray, size);
        }
        if(NextPos==size-1)
        {
            NextPos=1;
            CurrentPos=0;
        }
        else
        {
            NextPos++;
            CurrentPos++;
        }
        sizeFactorial--;
    }
    scanf("%d");
    return 0;
}
unsigned int GetNumberOfDigits(int number)
{
    unsigned int NrOfDigits=0;
    while(number)
    {
        NrOfDigits++;
        number/=10;
    }
    return NrOfDigits;
}
int* StoreDigitsInArray(unsigned int number, unsigned int size)
{
    int* DigitsArray;
    DigitsArray = (int *) malloc(size*sizeof(int)); //allocate dynamic memory on heap.
    int i=size-1; //if size if 3 the index will be 2.
    while(number)
    {
        *(DigitsArray+i)=number%10;
        number/=10;
        i--;
    }
    int j;
    //CHECKING FOR DISTINCT DIGITS:
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(*(DigitsArray+i)==*(DigitsArray+j)&&i!=j)
            {
                printf("You need to enter distinct digits:\n");
                return NULL;
            }
        }
    }
    return DigitsArray;
}
void PrintArrayOfDigits(int* Digits, unsigned int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d  ", *(Digits+i));
    }
    printf("\n");
}
unsigned int CalculateSizeFact(unsigned int size)
{
    int i;
    unsigned int factorial=1;
    for(i=1;i<size+1; i++)
    {
        factorial*=i;
    }
    return factorial;
}
int SwapNumbersRepeat(int* Digits, int CurrentPosition, int NextPosition, int size, int sizeFactorial)
{
    if(CurrentPosition>-1&&CurrentPosition<size)
    {
        if(NextPosition>-1&&NextPosition<size)
        {
            *(Digits+CurrentPosition)=(*(Digits+CurrentPosition)^*(Digits+NextPosition));
            *(Digits+NextPosition)=(*(Digits+CurrentPosition)^*(Digits+NextPosition));
            *(Digits+CurrentPosition)=(*(Digits+CurrentPosition)^*(Digits+NextPosition));
            return 1;
        }
    }
    printf("Swapping out of boundaries!\n");
    return -1;
}
