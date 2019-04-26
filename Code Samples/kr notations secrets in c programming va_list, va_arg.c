#include <stdio.h>
#include <stdarg.h> // used for va_list, va_arg

//\Prototyping the functions/ Declarations:
// these may or may not have the arguments specified
void PrintMessage();
void PrintMessage2();

int main() // using K&R Notations this function could be declared simply: main();
{
    //K&R will use long float instead of double, but this technique cannot be used anymore, not in ANSI C
    //ANSI C will use simply double;
    double d2 = 10.234;
    PrintMessage("Me was here!\n");
    PrintMessage2("I am still here!\n");
    printf("%3f\n", d2);
    printSum(6,52,1,13,4,5);
    scanf("%d");
    return 0;
}
//K&R NOTATION
void PrintMessage(a)
char* a;
{
    printf("%s", a);
}
//ANSI NOTATION
void PrintMessage2(char* a)
{
    printf("%s", a);
}
//THIS IS AVAILABLE ONLY IN ANSI C, THIS FUNCTION DOESN"T NEED A DECLARATION
void printSum (int num,...) // this can only have void as return type....
{
    int i, sum=0;
    va_list argumentList;
    /* initialize valist for num number of arguments */
    va_start(argumentList, num);
    printf("Inside the function:\n");
    /* access all the arguments assigned to valist */
    for(i=1;i<num;i++) //important the for loop must start from 1, because the first arguments is only used for the size
        //of va_list.
    {
        //each time va_arg element is accessed, that element gets removed
        printf("%d\n", va_arg(argumentList, int));
        //sum+=va_arg(argumentList, int); //uncomment this line the second print in this loop will be a garbage
        //because the both 2 elements will get erased in the first iteration.
    }
    /* clean memory reserved for valist */
    va_end(argumentList);
}
