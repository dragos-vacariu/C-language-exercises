#include <stdio.h>

//Global Variable:
int GlobalVar; //uninitialized, but gets the value 0 automatically (by default).

int main()
{
    int LocalVar; //uninitialized, but will get garbage value by default, it cannot be predicted.
    printf("LocalVariable Default Value: %d\n", LocalVar);
    printf("GlobalVariable Default Value: %d\n", GlobalVar);

    scanf("%d");
    return 0;
}
