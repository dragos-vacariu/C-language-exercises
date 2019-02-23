#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int i;
	FILE *pf=fopen("d://newfile.txt", "w");
	if(!pf) // daca pf nu exista;
	{
		printf("Error opening the file.\n");
		exit(1);
	}
	fprintf(pf, "I was here");
	fclose(pf);
	
}
