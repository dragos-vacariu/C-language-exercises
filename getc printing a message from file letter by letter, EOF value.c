#include<stdio.h>
/*
The C library function int getc(FILE *stream) gets the next character (an unsigned char) from the specified stream
and advances the position indicator for the stream.
*/
int main()
{
    char ch;
    FILE *fp;
    fp=fopen("trial.txt", "r");
    while((ch = getc(fp))!=EOF) // reading the character from file with getc(fp), this function doesn't need index incrementation
        //EOF has the value -1;
        //if the char is unsigned the loop will run infinitely.
        printf("%c", ch);
    fclose(fp);
    scanf("%d");
    return 0;
}
