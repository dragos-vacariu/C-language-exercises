#include <stdio.h>

#define tokenpaster(n) printf ("token" #n " = %d", token##n)
/*
The token-pasting operator (##) within a macro definition combines two arguments. It permits two separate tokens
in the macro definition to be joined into a single token.

The directive above will do:
-> take a parameter, that can be anything.
-> it concatenates to token, (in our case: token32),
-> and prints a value of it...
*/
int main(void)
{
   int token34 = 40;
   tokenpaster(34); //THIS IS EQUIVALENT TO: printf ("token34 = %d", token34);
   scanf("%d");
   return 0;
}
