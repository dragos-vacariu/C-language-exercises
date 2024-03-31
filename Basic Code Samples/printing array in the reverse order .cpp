/*Scrieti un program care sa citeasca n numere de la tastatura si apoi sa le afiseze 
in ordine inversa introducerii lor.*/

#include <stdio.h>

int main()
{
	int a [5];
	int j, i, n;
	for (j=0; j<5; j++)
	{
		printf ("Introduceti o valoare pentru elementul a[%d] = ", j);
		scanf("%d", &a [j]);
	}
	for (i=4; i>-1; i--)
	{
		printf ("a [%d] = %d \n", i, a[i]);
	}
	
	scanf("%d", &j);
	return 0;
}
