#include <stdio.h>

int main()
{
    int a;
    a= 5||3&&0; // as expected a should take the value 0. because 5>0 (TRUE), 3>0 (TRUE) 0=0 (FALSE)
    //so as expected a = TRUE || TRUE && FALSE, but TRUE || TRUE = TRUE and TRUE && FALSE = FALSE;
    //so a should be 0; (because 0 is the value of false);

    /*WHAT ACTUALLY HAPPENS IS THIS:
    1st substep: "3 && 0" --> False
    2nd substep: "5 || False" --> True
    So the answer is True, so it is "1".
    THIS IS HAPPENING BECAUSE && has higher priority than || just like multiplication has higher priority than addition
    SO THIS IS THE RULE OF ASOCIATIVITY REGARDING TO RELATIONAL OPERATORS.
    */

    //CHECKING THE VALUE OF A:
    if(a==1)
    {
        printf("a is true\n");
    }
    else
        printf("a is false\n");

    //SIMILARLY WE CAN LOOK INTO THE FOLLOWING IF STATEMENT HAVING THE SAME RESULT
    if(5||3&&0)
    {
        printf("\nEntered in IF STATEMENT, because the condition is true!\n");
    }
    scanf("%d", &a);
    return 0;
}
