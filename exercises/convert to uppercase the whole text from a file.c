#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FILEPATH "TextToConvert.txt"
#define SIZE 100000

char* StringFromFile(FILE* fp);
void ConvertStringToUpperCase(char* textdoc);

int main()
{
    FILE *fp;
    fp=fopen(FILEPATH, "r");
    if(!fp)
    {
        printf("Could not open the file!\n");
        perror("");
        char* temp= FILEPATH;
        printf("Location: %s\n", temp);
        scanf("%d");
        return;
    }
    ConvertStringToUpperCase(StringFromFile(fp));
    scanf("%d");
    return 0;
}
char* StringFromFile(FILE* fp)
{
    char* FileText= (char*)malloc(SIZE*sizeof(char));
    char ch;
    int i=0;
    while((ch=fgetc(fp))!=EOF)
    {
        *(FileText+i)=ch;
        i++;
    }
    *(FileText+i)='\0';
    printf("Original Text: \n%s\n", FileText);
    return FileText;
}
void ConvertStringToUpperCase(char* textdoc)
{
    int i=0;
    while(*(textdoc+i)!='\0')
    {
        if(*(textdoc+i)>96&&*(textdoc+i)<123)
        {
            *(textdoc+i)-=32;
        }
        i++;
    }
    printf("\nUpperCase Text: \n%s\n", textdoc);
}
