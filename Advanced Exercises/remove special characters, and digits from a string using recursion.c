#include <stdio.h>
#include <stdlib.h>

void RemoveAllCharacterExceptLiterals(char str[], char* TempArray);
void ReadLine(char str[]);
char* GetProperSize(char str[]);

int main()
{
    char string1[100];
    printf("Please enter a string: ");
    ReadLine(string1);
    RemoveAllCharacterExceptLiterals(string1, GetProperSize(string1));
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
void RemoveAllCharacterExceptLiterals(char str[], char* TempArray)
{
    static int TempIndex; //this will be 0 by default, because it's static.
    static int index; //this will be initialized by default with value 0, because it's static.
    if(str[index]>64&&str[index]<91 || str[index]>96&&str[index]<123 || str[index] ==' ')
    {
        *(TempArray+TempIndex) = str[index];
        TempIndex++;
    }
    index++;
    if(str[index]!='\0')
    {
        RemoveAllCharacterExceptLiterals(str, TempArray);
    }
    else
    {
        *(TempArray+TempIndex) = '\0';
        TempIndex++;
        int i;
        for(i=0;i<TempIndex;i++)
        {
            str[i] = *(TempArray+i);
        }
        //Making the proper setting for future calls:
        TempIndex=0;
        index=0;
        free(TempArray);
        //Printing the result:
        printf("\nThe resulted string: %s\n", str);
    }
}
char* GetProperSize(char str[])
{
    int i=0;
    int size=0;
    while(str[i]!='\0')
    {
        if(str[i]>64&&str[i]<91||str[i]>96&&str[i]<123 || str[i] ==' ')
        {
            size++;
        }
        i++;
    }
    char* Array = (char*)malloc(size*sizeof(char));
    return Array;
}
