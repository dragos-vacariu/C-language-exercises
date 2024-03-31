#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

void convertdolars(float euro); // declaration of the function;

int main()
{
	float euro1 = 10.2f; // only a variable;

    printf("Enter amount: \n");
    scanf("%f", &euro1);
	convertdolars(euro1); // euro1 is the argument.

    printf("\nPress any key to exit.\n");
	getch();
	return 0;	// end
}

void convertdolars(float euro) // euro is the argument, float is it's type.
{
	float dolar;
	dolar=1.37*euro; // the main algoritm;
	printf("%.2f euros = %.2f dolars", euro, dolar); //%.2f => only 2 decimals will appear.

	return; // return to the main function;
}
