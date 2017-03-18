#include <stdio.h>
#include <stdlib.h>
#include <conio.h>// for getch();

void printingfunction(); // prototyping the function - this is like the declaration of it.


int main ()

{
	
	printingfunction(); // using the fuction;	
	
	
	getch();
	return 0; // the software will return nothing.
}

void printingfunction() // the name of the function must to be a single word.
//void means that the fuction called printingfuction will return nothing back to the main function
//no value and no variable;
{
	printf("This is the printing function;");
	
	return; // even if there is no value to be returned, the return statement needs to be
	// present in the function, because it will just return to the main function after it's end.
}
