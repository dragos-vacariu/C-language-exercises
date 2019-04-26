#include <stdio.h>

void ReadLine(char str[]);
void ReplaceLowerUpperCaseLiterals(char str[]);

int main()
{
    char string1[100];
    printf("Enter a string: ");
    ReadLine(string1);
    printf("\nOriginal String: %s\n", string1);
    ReplaceLowerUpperCaseLiterals(string1);
    printf("Edited String: %s\n", string1);
    scanf("%d");
    return 0;
}
void ReadLine(char str[])
{
    int i=0;
    char ch;
    while((ch=getc(stdin))!='\n')
    {
        str[i]=ch;
        i++;
    }
    str[i]='\0';
}
void ReplaceLowerUpperCaseLiterals(char str[])
{
    static int index; //this will be initialized with 0 by default.
    if(str[index]>64&&str[index]<91)
    {
        str[index]+=32;
    }
    else if(str[index]>96&&str[index]<123)
    {
        str[index]-=32;
    }
    index++;
    if(str[index]!='\0')
    {
        ReplaceLowerUpperCaseLiterals(str);
    }
}
