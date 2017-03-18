#include <stdio.h>

void ReadLine(char str[]);
void CountNumberOfAlphabetsNumbersSpecials(char str[]);

int main()
{
    char string1[100];
    printf("Enter the string: ");
    ReadLine(string1);
    CountNumberOfAlphabetsNumbersSpecials(string1);
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
void CountNumberOfAlphabetsNumbersSpecials(char str[])
{
    int i=0;
    int Alphabets=0;
    int Numbers=0;
    int Specials=0;
    int Spaces=0;
    while(str[i]!='\0') //this will give me the length of the string
    {
        if(str[i]>64&&str[i]<91 || str[i]>96&&str[i]<123)
        {
            Alphabets++;
        }
        else if(str[i]>47&&str[i]<58)
        {
            Numbers++;
        }
        else if (str[i]==' ')
        {
            Spaces++;
        }
        else
        {
            Specials++;
        }
        i++;
    }
    printf("\nYour string contains: \n%d literals\n%d digits\n%d spaces\n%d special characters.\n", Alphabets,
           Numbers, Spaces, Specials);
}
