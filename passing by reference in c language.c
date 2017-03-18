#include <stdio.h>

void PassingByRef(int* value);
int main()
{
    int a;
    printf("Enter a value: ");
    scanf("%d", &a);
    printf("%d", a);
    PassingByRef(&a);
    printf(" X 10 = %d\n", a);
    scanf("%d");
    return 0;
}
void PassingByRef(int* value)
{
    *value*=10;
}
