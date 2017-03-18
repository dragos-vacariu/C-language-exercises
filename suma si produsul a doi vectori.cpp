#include <stdio.h>
#include <stdlib.h>

int main()
{
	int A[20];
	int B[20];
	int SumAB[20];
	int ProductAB[20];
	int i,j,n;
	printf("Choose the number of elements for the arrays:\n");
	scanf("%d", &n);
	printf("Enter the elements of the array A:\n");
	for (i=0;i<n;i++)
	{
		scanf("%d", &A[i]);
	}
	printf("Enter the elements of the array B:\n");
	for	(i=0;i<n;i++)
	{
		scanf("%d", &B[i]);
	}
	printf("Vectorul A este:\n");
	printf("[");
		for	(i=0;i<n;i++)
	{
		printf(" %d ", A[i]);
	}
	printf("]\n");
	printf("Vectorul B este:\n");
	printf("[");
		for	(i=0;i<n;i++)
	{
		printf(" %d ", B[i]);
	}
	printf("]\n");
	//The sum and product of the elements:
	for (i=0;i<n;i++)
	{
		SumAB[i] = A[i]+B[i];
		ProductAB[i] = A[i]*B[i];
	}
	//Printing the results:
	printf("The sum vector is:\n");
	printf("[");
	for (i=0;i<n;i++)
	{
		printf(" %d ", SumAB[i]);
	}
	printf("]\n");
	
	printf("The product vector is:\n");
	printf("[");
	for (i=0;i<n;i++)
	{
		printf(" %d ", ProductAB[i]);
	}
	printf("]\n");
	
	return 0;
}
