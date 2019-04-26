#include <stdio.h>

void ReadLine(char str[]);
void FindFrequencyOfGivenWord(char str[], char Word[]);

int main()
{
    char string1[100], word[20];
    printf("Enter a string: ");
    ReadLine(string1);
    printf("Enter a word to find in the string above: ");
    scanf("%s", &word);
    FindFrequencyOfGivenWord(string1, word);
    scanf("%d");
    return 0;
}
void ReadLine(char str[])
{
    int i=0;
    char ch;
    while((ch=getc(stdin))!='\n')
    {
        str[i]=ch;
        i++;
    }
    str[i]='\0';
}
//FOR A BIGGER PRECISION SEARCH WE COULD DIVIDE THE STRING INTO SUBSTRINGS OR WORDS AND THERE COMPARE THEM WITH
//THE GIVEN WORD. THIS WOULD BE MORE PRECISE AND WOULD MAKE ROOM FOR ERROR, SUCH THAT SAME WORD WRITTEN TWICE BUT
//CONCATENATED.
void FindFrequencyOfGivenWord(char str[], char Word[])
{
    //Static variables gets initialized with 0 by default.
    static int indexStr;
    int indexWord=0; //this needs to be initialized each time.
    static int NumberOfTimes;
    while(Word[indexWord]==str[indexStr])
    {
        if(indexWord==0) //if the first letter of my word matches one in the string
        {
            //Make sure that the previous letter in the string it's a space character such that it won't find my word
            //inside another word, because it might be 2 different words that contains the same letters like
            //"there" and "here"
            if(str[indexStr-1]!=' ')
            {
                break;
            }
        }
        printf("Index: %d, %c==%c\n", indexStr, Word[indexWord],str[indexStr]);
        if(Word[indexWord+1]=='\0')
        {
            NumberOfTimes++;
            break; //this is not really necessary, but just in case.
        }
        else
        {
            indexWord++;
            indexStr++;
        }
    }
    indexStr++; //increase this for the next recursive call.
    if(str[indexStr]!='\0')
    {
        FindFrequencyOfGivenWord(str, Word);
    }
    else
    {
        printf("\nThe word: \"%s\" appears in the string %d times.\n", Word, NumberOfTimes);
        //Setting these statics for later use:
        indexStr=0;
        NumberOfTimes=0;
    }
}
