#include <stdio.h>

int factorialCalc(int number);
int seriesCal(int number);
void PrintSeries(int number);
/*
This program will calculate this series from 1 to n : 1!/1 + 2!/2 + ..... n!/n.
*/

int main()
{
    int number;
    printf("Enter a number: \n");
    scanf("%d",&number);
    PrintSeries(number);
    printf("The Result: %d\n", seriesCal(number));
    scanf("%d");
    return 0;
}

int factorialCalc(int number)
{
    int fact=1;
    int i=1;
    for(i=1;i<number+1;i++)
    {
        fact*=i;
    }
    return fact;
}
int seriesCal(int number)
{
    int i=1;
    int result=0;
    while(i<=number)
    {
        result+=factorialCalc(i)/i;
        i++;
    }
    return result;
}
void PrintSeries(int number)
{
    int i=1;
    printf("\nSeries to calculate: ");
    while(i<number+1)
    {
        if(i<number)
        {
            printf("%d!/%d + ", i,i);
        }
        else
        {
            printf("%d!/%d\n\n", i,i);
        }
        i++;
    }
}
