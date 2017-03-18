#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	char A[500];
	FILE *fp;
	char response;
	fp=fopen("D://consola.txt", "w");
	if(fp!=NULL)
	{
		printf("Fisierul a fost creat cu succes:\n");
	}
	else
		printf("Eroare la deschiderea fisierului\n");
	Here: printf("Scrie ceva:\n"); // Here parameter
	while(1)
	{
		fflush(stdin);
		gets(A); // get a string frunction;
		fprintf(fp, " %s ", A); // put the string into the file;
		fprintf(fp, "\n"); // get to the next line;
		Here2: printf("Do you wish to continue? Y/N\n"); // Here2: parameter;
		response=getch();//get the response from the user;
		if(response=='Y' || response=='y')//test the response;
		{
			goto Here; //if the response is Y or y, go to Here parameter;
		}
		if(response=='N'||response=='n') // if the response is N or n, break;
		{
			break;
		}
		else // any other key entered by the keyboard go to Here2 parameter;
		{
			printf("Mai incearca:\n");
			goto Here2;
		}
	}
	fclose(fp); // close the file;
	
	return 0;
}
