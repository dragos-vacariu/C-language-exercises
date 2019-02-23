#include<stdio.h>
int main()
{
    int x = 10, y = 20;
    if(!(!x) && x)
        /*
        Step 1: if(!(!x) && x)
        Step 2: if(!(!10) && 10)
        Step 3: if(!(0) && 10)
        Step 3: if(1 && 10)
        Step 4: if(TRUE) here the if condition is satisfied. Hence it prints x = 10.
        */
        printf("x = %d\n", x);
    else
        printf("y = %d\n", y);

    scanf("%d");
    return 0;
}
