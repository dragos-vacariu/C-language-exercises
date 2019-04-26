#include<stdio.h>

int main()
{
    char str[] = "India\0BIX\0"; // size of this is 11, see explanation below:
    printf("Size of nothing: %d\n", sizeof(""));
    printf("Size of str: %d\n", sizeof(str));
    printf("Str: %s\n", str); //printing string will multiple null terminations:
    printf("EOF Value: %d\n", EOF);
    printf("What would printf return: %d\n", printf("Print this message on!\n")); //this will be 23, 22 leters in message
    //and \n character;
    /*
    sizeof("") returns 1 (1*).
    sizeof("India") returns 6 (5 + 1*).
    sizeof("BIX") returns 4 (3 + 1*).
    sizeof("India\0BIX") returns 10 (5 + 1 + 3 + 1*).
    Here '\0' is considered as 1 char by sizeof() function.
    sizeof("India\0BIX\0") returns 11 (5 + 1 + 3 + 1 + 1*).
    Here '\0' is considered as 1 char by sizeof() function.
    */
    scanf("%d");
    return 0;
}
