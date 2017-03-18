#include <stdio.h>
#include <stdlib.h>

int main()
{
	int A[20][20];
	int B[20][20];
	int S=0;
	int i,j,n;
	printf("Choose the number of rows and colomns for the matrices:\n");
	scanf("%d", &n);
	printf("Enter the elements of the matrix A:\n");
	for (i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d", &A[i][j]);
		}
	}	
	printf("Matrix A is:\n");
	for(i=0;i<n;i++)
	{
		printf("[");
		for	(j=0;j<n;j++)
		{
			printf("\t%d \t", A[i][j]);
		}
		printf("]\n");
	}
	for (i=0;i<n;i++)
	{
	
		for(j=0;j<=i;j++) // j=0, it will start from the first element
		//j<=i, it will stop when j == i;
		
		//j<=m-1 <=>j<m.
		{
			S=S+A[i][j];
		}
	}
	printf("The sum of the elements beneath the first diagonal of matrix is: %d", S);


	return 0;
}
