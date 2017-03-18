#include <stdio.h>

struct People{
    char Name[22];
    int age;
};
void InitializeArray(char ArrayStr[], char* ArrayPointer);
void PrintStructMembers(struct People ob[], int sizeOfArray);

int main()
{
    struct People ArrayOfPeople[5];
    ArrayOfPeople[0].age = 22;
    InitializeArray(ArrayOfPeople[0].Name, "David");
    ArrayOfPeople[1].age = 29;
    InitializeArray(ArrayOfPeople[1].Name, "Smith");
    ArrayOfPeople[2].age = 32;
    InitializeArray(ArrayOfPeople[2].Name, "George");
    ArrayOfPeople[3].age = 44;
    InitializeArray(ArrayOfPeople[3].Name, "Jack");
    ArrayOfPeople[4].age = 25;
    InitializeArray(ArrayOfPeople[4].Name, "Denise");
    PrintStructMembers(ArrayOfPeople, 5);
    scanf("%d");
    return 0;
}
void InitializeArray(char ArrayStr[], char* ArrayPointer)
{
    int i=0;
    while(ArrayPointer[i]!='\0')
    {
        ArrayStr[i] = ArrayPointer[i];
        i++;
    }
    //Don't forget to end the string.
    ArrayStr[i] = '\0';
}
void PrintStructMembers(struct People ob[], int sizeOfArray)
{
    int i;
    for(i=0;i<sizeOfArray;i++)
    {
        printf("Name: %s    Age: %d\n", ob[i].Name, ob[i].age);
    }
}
