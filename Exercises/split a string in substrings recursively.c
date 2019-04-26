#include <stdio.h>

void GettingSubstringFromString(char string1[]);
void ReadLine(char string1[]);

int main()
{
    char string1[100];
    printf("Enter the string: ");
    ReadLine(string1);
    GettingSubstringFromString(string1);
    scanf("%d");
    return 0;
}
void ReadLine(char string1[])
{
    int i=0;
    char ch;
    while((ch=getc(stdin))!='\n')
    {
        string1[i]=ch;
        i++;
    }
    string1[i]='\0';
}
void GettingSubstringFromString(char string1[])
{
    //Static Variables gets initialized by default with 0;
    static int indexStr;
    while(string1[indexStr]!=' '&& string1[indexStr]!='\0')
    {
        printf("%c", string1[indexStr]);
        indexStr++;
    }
    printf("\n");
    if(string1[indexStr]!='\0')
    {
        indexStr++; // this should be here, to increase after getting the loop, such that next recursive call won't
        //meet a ' ' space character and won't avoid the loop.
    }
    if(string1[indexStr]!='\0')
    {
        GettingSubstringFromString(string1);
    }
    else
    {
        //Setting this back for later use.
        indexStr=0;
    }
}
