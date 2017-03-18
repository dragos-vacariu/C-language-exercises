#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ReadLine(char str[]);
void GetLargestWord(char str[]);
int GetWordSize(char word[]);
void GetSmallestWord(char str[]);

int main()
{
    char string1[100];
    printf("Enter a string: ");
    ReadLine(string1);
    GetLargestWord(string1);
    GetSmallestWord(string1);
    scanf("%d");
    return 0;
}
void ReadLine(char str[])
{
    int i=0;
    char ch;
    while((ch=fgetc(stdin))!='\n')
    {
        str[i] = ch;
        i++;
    }
    str[i]='\0';
}
void GetLargestWord(char str[])
{
    char Word[40];
    char LargestWord[40] = "";
    int i=0;
    int j=0;
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            Word[j]='\0';
            if(GetWordSize(Word)>GetWordSize(LargestWord))
            {
                strcpy(LargestWord, Word);
            }
            j=0;
        }
        else
        {
            Word[j] = str[i];
            j++;
        }
        i++;
    }
    Word[j]='\0';
    if(GetWordSize(Word)>GetWordSize(LargestWord))
    {
        strcpy(LargestWord, Word);
    }
    printf("Largest Word: %s\n", LargestWord);
}
int GetWordSize(char word[])
{
    int i=0;
    while(word[i]!='\0')
    {
        i++;
    }
    return i;
}
void GetSmallestWord(char str[])
{
    int i=0;
    char SmallestWord[20];
    char Word[20];
    int j=0;
    //INITIALIZING SMALLEST WORD WITH THE FIRST WORD FROM THE STRING:
    while(str[i]!=' ')
    {
        SmallestWord[i] = str[i];
        i++;
    }
    SmallestWord[i]='\0';
    i++; //to jump over ' ' that broke the while loop above.
    while(str[i]!='\0')
    {
        if(str[i]==' ')
        {
            Word[j]='\0';
            if(GetWordSize(Word)<GetWordSize(SmallestWord))
            {
                strcpy(SmallestWord, Word);
            }
            j=0;
        }
        else
        {
            Word[j] = str[i];
            j++;
        }
        i++;
    }
    Word[j]='\0';
    if(GetWordSize(Word)<GetWordSize(SmallestWord))
    {
        strcpy(SmallestWord, Word);
    }
    printf("Smallest Word: %s\n", SmallestWord);
}
