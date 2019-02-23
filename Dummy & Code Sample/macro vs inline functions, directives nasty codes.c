#include<stdio.h>
#define X (4+2) // directive using expression
#define NAME "Ellias Mustellar" // directive using string;
#define FunctionSquare (a) a*a // macro function
#define Print(x,y) printf("%d, %d\n", x,y); //macro function
#define CheckMax(x, y, z) \
                                  ({  \
                                      if (x>y) \
                                        { \
                                            if (x>z)\
                                                printf("%d\n", x);\
                                            else \
                                                printf("%d\n", z);\
                                        }\
                                      else \
                                      { \
                                        if (y>z) \
                                            printf("%d\n", y);\
                                        else \
                                            printf("%d\n", z);\
                                      }\
                                    })
/*
MACRO Functions cannot be declared having return type, but they still can return a value
(Example you CANNOT do that: #define int CheckMax(x, y, z) \)
the '\' sign tells the compiler that the definition of the macro still continues on the next line.
MACRO Functions and INLINE function does almost the same thing, they replace the code within the function, only when
the function gets called, this is very optimal, because your memory will be affected (occupied) only when using the
function

In the example below there is the implementation of the same function that is above, but this one can return a value
*/
#define Biggest(x,y,z)   (x>y? x > z? x : z :  y>z ? y : z) // this function uses relational/conditional operators
//and nasty codes

//WE CAN ALSO GET OUTPUT FROM A MACRO FUNCTION AS IT FOLLOWS:
int tempresult=0; //using this variable to get output from the next MACRO Function:
#define Biggest2(x,y,z,d)  ({ \
                            if (x>y) {\
                                if(x>z) {d=x;} \
                                else {d=z;}} \
                            else { \
                            if(y>z) {\
                            d=y;} \
                            else {d=z;}}})
//INLINE FUNCTION
int inline GetGreaterNum(int a, int b)
{
    if(a>b)
    {
        return a;
    }
    else
        return b;
}
/*
Inline functions are those functions whose definition is small and can be substituted at the place where its
function call is made. Basically they are inlined with its function call.
Compiler does inlining for performing optimizations. If compiler optimization has been disabled, then inline
functions would not serve their purpose and their function call would not be replaced by their function definition.

Inline functions provides following advantages over macros.

    Since they are functions so type of arguments is checked by the compiler whether they are correct or not.
    There is no risk if called multiple times. But there is risk in macros which can be dangerous when the argument is an expression.
    They can include multiple lines of code without trailing backlashes.
    Inline functions have their own scope for variables and they can return a value.
    Debugging code is easy in case of Inline functions as compared to macros.

*/

int main()
{
    printf("%d, %s\n", X+2, NAME);
    Print(2,3);
    printf("%d\n", GetGreaterNum(6,8));
    //Using macros for commenting multiple lines of code:
    #if 0
    print("Some Garbage\n");
    #endif
    CheckMax(11,2,3);
    printf("%d\n", Biggest(12,3,4));
    //CALLING Biggest2 and Using tempresult variable to get output:
    Biggest2(113,22,33, tempresult); //the max value will be stored in global variable tempresult;
    printf("%d\n", tempresult);
    scanf("%d");
    return 0;
}
