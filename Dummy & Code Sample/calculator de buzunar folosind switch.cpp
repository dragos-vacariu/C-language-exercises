#include <stdio.h>
#include <stdlib.h>
#include <math.h> // used for abs(), sqrt(), log(), functions;
#include <conio.h> // used for getch() function;

int main()
{
	double a,b, rezultat;
	char operatia;
	
	printf("Introduceti cele 2 numere a si b:\n");
	scanf("%lf %lf",&a, &b); // reading the numbers.
	printf("Alegeti operatia:\n");
	operatia=getch(); //reading a value for 'operatia'. Only one character allowed.

	switch(operatia)
	{
	
		case '#': //if operatia == '#' do this:
		{
			rezultat = log(abs (a+b)+15); // teaching the computer to calculate;
			printf("Log	|%g + %g| + 15  = %g\n", a, b, rezultat); // printing the result;
			break;
		}
		case '$': //if operatia == '$' do this:
		{
			rezultat = sqrt(a*a + b*b); // teaching the computer to calculate;
			printf("Radical din (%g*%g + %g*%g) = %g", a, a, b, b, rezultat) ; // printing the result;
			break;
		}
		//if operatia is not either '#' or '$' do this:
		{
			default: printf("Operatie necunoscuta\n");
			break;
		}
		
	} //end of switch
	
	getch();
	return 0;
}
