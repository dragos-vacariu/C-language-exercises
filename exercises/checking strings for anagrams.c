#include <stdio.h>

void ReadLine(char str[]);
int GetSizeOfString(char str[]);
void CheckAnagram(char str1[], char str2[]);
/*
Two strings are anagrams if they contain the same length and characters, but in different order.
*/
int main()
{
    char string1[30], string2[30];
    printf("Enter string1: ");
    ReadLine(string1);
    printf("Enter string2: ");
    ReadLine(string2);
    CheckAnagram(string1, string2);
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
void CheckAnagram(char str1[], char str2[])
{
    int i, j;
    int count_matches=0;
    int size_str1=GetSizeOfString(str1);
    if(size_str1==GetSizeOfString(str2))
    {
        for(i=0;i<size_str1;i++)
        {
            for(j=0;j<size_str1;j++)
            {
                if(str1[i]==str2[j])
                {
                    count_matches++;
                    break;
                }
            }
        }
        if(count_matches==size_str1)
        {
            printf("\nThe two strings:\n%s\n%s\n- are anagrams:\n", str1,str2);
        }
        else
        {
            printf("The two strings:\n%s\n%s\n- are not anagrams:\n", str1,str2);
        }
    }
    else
    {
        printf("\nThe two strings:\n%s\n%s\n- are not anagrams:\n", str1,str2);
    }
}
int GetSizeOfString(char str[])
{
    int i=0;
    while(str[i]!='\0')
    {
        i++;
    }
    return i+1;
}
