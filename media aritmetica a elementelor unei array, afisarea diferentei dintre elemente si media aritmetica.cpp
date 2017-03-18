/*Scrieti un program care sa citeasca n numere de la tastatura si apoi sa afiseze 
numerele impreuna cu diferenta dintre numar si media aritmetica a tuturor numerelor introduse.*/
#include <stdio.h>
#include <conio.h> // for getch();

int main()
{
	int a[5];
	int i,j, ma, S, diferenta;
	S=0;
	for (i=0; i<5; i++)
	{
		printf ("Introduceti elementul a[%d] = ", i);
		scanf ("%d", &a[i]);
		printf ("Elementul introdus este: %d \n", a[i]);
		S=S+a[i];
	}
	ma = S/5;
	printf ("Ma = %d\n", ma);
	for (j=0; j<5; j++)
	{
		diferenta = a [j] - ma; 
		printf ("a [%d] - ma = %d\n", j, diferenta);		
	}
	return 0;
	getch ();
}
