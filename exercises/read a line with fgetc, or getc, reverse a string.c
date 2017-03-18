#include <stdio.h>

void ReadALine(char stringA[], int size);
void ReverseString(char strArr[], int size);

int main()
{
    char ArrString[30];
    printf("Enter a string: \n");
    ReadALine(ArrString, 30);
    scanf("%d");
    return 0;
}
void ReadALine(char stringA[], int size)
{
    int i=0;
    char ch;
    while((ch=fgetc(stdin))!='\n')
    {
        stringA[i]=ch;
        i++;
    }
    stringA[i] = '\0';
    printf("String: %s\n", stringA);
    ReverseString(stringA, i);
}
void ReverseString(char strArr[], int size)
{
    int i;
    printf("Reversed: ");
    for(i=size-2;i>-1;i--)
    {
        printf("%c", strArr[i]);
    }
    printf("\n");
}
