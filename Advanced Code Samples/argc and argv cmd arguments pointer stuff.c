#include <stdio.h>
/*
argc -> stands for argument count
argv -> stands for argument vector
*/
int main(int argc, char**argv)
{
    //argc has the default value 1.
    printf("%d\n", argc); // it prints 1.
    printf("%d\n", ++argc); // it prints 2.
    //argv has the default value: the path of the program (.exe) file
    printf("%s\n", *argv);
    printf("%s\n", *argv+1); // prints the argv value skipping the first character.
    printf("%d\n", argv); // prints the address stored in argv (because it's pointer it has an address assigned to it).
    printf("%d\n", &argv); // prints the address of argv.
    scanf("%d");
    return 0;
}
