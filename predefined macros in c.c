#include <stdio.h>

main()
{
   printf("File :%s\n", __FILE__ ); //__FILE__ is a predefined MACRO
   printf("Date :%s\n", __DATE__ ); //__DATE__ is a predefined MACRO
   printf("Time :%s\n", __TIME__ ); //__TIME__ is a predefined MACRO
   printf("Line :%d\n", __LINE__ ); //__LINE__ is a predefined MACRO
   printf("ANSI :%d\n", __STDC__ ); //__STDC__ is a predefined MACRO
   char c;
   scanf("%c", &c);
   return 0;
}
/*
Macro 	    Description
__DATE__ 	The current date as a character literal in "MMM DD YYYY" format.
__TIME__ 	The current time as a character literal in "HH:MM:SS" format.
__FILE__ 	This contains the current filename as a string literal.
__LINE__ 	This contains the current line number as a decimal constant.
__STDC__ 	Defined as 1 when the compiler complies with the ANSI standard.
*/
