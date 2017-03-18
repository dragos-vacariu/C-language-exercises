#include <stdio.h>
#define MyHeight 180
#define ONE 1;
/*
//ABOUT TYPEDEF:
The C programming language provides a keyword called typedef, which you can use to give a type, a new name.
You can use typedef to give a name to your user defined data types as well. For example, you can use typedef with structure to define a new data type and then use that data type to define structure variables directly as follows −

typedef struct Books {
   char title[50];
   char author[50];
   char subject[100];
   int book_id;
} Book;
This is the reason why from now on you can create an instance of the STRUCT only by using the keyword Book;

//ABOUT #DEFINE:
#define is a C-directive which is also used to define the aliases for various data types similar to typedef
but with the following differences:
1.typedef is limited to giving symbolic names to types only where as #define can be used to define alias for
values as well, q., you can define 1 as ONE etc.
2.typedef interpretation is performed by the compiler whereas #define statements are processed by the pre-processor.

*/

typedef unsigned char BYTE; //after this line BYTE word will have the meaning of unsigned char;

int main()
{
    BYTE b;
    int a;
    a = ONE; // this is actually 1, because I used #define ONE 1;
    b = 'ABCD'; // this statement is equivalent to b = 'D';
    //a char can store only one character but it's initialized with some bunch of character will hold only the last
    //value from that group.
    printf("%d\n", MyHeight);
    printf("%c\n", b);
    printf("%d", a);
    /*YOU CANNOT DO THIS
    MyHeight = 220; // because MyHeight it's not a variable, it's just a name (an alias) for the value 180;
    */
    scanf("%d");
    return 0;
}
