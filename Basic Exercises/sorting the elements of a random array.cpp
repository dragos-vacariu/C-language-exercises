#include <stdio.h>
#include <stdlib.h> // for function rand();

int main()
{
	int A[20];
	int i, j, aux;
	for(i=0;i<20;i++)
	{
		A[i]=(rand()%25)+1; //rand () function that gives random numbers %25- will give random
		//numbers with the reminder of 25... this includes numbers from 0 - 24, and +1 it makes
		// 1-25;
	}
	for(i=0;i<20; i++)
	{
		printf("A[%d]= %d\n", i, A[i]);
	}
	printf("// Sorting of the array// \n\n\n");//sorting operation beggins.

	for (i=0; i<19; i++)//it starts from a[0];
		for (j=i; j<20; j++)//it compares a[0] with all the elements of the array;
		{
			if (A[i]>A[j])//if a[i]> any other elements of the array, then a[i] will change
			//the value with the other elements;
			{
				aux = A[j];
				A[j]=A[i];
				A[i]=aux;
			}
		}
		for (i=0; i<20; i++) // printing the sorting results.
			printf("A[%d]=%d\n",i, A[i]);
	scanf("%d");
	return 0;
}
