#include <stdio.h>

int main()
{
    int result;
    printf("Enter a value: ");
    scanf("%d", &result);
    int temp = result;
    printf("Multiplication: %d \t Division: %d\n", result*256, result/4);
    result = result*255 + result/4;
    printf("The value of res: %d\n", result);
    printf("Multiplication: %d \t Division: %d\n", temp<<8, temp>>2);
    temp = (temp<<8) + (temp>>2) - temp;
    printf("The value of temp: %d\n", temp);
    scanf("%d");
    return 0;
}
