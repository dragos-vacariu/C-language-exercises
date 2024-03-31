#include<stdio.h>
#include<strings.h> //used for strcmp();

/*
int strcmp(const char * str1, const char * str2);
RETURNING VALUES:
<0	if the first character that does not match has a lower value in ptr1 than in ptr2
0	if the contents of both strings are equal
>0	if the first character that does not match has a greater value in ptr1 than in ptr2
*/

void stringAddressComp();
void stringValueComp();

int main()
{
    char str1[] = "Hello";
    char str2[] = "Hello";
    stringAddressComp(str1,str2);
    stringValueComp(str1, str2);
    scanf("%d");
    return 0;
}
void stringAddressComp(char str1[], char str2[])
{
    printf("Printing Address str1: %d\n", str1); // this displays the address
    printf("Printing Address str2: %d\n", str2);
    printf("Message: ");
    if(str1 == str2)
    {
        printf("Same address\n");
    }
    else
    {
        printf("Different addresses\n");
    }
}
void stringValueComp(char str1[], char str2[])
{
    printf("Printing Address str1: %s\n", str1); // this displays the value
    printf("Printing Address str2: %s\n", str2);
    printf("Message: ");
    if( strcmp(str1,str2) == 0)
    {
        printf("Same value\n");
    }
    else
    {
        printf("Different values\n");
    }
}
