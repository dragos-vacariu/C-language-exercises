#include <stdio.h>
#include <conio.h>

void verifica (int *p); //prototyping the function, declarating the function;

void verifica (float *p)
{
	if(*p>4 ||*p<-1) // testing the value stored in the address through which is pointing p;
	{
		printf("Numarul introdus apartine intervalului specificat:\n");
	}
	else
		printf("Numarul introdus nu apartine intervalului specificat:\n");
	return;	//return to the main function
}

int main()
{
	float numar;
	printf("Introduceti numarul:");
	scanf("%f", &numar);
	verifica(&numar); //calling the function;
	
	getch();
	return 0;
	
}
