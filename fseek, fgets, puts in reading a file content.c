#include <stdio.h>

int main()
{
    char *filelocation = "D:/myfile.txt";
    FILE * fp;
    char c[10];
    fp = fopen (filelocation, "r");
    if(fp == NULL)
    {
        printf("Error opening the file at location: %s", filelocation);
    }
    c[0] = getc(fp);
    printf("%s\n", c);
    /*
    fseek -> function that sets the position on the stream (in this case file stream);
    SINTHAX: int fseek(FILE *stream, long int offset, int whence);
    stream − This is the pointer to a FILE object that identifies the stream.
    offset − This is the number of bytes to offset from whence.
    whence − This is the position from where offset is added. It is specified by one of the following constants:
        SEEK_SET 	Beginning of file
        SEEK_CUR 	Current position of the file pointer
        SEEK_END 	End of file
    */
    fseek(fp, 0, SEEK_END); // moves the pointer to the end of the file
    fseek(fp, -3L, SEEK_CUR); // move the pointer 3 steps backwards.
    //At this moment only the last 3 characters from the file will be read.
    fgets(c, 5, fp); // will read a string of size 5 from the position set by fseek, (in this case will read
                                                                                      //only last 3 characters)
    /*
    fgets -> function that read the content of a file
    SINTHAX: char * fgets ( char * str, int num, FILE * stream );
    */
    puts(c);
    /*
    puts -> function that prints a char* to the screen
    SINTHAX: int puts(const char *str)
    */
    scanf("%d");
    return 0;
}
