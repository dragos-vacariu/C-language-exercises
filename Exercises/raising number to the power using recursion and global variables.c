#include <stdio.h>

//PROTOTYPING THE FUNCTIONS:
void CalculatingPower(int base, int exp);
//GLOBAL VARIABLES:
int result; //this gets initialized with 0 by default.

int main()
{
    int base, exp;
    printf("Enter the base number: \n");
    scanf("%d", &base);
    printf("Enter the exp number: \n");
    scanf("%d", &exp);
    CalculatingPower(result=base, exp); //recursion using global variable.
    printf("Result: %d\n", result); //printing the value of the global variable
    scanf("%d");
    return 0;
}

void CalculatingPower(int base, int exp)
{
    if(exp>1)
    {
        result*=base; //letting the global variable store the result;
        exp--;
        CalculatingPower(base, exp);
    }
}
