#include<stdio.h>

void FindingSumOfDigits(int number);

int main()
{
    int number;
    printf("Enter a number: \n");
    scanf("%d", &number);
    FindingSumOfDigits(number);
    scanf("%d");
    return 0;
}
void FindingSumOfDigits(int number)
{
    static int digit = 0; //this is static it will be initialized only once;
    digit+=number%10; //add to the last digit of the number to the current value of DIGIT variable
    number/=10; //divide number by 10, such that the last digit of the number gets lost (because of the division of
    //an integer cannot store floating point value, so digit 0-9 will become a value 0.0 - 0.9 and gets lost, because
    //an integer cannot deal with it).
    if(number) //while number is bigger than 0, call this function again.
    {
        FindingSumOfDigits(number);
    }
    else //if number is 0, it means we already added all the digits, so let's print the result.
    {
        printf("The sum of digits is: %d\n", digit);
    }
}
