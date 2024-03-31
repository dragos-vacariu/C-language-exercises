#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	fp=fopen("./write_to_file.txt", "w+");
	fputs("Added by fputs with fseek.", fp);
	fseek(fp, 6, SEEK_END); // leave a number of 6 spaces (black spaces) before the next fputs; 
	fputs("FPUTS added this.", fp);
	printf("Press any key to exit.\n");
	int variable;
	scanf("%d", variable);
	return 0;
}
