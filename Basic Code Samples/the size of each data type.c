#include <stdio.h>
#include <limits.h>
#include <float.h>

int main()
{
    char c;
    printf("SIGNED DATA TYPES TABEL: \n\n");
    printf("NAME    SIZEBYTES    SIZEBITS       MAXVAL          MINVAL\n");
    printf("Char       %d         %d                %d          %d\n", sizeof(char), sizeof(char)*8, SCHAR_MAX, SCHAR_MIN);
    printf("Short      %d         %d              %d          %d\n", sizeof(short), sizeof(short)*8, SHRT_MAX, SHRT_MIN);
    printf("Int        %d         %d            %d      %d\n", sizeof(int), sizeof(int)*8, INT_MAX, INT_MIN);
    printf("Float      %d         %d            %d      %d\n", sizeof(float), sizeof(float)*8, FLT_MAX, -FLT_MAX);
    printf("Double     %d         %d            %d              %d\n", sizeof(double), sizeof(double)*8, DBL_MAX, -DBL_MAX);
    printf("Long       %d         %d             %I32d     %d\n", sizeof(long), sizeof(long)*8, LONG_MAX, LONG_MIN);
    printf("LLong      %d         %d     %I64d        %d\n\n\n", sizeof(long long), sizeof(long long)*8, LLONG_MAX, LLONG_MIN);
    printf("UChar      %d         %d            %d                 %d\n", sizeof(int), sizeof(int)*8, UCHAR_MAX, 0);
    printf("UShort     %d         %d            %d               %d\n", sizeof(int), sizeof(int)*8, USHRT_MAX, 0);
    printf("UInt       %d         %d            %I64d          %d\n", sizeof(int), sizeof(int)*8, UINT_MAX, 0);
    printf("ULong      %d         %d            %I64d          %d\n", sizeof(int), sizeof(int)*8, ULONG_MAX, 0);
    printf("ULLong     %d         %d      %llu      %d\n\n", sizeof(int), sizeof(int)*8, ULLONG_MAX, 0);
    printf("FLOAT and DOUBLE cannot be unsigned\n");
    scanf("%c", &c);
    return 0;
}
