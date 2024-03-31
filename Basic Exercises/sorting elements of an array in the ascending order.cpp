#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main()
{
	int A[35];
	int i, j, n, aux;
	printf("Enter the dimension of the array:\n");
	scanf("%d", &n);
	
	printf("Enter %d elements for the array:\n", n);
	for (i=0;i<n;i++)
	{
		scanf("%d", &A[i]);
	}
	
	printf("The original array is: \n");
	printf("[");
	for(i=0;i<n;i++)
	{
		printf(" %d ", A[i]);		
	}
	printf("]\n");
	
	//Sorting Algorithm; in ordine crescatoare;
	for(i=0;i<n;i++)
	{
		if(A[i]>A[i+1])//schimba semnul aici pentru ordine descrescatoare;
		{
			aux=A[i];
			A[i]=A[i+1];
			A[i+1]=aux;
		}
	}
	//Printing the results;
	printf("The sorted array is: \n");
	printf("[");
	for(i=0;i<n;i++)
	{
		printf(" %d ", A[i]);		
	}
	printf("]\n");
	scanf("%d", &i);
	return 0;
}
