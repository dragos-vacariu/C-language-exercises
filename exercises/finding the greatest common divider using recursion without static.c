#include <stdio.h>

void FindTheGreatestCommonDividerRecursively(int num1, int num2, int divider);
int GetLowest(int num1, int num2);
int main()
{
    int number1, number2;
    printf("Enter the values for number1 and number2: \n");
    if(scanf("%d %d", &number1, &number2)!=2||number1<1||number2<1||number1==number2)
    {
        printf("You have entered wrong values: \n");
        scanf("%d");
        return 0;
    }
    FindTheGreatestCommonDividerRecursively(number1,number2,GetLowest(number1,number2));
    scanf("%d");
    return 0;
}
void FindTheGreatestCommonDividerRecursively(int num1, int num2, int divider)
{
    if(num1%divider==0&&num2%divider==0)
    {
       printf("The greatest common divider is: %d\n",divider);
    }
    else if(divider>1)
    {
        divider--;
        FindTheGreatestCommonDividerRecursively(num1,num2,divider);
    }
}
int GetLowest(int num1, int num2)
{
    if(num1>num2)
    {
        return num2;
    }
    else
    {
        return num1;
    }
}
