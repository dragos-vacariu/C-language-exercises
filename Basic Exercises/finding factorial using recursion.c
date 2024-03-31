#include <stdio.h>

int FindFactorial(int number);

int main()
{
    int number;
    printf("Enter a number:\n");
    scanf("%d", &number);
    printf("The factorial is: %d\n", FindFactorial(number));
    scanf("%d");
    return 0;
}

int FindFactorial(int number)
{
    if(number>1)
    {
        number*=FindFactorial(number-1);
    }
    return number;
}
