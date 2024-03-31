#include <stdio.h>
#include <stdlib.h>

void CopyStringWithRecursion(char A[], char B[]);
void ReadLine(char stringA[]);

int main()
{
    char stringA[30], stringB[30];
    printf("Enter a string: ");
    ReadLine(stringA);
    printf("The original string: %s\n", stringA);
    CopyStringWithRecursion(stringA, stringB);
    printf("Copied String: %s\n", stringB);
    scanf("%d");
    return 0;
}

void ReadLine(char stringA[])
{
    int i=0;
    char ch;
    while((ch=fgetc(stdin))!='\n')
    {
        stringA[i]=ch;
        i++;
    }
    stringA[i]='\0';
}
void CopyStringWithRecursion(char A[], char B[])
{
    static int i=0;
    if(A[i]!='\0')
    {
        B[i]=A[i];
        i++;
        //Make sure that this string is null terminated before leaving the function.
        B[i]='\0';
        CopyStringWithRecursion(A, B);
    }
    //Don't forget to do that for the future times
    i=0;
}
