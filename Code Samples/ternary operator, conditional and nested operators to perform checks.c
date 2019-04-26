#include <stdio.h>
//CORRECT USAGE OF CONDITIONAL OPERATOR, NESTED CONDITIONAL OPERATORS.
int main()
{
    int a=10,b=20,c=15,max=0;
    max = a>b ? a>c? a:c : b>c ? b:c;
    /*
    Equivalence:
    if(a>b)
    {
        if(c>a)
        {
            max = a;
        }
        else
        {
            max = c;
        }
    }
    else
    {
        if(b>c)
        {
            max = b;
        }
        else
        {
            max = c;
        }
    }
    */
    printf("%d\n", max);
    printf("%d\n", getSign(6));
    //Other Examples:
    c>20?:printf("C greater than 20!\n");
    /*
    Equivalence
    if(c>20)
    {
        printf("C greater than 20!\n");
    }
    */
    c = a>b ? 30 : 40; // wrong usage: a>b ? c=30 : c=40;
    /*
    NESTED EQUIVALENCE:
    a>b? (c=30):(c=40);
    IF ELSE EQUIVALENCE:
    if(a>b)
    {
        c=30;
    }
    else
    {
        c=20;
    }
    */
    printf("%d\n", c);
    //a>b ? (b=70); // this expression is wrong, it requires an else statement.
    scanf("%d");
    return 0;
}

int getSign(int x)
{
    return x<0 ? -1 :
           x>0 ?  1 : 0;
/*This is identical to the (probably more readable) if / else-if statements;
    if (x<0)
        return -1;
    else if (x>0)
        return 1;
    else
        return 0;*/
}
/*
THIS CODE:
x?y?z:u:v;
CAN BE INTERPRETED AS:
if(x)
{
   if(y)
   { z; }
   else
   { u; }
}
else
{ v; }
*/
