#include <stdio.h>
/*
2. Arithmetic operators: *, /, %, +, -
1. Relational operators: >, <, >=, <=, ==, !=
3. Logical operators : !, &&, ||
4. Assignment operators: =

THE EVALUATION ORDER OF THESE TYPES OF OPERATORS IS: 2,1,3,4
arithmetic -> effectuated first
relational -> effectuated second
logical -> effectuated third
assignment -> effectuated fourth
*/
int main()
{
    if( (2+3<6&&3+7==10))
        /*
        Arithmetic first:
        2+3 = 5;
        3+7=10;
        Relational second:
        5<6 (true)
        10==10 (true)
        Logical third:
        true && true => true
        */
    {
        printf("Condition fulfilled!");
    }
    scanf("%d");
    return 0;
}
