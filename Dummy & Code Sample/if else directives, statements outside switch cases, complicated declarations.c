//THERE IS NO PROBLEM IF A LIBRARY IS INCLUDED TWICE
#include<stdio.h>
#include<stdio.h>

#define A 1

//THESE DECLARATIONS ARE CORRECT:
char (* ( *f())[])(); //f is a function that returns a pointer to an array of pointers to functions that return a char
char (a);

int main()
{
    int i = 1;
    switch(i)
    {
        //This printf will not be executed because switch will go directly to cases;
        printf("This is c program.\n");
        case 1:
            printf("Case1:\n");
            break;
        case 2:
            printf("Case2:\n");
            break;
    }
    //IF ELSE DIRECTIVES:
    #if A //check if there is any A already defined;
        printf("Enter any number:\n");
    #elif B //check if there is any B already defined
        printf("The number is odd");
    #endif //each if else directive needs to end with #endif directive;
    scanf("%d", &i);
    return 0;
}
