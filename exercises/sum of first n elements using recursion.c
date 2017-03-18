#include <stdio.h>

void SumOfNumbersWithinRange(int number);

int main()
{
    int number;
    printf("Enter the boundary for the sum: ");
    scanf("%d", &number);
    SumOfNumbersWithinRange(number);
    scanf("%d");
    return 0;
}

void SumOfNumbersWithinRange(int number)
{
    static int i=0; //this is 0 by default because its static
    i++;
    static int sum; // this is 0 by default because its static
    sum+=i;
    if(i<number)
    {
        SumOfNumbersWithinRange(number);
    }
    else
    {
        printf("The sum of all numbers from 0 to %d is: %d\n", number, sum);
    }
}
