#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

	FILE *fp;
	fp=fopen("./write_to_file.txt", "a+"); //a - for adding;
	fprintf(fp, "Line wrote with fprintf\n"); //stdio.h
	fputs("Line wrote with fputs.", fp); // just in the reverse order of fprintf.
	printf("Press any key to exit.\n");
	int i;
	scanf("%d", &i);
	return 0;
}
