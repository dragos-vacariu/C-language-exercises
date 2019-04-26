#include <stdio.h>

void ConvertToBinary (int number);

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    ConvertToBinary (number);
    printf("\n");
    scanf("%d");
    return 0;
}

void ConvertToBinary (int number)
{
    if(number>0)
    {
        ConvertToBinary(number/2);
    }
    printf("%d", number%2);
}
