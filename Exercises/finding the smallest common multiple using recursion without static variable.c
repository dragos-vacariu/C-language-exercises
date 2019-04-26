#include<stdio.h>

void FindCommonMultiple(int num1,int num2, int startingIncrementer);

int main()
{
    int number1,number2;
    printf("Enter num1 and num2: \n");
    if(scanf("%d %d", &number1, &number2)!=2||number1<1||number2<1||number1==number2)
    {
        printf("You have entered wrong values:\n");
        printf("Value must be distinct and greater than 0.\n");
        scanf("%d");
        return 0;
    }
    FindCommonMultiple(number1,number2, 0);
    scanf("%d");
    return 0;
}
void FindCommonMultiple(int num1,int num2, int startingIncrementer)
{
    startingIncrementer+=num1;
    if(startingIncrementer%num1==0&&startingIncrementer%num2==0)
    {
        printf("The smallest common multiple is: %d\n", startingIncrementer);
    }
    else
    {
      FindCommonMultiple(num1,num2,startingIncrementer);
    }
}
