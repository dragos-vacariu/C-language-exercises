#include<stdio.h>

int main()
{
    FILE *fp;
    char str[20], ch;
    int i=0;
    fp = fopen("input.txt", "r");
    while((ch=getc(fp))!=EOF) //ch gets a character from the file and if that character is EOF the loop breaks;
    {
            str[i++]=ch; //copy ch into str, that incrementation will take place after the current value of i will
            //be used. This means it equivalent to: str[i]=ch; i++;
            //Post-Incrementation: First uses the value of the variable and after that, increases it.
            //Pre-Incrementation: First increment the value of the variable and then it uses it.
    }
    str[i++]='\0'; //this line is very important, each c-style string needs to be null-terminated with \0, otherwise
    //it will cause problems;
    printf("%s\n", str);
    strrev(str); // use this function to reverse the string. This functions it's places in string.h
    /*
        strrev() function reverses a given string in C language. Syntax for strrev( ) function is given below.
        char *strrev(char *string);
        strrev() will not reverse the c-string properly it it's not null-terminated.
    */
    printf("%s", str);
    fclose(fp);
    scanf("%d");
    return 0;
}
