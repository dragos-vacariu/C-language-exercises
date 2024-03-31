#include <stdio.h>

/*
The C library function ungetc() pushes the character char (an unsigned char) onto
the specified stream so that the this is available for the next read operation.
SINTHAX: int ungetc(int char, FILE *stream)
Parameters:
    char -- This is the character to be put back. This is passed as its int promotion.
    stream -- This is the pointer to a FILE object that identifies an input stream.
*/

int main()
{
    int i;
    char c;
    for(i=1; i<=5; i++)
    {
        scanf("%c", &c); //get input for c variable from the user, this will happen only the first loop
        //the second loop, will already have a value into the stdin buffer, so scanf won't bother to wait fort the
        //user to enter anymore values
        printf("%c", c); //print the value of c
        ungetc('a', stdin); //copy the value 'a' to the input stdin buffer
        /*
        SO NEXT TIME WHEN THE LOOP RUNS SCANF WON'T TRY TO GET A VALUE FOR C ANYMORE, BECAUSE THERE IS ALREADY A VALUE
        IN THE INPUT BUFFER.
        */
    }
	
    scanf("%d");
    return 0;
}
