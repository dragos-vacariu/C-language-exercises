#include <stdio.h>

void ReadLine(char str[]);
void CountVowelsAnDConsonants(char str[]);

int main()
{
    char string1[100];
    printf("Enter a string: ");
    ReadLine(string1);
    CountVowelsAnDConsonants(string1);
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
void CountVowelsAnDConsonants(char str[])
{
    //These static variables gets initialized by default with 0;
    static int index;
    static int Consonants;
    static int Vewels;
    if(str[index]>64&&str[index]<91 || str[index]>96&&str[index]<123) //if this condition is true it means we have a
    //literal;
    {
        if(str[index]=='A' || str[index]=='a')
        {
            Vewels++;
        }
        else if(str[index]=='E' || str[index]=='e')
        {
            Vewels++;
        }
        else if(str[index]=='I' || str[index]=='i')
        {
            Vewels++;
        }
        else if(str[index]=='O' || str[index]=='o')
        {
            Vewels++;
        }
        else if(str[index]=='U' || str[index]=='u')
        {
            Vewels++;
        }
        else if(str[index]=='Y' || str[index]=='y')
        {
            Vewels++;
        }
        else //it means we have a consonant
        {
            Consonants++;
        }
    }
    index++;
    if(str[index]!='\0')
    {
        CountVowelsAnDConsonants(str);
    }
    else
    {
        printf("\nVewels: %d\tConsonants: %d\n", Vewels, Consonants);
    }
}
