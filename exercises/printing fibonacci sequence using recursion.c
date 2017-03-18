#include <stdio.h>

void PrintingFibonacciSeries(int number);
/*
The Fibonacci Sequence is the series of numbers:
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
The next number is found by adding up the two numbers before it.
*/

int main()
{
    int number;
    printf("Enter the boundary of fibonacci series: \n");
    scanf("%d", &number);
    PrintingFibonacciSeries(number);
    scanf("%d");
    return 0;
}
void PrintingFibonacciSeries(int number)
{
    static int i=0;
    static int j=0;
    if(i+j<number)
    {
        printf("%d ", i+j);
        if(i==0&&j==0)
        {
            i++;
        }
        else if(j<i)
        {
            j+=i;
        }
        else
        {
            i+=j;
        }
        PrintingFibonacciSeries(number);
    }
}
