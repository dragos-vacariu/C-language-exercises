#include <stdio.h>
#include <windows.h> // using this for sleep() function:
/*
ON LINUX sleep() FUNCTION IS FOUND IN LIBRARY unistd.h
*/

int main()
{
    int a;
    Sleep (10000); //10 000 ms = 10s
    printf("Sleeping was complete!\n");
    printf("You sleeped for 10 seconds!\n");
    scanf("%d", &a);
    return 0;
}
