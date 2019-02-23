#include <stdio.h>

int xstrlen();
int strlength();

int main()
{
    char str[] = "Hello World!";
    printf("String: \"%s\"\n", str);
    printf("Length: %d\n", xstrlen(str));
    //printf("Length2: %d\n", strlength(str));
    scanf("%d");
    return 0;
}
int xstrlen(char *s)
{
    int length=0;
    while(*s!='\0') // while the values of index != string terminator \0;
    {
        length++; //increase size;
        s++; // move across the string.
    }
    return (length); // equivalent return length;
}
//this function doesn't work:
int strlength(char strng[])
{
    int i,length = 0;
    while(strng[i]!='\0') // this check cannot be performed.
    {
        length++;
        i++;
    }
    return length;
}
