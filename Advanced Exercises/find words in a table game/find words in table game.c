#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define NR_OF_LINES 7
#define NR_OF_COLS 11
#define WORDS_LENGTH 11
#define NO_OF_WORDS 5
#define NR_OF_LIFES 5

struct WordTable{
    char CharTable[NR_OF_LINES][NR_OF_COLS];
    int WordsToFind;
    int NrOfTries;
    char CorrectWords[NO_OF_WORDS][WORDS_LENGTH];
};

struct WordTable InitArray(struct WordTable m, char* fileLocation);
void DisplayGameTable(struct WordTable m);
void ConvertStringToUpper(char userChoice[], int size);
void DisplayCorrectWords(struct WordTable m);

int main()
{
    char UserChoice[50];
    struct WordTable Game[5];
    Game[0]=InitArray(Game[0], "level1.game");
    Game[1]=InitArray(Game[1], "level2.game");
    Game[2]=InitArray(Game[2], "level3.game");
    Game[3]=InitArray(Game[3], "level4.game");
    Game[4]=InitArray(Game[4], "level5.game");
    int i=0;
    while(Game[i].NrOfTries>0||i>4)
    {
        DisplayGameTable(Game[i]);
        printf("\nYou have %d words to find.\n", Game[i].WordsToFind);
        printf("You have %d chances left.\n", Game[i].NrOfTries);
        printf("Enter the word: \n\n");
        scanf("%s", UserChoice);
        if(CheckGame(&Game[i], UserChoice)<0)
        {
            Game[i].NrOfTries--;
            printf("There is no such word in the table!\n", Game[0].WordsToFind);
        }
        else
        {
            Game[i].WordsToFind--;
            printf("Congratulations! You have %d more until next level!\n", Game[0].WordsToFind);
        }
        if(Game[i].WordsToFind<1)
        {
            i++;
        }
        DisplayCorrectWords(Game[i]);
        printf("Press any key to clear the screen:\n");
        scanf("%d");
        fflush(stdin);
        system("cls");
    }
    printf("Game over!\n");
    return 0;
}
struct WordTable InitArray(struct WordTable m, char* fileLocation)
{
    FILE * fp = fopen(fileLocation, "r");
    if(!fp)
    {
        printf("Level could not be located!\n");
        perror("");
        printf("Make sure that file %s is in the right place!\n", fileLocation);
        exit(1);
    }
    int i,j;
    for(i=0;i<NR_OF_LINES;i++)
    {
        for(j=0;j<NR_OF_COLS;j++)
        {
            char ch = fgetc(fp);
            if(ch == '\n')
            {
               m.CharTable[i][j]='\0';
            }
            else
            {
                m.CharTable[i][j] = ch;
            }
        }
    }
    //Getting correct words:
    for(i=0;i<NO_OF_WORDS;i++)
    {
        for(j=0;j<WORDS_LENGTH;j++)
        {
            char ch = fgetc(fp);
            if(ch == '\n')
            {
               m.CorrectWords[i][j]='\0';
               break;
            }
            else
            {
                m.CorrectWords[i][j] = ch;
            }
        }
    }
    m.WordsToFind = NO_OF_WORDS;
    m.NrOfTries = NR_OF_LIFES;
    fclose(fp);
    return m;
}
int GetSizeOfArray(char M[])
{
    int i=0;
    while(M[i]!='\0')
    {
        i++;
    }
    return i;
}
void DisplayCorrectWords(struct WordTable m)
{
    int i,j;
    for(i=0;i<NO_OF_WORDS;i++)
    {
        for(j=0;j<WORDS_LENGTH;j++)
        {
            if(m.CorrectWords[i][j]=='\0')
            {
                break;
            }
            printf("%c", m.CorrectWords[i][j]);
        }
         printf("\n");
    }
}
void DisplayGameTable(struct WordTable m)
{
    int i,j;
    //Printing to the screen
    for(i=0;i<NR_OF_LINES;i++)
    {
        for(j=0;j<NR_OF_COLS;j++)
        {
            printf("%c", m.CharTable[i][j]);
        }
        printf("\n");
    }
}
int CheckGame(struct WordTable *m, char userChoice[])
{
    int i,j;
    int size = GetSizeOfArray(userChoice);
    if(size>11)
    {
        printf("There is no such word in the table:\n");
        return -1;
    }
    ConvertStringToUpper(userChoice, size);
    for(i=0;i<NO_OF_WORDS;i++)
    {
        if(strcmp(userChoice, m->CorrectWords[i])==0)
        {
            strcpy(m->CorrectWords[i], "___sss__a"); //put some garbage in this string.
            return 1;
        }
    }
    return -1;
}
void ConvertStringToUpper(char userChoice[], int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        if(userChoice[i]>96&&userChoice[i]<123)
        {
            userChoice[i]-=32;
        }
    }
}
