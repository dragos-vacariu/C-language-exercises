#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	
	FILE *fp;
	fp=fopen("D://dragos.txt", "a+"); //a - for adding;
	fprintf(fp, "I want you here, right now/n, do you understand?"); //stdio.h
	fputs("I am here now", fp); // just in the reverse order of fprintf.
	return 0;
}
