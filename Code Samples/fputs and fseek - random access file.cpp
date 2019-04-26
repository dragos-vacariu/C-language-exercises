#include <stdio.h>
#include <stdlib.h>

int main()
{
	FILE *fp;
	fp=fopen("D://f.txt", "w+");
	fputs("Here today, there tomorrow", fp);
	fseek(fp, 6, SEEK_END); // leave a number of 6 spaces (black spaces) before the next fputs; 
	fputs("YesYES", fp);
	
}
