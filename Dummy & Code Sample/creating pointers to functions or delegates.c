#include<stdio.h>

typedef int (*pf) (int, int); // let pf be a pointer to a function (int, int) that returns int;
typedef int (*addition) (int, int); // let addition be a pointer to a function (int, int) that returns int;

//Prototyping or declaring the function;
int proc(pf, int, int);
int fun(int, int);
int AddNumbs(int, int);
int MultiplicationOp (addition, int, int, int);

int main()
{
    printf("%d\n", proc(fun, 6, 6));
    printf("%d\n", MultiplicationOp(AddNumbs, 10, 5, 4));
    scanf("%d");
    return 0;
}
int fun(int a, int b)
{
   return (a==b); // return 1 if a==b, or 0 otherwise.
}
int proc(pf p, int a, int b)
{
   return ((*p)(a, b)); //return what *p function pointer returns;
}
int AddNumbs(int a, int b)
{
    return a+b; // return a+b;
}
int MultiplicationOp(addition p, int multiplier, int a, int b)
{
    int ab2 = (*p)(a,b);
    return ab2*multiplier; // return ab2 which is the returned value from AddNumbs * multiplier
}
