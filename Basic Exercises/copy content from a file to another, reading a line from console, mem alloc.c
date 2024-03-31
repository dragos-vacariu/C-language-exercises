#include <stdio.h>
#include <stdlib.h>
#define FILE_FOR_WRITE "fwrite.txt"
#define SIZE 10000

void COPY_CONTENT(FILE* fread);

int main()
{
    printf("Enter the location of the file: ");
    //EACH TIME WHEN WORKING WITH UNINITIALIZED POINTERS TO CHAR, THE NEED MEMORY ALLOCATED
    //DYNAMICALLY.
    char* location = (char*) malloc(SIZE*sizeof(char));
    //Reading a line from the console:
    scanf("%[^\n]%*c", location); //when using scanf with pointer & is not needed
    //The [] is the scanset character. [^\n] tells that while the input is not a newline ('\n') take
    //input. Then with the %*c it reads the newline character from the input buffer (which is not read),
    // and the * indicates that this read in input is discarded (assignment suppression), as you do not
    //need it, and this newline in the buffer does not create any problem for next inputs that you might
    //take.
    //Equivalent method of reading line: fgets (name, 100, stdin);
    FILE* fp;
    fp=fopen(location, "r");
    if(!fp)
    {
        printf("File could not be opened!\n");
        perror("");
        printf("Check Location: %s\n", location);
        return 1;
    }
    COPY_CONTENT(fp);
    scanf("%d");
    return 0;
}
void COPY_CONTENT(FILE* fread)
{
    FILE* fwrite;
    fwrite = fopen(FILE_FOR_WRITE, "w");
    if(!fwrite)
    {
        printf("File could not be opened!\n");
        perror("");
        char *location = FILE_FOR_WRITE;
        printf("Check Location: %s\n", location);
        return;
    }
    char ch;
    //EACH TIME WHEN WORKING WITH UNINITIALIZED POINTERS TO CHAR, THE NEED MEMORY ALLOCATED
    //DYNAMICALLY.
    char* content = (char*) malloc(SIZE * sizeof(char));
    int i=0;
    while((ch=fgetc(fread))!=EOF)
    {
        *(content+i)=ch;
        i++;
    }
    //copy the content string to the fwrite file;
    fputs(content,fwrite);
    fclose(fwrite);
    fclose(fread);
}
