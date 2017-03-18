#include <stdio.h>
#include <stdbool.h>
#define SIZE 20

void ConvertFromHexaToDecimal(char a[], int limit);
int FromCharToInt(char a);
int GetPowered16(int rank);
bool CheckString(char a[], int limit);
int CheckLimit(char a[]);

int main()
{
    char number[SIZE];
    printf("Enter a hexadecimal value: ");
    scanf("%s", &number);
    int limit = CheckLimit(number);
    if(!CheckString(number, limit))
    {
        ConvertFromHexaToDecimal(number, limit);
    }
    scanf("%d");
    return 0;
}
bool CheckString(char a[], int limit)
{
    int i;
    for(i=0;i<limit;i++)
    {
        if(a[i]>47&&a[i]<58)
        {
            continue;
        }
        else if(a[i]>64 && a[i]<71)
        {
            continue;
        }
        else if(a[i]>96 && a[i]<103)
        {
            continue;
        }
        else
        {
            printf("Character: %c  at index %d it is not a hexadecimal character\n", a[i], i);
            return true;
        }
    }
    return false;
}
void ConvertFromHexaToDecimal(char a[], int limit)
{
    int i;
    int rank=0;
    int numberInDec=0;
    int HoldValueOfChar;
    limit--;
    for(i=limit; i>-1; i--)
    {
        HoldValueOfChar = FromCharToInt(a[i]);
        numberInDec += HoldValueOfChar*GetPowered16(rank);
        rank++;
    }
    printf("Decimal Value: %d\n", numberInDec);
}
int GetPowered16(int rank)
{
    if(rank==0)
    {
        return 1;
    }
    else if(rank==1)
    {
        return 16;
    }
    int value=1;
    while(rank)
    {
        value*=16;
        rank--;
    }
    return value;
}
int FromCharToInt(char a)
{
    switch(a)
    {
        case 'A': {return 10;}
        case 'B': {return 11;}
        case 'C': {return 12;}
        case 'D': {return 13;}
        case 'E': {return 14;}
        case 'F': {return 15;}
        case '9': {return 9;}
        case '8': {return 8;}
        case '7': {return 7;}
        case '6': {return 6;}
        case '5': {return 5;}
        case '4': {return 4;}
        case '3': {return 3;}
        case '2': {return 2;}
        case '1': {return 1;}
        case '0': {return 0;}
    }
}
int CheckLimit(char a[])
{
    int i=0;
    while(a[i]!='\0')
    {
        i++;
    }
    return i;
}
