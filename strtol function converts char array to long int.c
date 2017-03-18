#include <stdio.h>

int main()
{
    char* a = "3339";
    long l1;
    char* saveCurrentPosition;
    l1=strtol(a, &saveCurrentPosition, 10);
    /*
    The C library function long int strtol(const char *str, char **endptr, int base) converts the initial part of the
    string in str to a long int value according to the given base, which must be between 2 and 36 inclusive, or be the
    special value 0.

    SINTHAX: long int strtol(const char *str, char **endptr, int base)
    str -- This is the string containing the representation of an integral number.
    endptr -- This is the reference to an object of type char*, whose value is set by the function to the next
    character in str after the numerical value.
    base -- This is the base, which must be between 2 and 36 inclusive, or be the special value 0.
    */
    printf("%ld\n", l1);
    scanf("");
    return 0;
}
