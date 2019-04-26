#include <stdio.h>

int ReadLine(char str[]);
void ReverseStringRecursively(char a[], int size);

int main()
{
    char str[30];
    printf("Enter a string: \n");
    int size = ReadLine(str);
    printf("The original string: %s\n", str);
    printf("The reversed string: ");
    ReverseStringRecursively(str, size-1); //size-1 to avoid the null terminator '\0' index
    printf("\n");
    scanf("%d");
    return 0;
}
int ReadLine(char str[])
{
    int i=0;
    char ch;
    while((ch=fgetc(stdin))!='\n')
    {
        str[i]=ch;
        i++;
    }
    str[i]='\0';
    return i;
}
void ReverseStringRecursively(char a[], int size)
{
    printf("%c", a[size]);
    if(size>0)
    {
        ReverseStringRecursively(a, size-1);
    }
}
