#include <stdio.h>

void PrintingNumbers(int start);

int main()
{
    printf("Printing number up to 50 using recursion: \n");
    PrintingNumbers(0);
    scanf("%d");
    return 0;
}
void PrintingNumbers(int start)
{
    printf("%d ", start);
    start++;
    if(start<50)
    {
        PrintingNumbers(start); //calling this function again:
    }
}
