#include <stdio.h>
#include <string.h>

int main()
{
    printf("Print information about the current directory: \n");
    //This command will display all the elements in the current directory;
    system("dir");
    printf("Print information about IP CONFIG: \n");
    //This command will display the configuration of IP address
    system("ipconfig");
    printf("Type in any key to clear the screen: \n");
    scanf("%d");
    //This command will clear the console screen:
    system("cls");
    //This command will print the message written after ECHO to the screen console:
    system("echo Let's start again!");
    scanf("%d");
    fflush(stdin);
    //This command will change the title of the window to "just title".
    system("TITLE just title");
    printf("This command will rename a file: \n");
    //This command will rename the file from D:/b.txt to ax.txt a file:
    system("rename \"D:/b.txt\" \"ax.txt\"");
    printf("Press any key to create a folder \n");
    scanf("%d");
    fflush(stdin);
    //This command will create a directory in D:/ with the name: autoDIR
    system("md d:\\autoDIR");
    scanf("%d");
    return 0;
}
