#include <stdio.h>

void ReadLine(char str[]);
void ReplaceSpacesWithGivenChar(char str[], char GivenCh);

int main()
{
    char string1[100];
    printf("Enter a string: ");
    ReadLine(string1);
    printf("Enter a char to replace spaces with: ");
    char GivenCh;
    scanf("%c", &GivenCh);
    ReplaceSpacesWithGivenChar(string1, GivenCh);
    scanf("%d");
    return 0;
}
void ReadLine(char str[])
{
    int i=0;
    char ch;
    while((ch=getc(stdin))!='\n')
    {
        str[i] = ch;
        i++;
    }
    str[i] = '\0';
}
void ReplaceSpacesWithGivenChar(char str[], char GivenCh)
{
    static int index; //this gets initialized with 0 by default because it's static.
    if(str[index]==' ')
    {
        str[index]=GivenCh;
    }
    index++;
    if(str[index]!='\0')
    {
        ReplaceSpacesWithGivenChar(str, GivenCh);
    }
    else
    {
        printf("\nThe resulted string is: %s\n", str);
    }
}
