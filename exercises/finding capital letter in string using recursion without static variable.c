#include <stdio.h>

void ReadLine(char A[]);
void FindingFirstCapitalLetterRecursively(char strA[], int startingPos);

int main()
{
    char strA[30];
    printf("Enter a string: \n");
    ReadLine(strA);
    printf("The string: %s\n", strA);
    FindingFirstCapitalLetterRecursively(strA, 0);
    scanf("%d");
    return 0;
}
void ReadLine(char A[])
{
    int i=0;
    char ch;
    while((ch=fgetc(stdin))!='\n')
    {
        A[i]=ch;
        i++;
    }
    A[i]='\0';
}
void FindingFirstCapitalLetterRecursively(char strA[], int startingPos)
{
    if(strA[startingPos]!='\0')
    {
        if(strA[startingPos]>64&&strA[startingPos]<91)
        {
            printf("The first capital is: %c\n", strA[startingPos]);
        }
        else
        {
            FindingFirstCapitalLetterRecursively(strA, startingPos+1);
        }
    }
    else
    {
        printf("This string does not contain capital letters.\n");
    }
}
