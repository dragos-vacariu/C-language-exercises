#include <stdio.h>
#include <math.h>

int GetNumberOfDigitsIntegerPart(double number);
int GetNumberOfDigitsZecimalPart(double number);
void TurnNumbersIntoStrings(double number);
char DigitsToChars(int digit);

int main()
{
    double Number;
    printf("Enter a number: ");
    scanf("%lf", &Number);
    TurnNumbersIntoStrings(Number);
    scanf("%d");
    return 0;
}
void TurnNumbersIntoStrings(double number)
{
    int SizeOfIntPart = GetNumberOfDigitsIntegerPart(number);
    int SizeOfZecPart = GetNumberOfDigitsZecimalPart(number);
    char Digits[SizeOfIntPart+SizeOfZecPart];
    //printf("Size of Array is: %d\n", SizeOfIntPart+SizeOfZecPart);
    int index=SizeOfIntPart-1; //because index starts from 0;
    int ZecimalPart = (number-floor(number))*10000;
    int IntegerPart = number;
    while(IntegerPart)
    {
        Digits[index] = DigitsToChars(IntegerPart%10);
        //printf("index of %c is %d\n", Digits[index], index);
        IntegerPart/=10;
        index--;
    }
    index = SizeOfIntPart;
    Digits[index]='.';
    //printf("index of %c is %d\n", Digits[index], index);
    index += SizeOfZecPart-2;
    while(ZecimalPart)
    {
        Digits[index] = DigitsToChars(ZecimalPart%10);
        //printf("index of %c is %d\n", Digits[index], index);
        ZecimalPart/=10;
        index--;
    }
    index = SizeOfIntPart+SizeOfZecPart-1; //minus 1 because if size is 11 then the max index is 10, because it
    //start counting from 0.
    Digits[index]='\0';
    printf("Your string is: %s\n", Digits);
}
int GetNumberOfDigitsIntegerPart(double number)
{
    int IntNumber = number; // this will take only the integer part of number.
    int NrOfDigits=0;
    while(IntNumber)
    {
        NrOfDigits++;
        IntNumber/=10;
    }
    return NrOfDigits;
}
int GetNumberOfDigitsZecimalPart(double number)
{
    double ZecimalPart;
    ZecimalPart=number-floor(number);
    ZecimalPart*=10000; //this will let me get the first 4 zecimals;
    int IntNumber =ZecimalPart;
    int NrOfDigits = 0;
    while(IntNumber)
    {
        NrOfDigits++;
        IntNumber/=10;
    }
    return NrOfDigits+2; // plus 1 because we require space for \0;
}
char DigitsToChars(int digit)
{
    switch(digit)
    {
        case 0:{return '0';}
        case 1:{return '1';}
        case 2:{return '2';}
        case 3:{return '3';}
        case 4:{return '4';}
        case 5:{return '5';}
        case 6:{return '6';}
        case 7:{return '7';}
        case 8:{return '8';}
        case 9:{return '9';}
    }
}
