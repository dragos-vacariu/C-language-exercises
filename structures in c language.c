#include <stdio.h>

/*
Arrays allow to define type of variables that can hold several data items of the same kind. Similarly structure
is another user defined data type available in C that allows to combine data items of different kinds/types.

In C a STRUCT needs to be defined before int main().
In C a STRUCT cannot have a constructor.
In C a STRUCT cannot hold reference type, so it can contain functions or methods
In C a STRUCT contains only VALUE TYPES (int, float, double, etc...);
USAGE OF STRUCTS IN C:
If you imagine a book collection in which each book has a name, and author, a number of chapter, and so on... a struct
is the best way to store all that data.

DEFINITION OF STRUCTURES:
struct Person {int a; int b;};
typedef struct Person {int a; int b;} personnel; -> here personnel is a tag, and it can be used to create an instance
of this structure; EXAMPLE: personnel a; a.a = 22;
OR: typedef struct Person {int a; int b;};

The access modifier for a struct is (.);
The access modifier for a pointer to a struct is either (->) or ( (*pointer_name). )
*/


struct Person
{
    int age;
    char name[22];
};
typedef struct PersonStr2
{
    int height;
    float weight;
} namePerson;
typedef struct PersonS
{
    char FatherInitial;
};
int main()
{
    //Creating an instance of the struct:
    struct Person p1 = {19, "Mark"};
    printf("%d, %s\n", p1.age, p1.name);
    namePerson p2 = {222, 72.55};
    printf("%d, %f\n", p2.height, p2.weight);
    struct PersonS p3 = {'S'};
    printf("%c\n", p3);
    int s;
    scanf("%d", &s);
    return 0;
}
