#include <stdio.h>

void PerfectNumberChecker(int number);

/*
Illustration of the perfect number status of the number 6 (which can be composed summing its divisors 1, 2, and 3).
In number theory, a perfect number is a positive integer that is equal to the sum of its proper positive divisors,
that is, the sum of its positive divisors excluding the number itself (also known as its aliquot sum).
*/

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    PerfectNumberChecker(number);
    scanf("%d");
    return 0;
}
void PerfectNumberChecker(int number)
{
    int i=1;
    int result=0;
    while(i<number)
    {
        if(number%i==0)
        {
            result+=i;
        }
        i++;
    }
    if(result==number)
    {
        printf("\nNumber %d is perfect number!\n", number);
    }
    else
    {
        printf("\nNumber %d is not a perfect number!\n", number);
    }
}

