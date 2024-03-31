#include <stdio.h>
#include <stdbool.h>
#define SIZE 50

bool CheckBinaryContent(char number[], int limit);
int GetLimit(char number[]);
void BinaryToDecimalConverter(char number[], int limit);
int GetPowersOfTwo(int rank);

int main()
{
    char number[SIZE];
    printf("Enter a binary value: ");
    scanf("%s", &number);
    int limit = GetLimit(number);
    if(!CheckBinaryContent(number, limit))
    {
        BinaryToDecimalConverter(number, limit);
    }
    scanf("%d");
    return 0;
}
bool CheckBinaryContent(char number[], int limit)
{
    int i;
    for(i=0;i<limit;i++)
    {
        if(number[i]!='1' && number[i]!='0')
        {
            printf("Character: %c at index: %d is not a binary character\n", number[i], i);
            return true;
        }
    }
    return false;
}
int GetLimit(char number[]) //Check how many characters are in the array
{
    int i=0;
    while(number[i]!='\0')
    {
        i++;
    }
    return i;
}
void BinaryToDecimalConverter(char number[], int limit)
{
    int i;
    limit--; //submit one from limit, because arrays starts from 0;
    int rank=0;
    int HoldValue=0;
    int ChToInt;
    for(i=limit;i>-1;i--)
    {
        ChToInt = (number[i]=='1'  ? 1 : 0);
        HoldValue += (ChToInt*GetPowersOfTwo(rank));
        rank++;
    }
    printf("Decimal value: %d\n", HoldValue);
}
int GetPowersOfTwo(int rank) //get powers of 2
{
    if(rank==0)
    {
        return 1;
    }
    else if(rank==1)
    {
        return 2;
    }
    int value=1;
    while(rank)
    {
        value*=2;
        rank--;
    }
    return value;
}
