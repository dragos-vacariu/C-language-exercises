#include <stdio.h>

void PrintOddNumbersWithinRange(int number);

int main()
{
    int number;
    printf("Enter a number: \n");
    scanf("%d", &number);
    PrintOddNumbersWithinRange(number);
    printf("\n");
    scanf("%d");
    return 0;
}
void PrintOddNumbersWithinRange(int number)
{
    static int i=0;
    if(i%2==1)
    {
        printf("%d ", i);
    }
    if(i==number)
    {
        return;
    }
    i++;
    PrintOddNumbersWithinRange(number);
}
