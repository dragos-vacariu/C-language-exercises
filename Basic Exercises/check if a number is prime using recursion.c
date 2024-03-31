#include <stdio.h>

void PrimaryNumberChecker(int number);

int main()
{
    int number;
    printf("Enter a number: \n");
    scanf("%d", &number);
    PrimaryNumberChecker(number);
    scanf("%d");
    return 0;
}

void PrimaryNumberChecker(int number)
{
    static int factor=2;
    if(factor == number)
    {
        printf("Your number is prime number!\n");
        return;
    }
    if(number%factor==0)
    {
        printf("Your number is not prime, it divides with %d\n", factor);
        return;
    }
    factor++;
    PrimaryNumberChecker(number);
}
