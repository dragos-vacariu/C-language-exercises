#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int i;
	FILE *pf=fopen("./write_to_file.txt", "w");
	if(!pf) // daca pf nu exista;
	{
		printf("Error opening the file.\n");
		exit(1);
	}
	fprintf(pf, "Line wrote to file from C Program.");
	fclose(pf);
	printf("Press any key to continue.\n");
	scanf("%d", &i);
	return 0;
}
