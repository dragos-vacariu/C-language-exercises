#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	char line[150];
	FILE *fp;
	fp=fopen("./line.txt", "r");
	while(!feof(fp)) // the condition to be read line by line from the txt file.
	{
		fgets(line, 150, fp); // fgets - function that reads strings from a file
		// fgets(stringname, dimension, file pointer);
		puts(line); // function that writes on the screen a string.
	}
	getch();
}
