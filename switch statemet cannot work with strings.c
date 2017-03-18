#include <stdio.h>

int main()
{
    char str[] = "Hello"; //c style string.
    int a = 10;
    //Wrong Usage: (This will result compilation error)
    /*
    switch (str) // this is wrong... a string cannot be passed into a switch
    {
        case "Hello": // a case needs integer constants or constant expressions.
        {

        }
    }
    */
    //Good Usage:
    switch (a)
    {
        case 10:
        {
            printf("a is ten!\n");
        }
    }
    scanf("%d");
    return 0;
}
