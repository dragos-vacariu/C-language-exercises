#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define FILEPATH "content.str"

struct FileContent{
    char* Name;
    unsigned int age;
    char color;
};

int GetFileNumberOfLines();
void PutContentIntoStruct(struct FileContent b[], int sizeOfArray);
int ConcatenateNumbers(int num1, int num2);
int ConvertCharToInt(char s);
void PrintElementsOfStruct(struct FileContent b[], int sizeOfArray);
void CopyArray(char *a, char b[], int sizeOfArray);


int main()
{
    int SizeOfArray = GetFileNumberOfLines();
    if(SizeOfArray==0)
    {
        printf("The file is empty!\n");
        return;
    }
    struct FileContent objectOfFC[SizeOfArray];
    PutContentIntoStruct(objectOfFC, SizeOfArray);
    PrintElementsOfStruct(objectOfFC, SizeOfArray);
    scanf("%d");
    return 0;
}


int GetFileNumberOfLines()
{
    FILE* fp;
    fp = fopen(FILEPATH, "r");
    if(fp==NULL)
    {
        printf("File %s could not be opened!\n", FILEPATH);
        perror("Error Type: ");
        return 0;
    }
    unsigned int FileSize=0;
    char ch;
    while((ch=fgetc(fp))!=EOF)
    {
        if(ch=='\n')
        {
            FileSize++;
        }
    }
    fclose(fp);
    return FileSize+1;
}


void PutContentIntoStruct(struct FileContent b[], int sizeOfArray)
{
    FILE* fp;
    fp = fopen(FILEPATH, "r");
    char ch='.';
    int i;
    int j=0;
    char arrayOfch[22];
    for(i=0;i<sizeOfArray;i++)
    {
        while((ch=fgetc(fp))!='\n' && ch!=EOF)
        {
            if(ch == '@')
            {
                arrayOfch[j]='\0';
                //Without memory allocation the string cannot be copied to char *.
                b[i].Name = (char*) malloc(j+1*sizeof(char));
                strcpy(b[i].Name, arrayOfch);
                j=0;
            }
            else if(ch=='~')
            {
                arrayOfch[j]='\0';
                int AgeConverted = ConvertCharToInt(arrayOfch[0]);
                AgeConverted = ConcatenateNumbers(AgeConverted, ConvertCharToInt(arrayOfch[1]));
                b[i].age = AgeConverted;
                j=0;
            }
            else
            {
                arrayOfch[j]=ch;
                j++;
            }
        }
        b[i].color = arrayOfch[0];
        j=0;
    }
    fclose(fp);
}


int ConvertCharToInt(char s)
{
    int a = (int)s;
    if(a>47 && a<58)
    {
        switch(s)
        {
            case '0': {return 0;}
            case '1': {return 1;}
            case '2': {return 2;}
            case '3': {return 3;}
            case '4': {return 4;}
            case '5': {return 5;}
            case '6': {return 6;}
            case '7': {return 7;}
            case '8': {return 8;}
            case '9': {return 9;}
        }
    }
    return -1;
}

int ConcatenateNumbers(int num1, int num2)
{
    int temp=num2;
    while(num2!=0)
    {
        num1*=10;
        num2/=10;
    }
    return num1+temp;
}

void PrintElementsOfStruct(struct FileContent b[], int sizeOfArray)
{
    int i;
    printf("Name:\t\tAge:\t\tColor:\n\n");
    for(i=0;i<sizeOfArray;i++)
    {
        printf("%s\t\t%d\t\t%c\n", b[i].Name, b[i].age, b[i].color);
    }
}
