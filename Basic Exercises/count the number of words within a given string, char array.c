#include <stdio.h>

void CountNumberOfWordsWithinString(char str[]);
void ReadLine(char str[]);

int main()
{
    char string[100];
    printf("Enter a string: ");
    ReadLine(string);
    CountNumberOfWordsWithinString(string);
    scanf("%d");
    return 0;
}
void ReadLine(char str[])
{
    int i=0;
    char ch;
    while((ch=fgetc(stdin))!='\n')
    {
        str[i]=ch;
        i++;
    }
    str[i]='\0';
}
void CountNumberOfWordsWithinString(char str[])
{
    int i=0;
    int numberOfWords=1; //there is at least one word in the string.
    while(str[i]!='\0') //giving me the size of the string:
    {
        if(str[i]==' ')
        {
            numberOfWords++;
        }
        i++;
    }
    printf("\nYour string contains %d words!\n", numberOfWords);
}
