#include <stdio.h>
#include <stdlib.h>

int main()
{
	int A[20][20];
	int B[20][20];
	int ProductMatrix[20][20];
	int i,j,n,m;
	printf("Choose the number of rows and colomns for the matrices:\n");
	scanf("%d %d", &n, &m);
	printf("Enter the elements of the matrix A:\n");
	for (i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d", &A[i][j]);
		}
	}
	printf("Enter the elements of the matrix B:\n");
	for	(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d", &B[i][j]);
		}
	}
	printf("Matrix A is:\n");
	for(i=0;i<n;i++)
	{
		printf("[");
		for	(j=0;j<m;j++)
		{
			printf(" %d ", A[i][j]);
		}
		printf("]\n");
	}
	printf("Matrix B is:\n");
	for(i=0;i<n;i++)
	{
		printf("[");
		for	(j=0;j<m;j++)
		{
			printf(" %d ", B[i][j]);
		}
		printf("]\n");
	}
	//The sum and product of the elements:
	for (i=0;i<n;i++)
	{
	
		for(j=0;j<m;j++)
		{
			ProductMatrix[i][j]=A[i][j]*B[j][i]; //by interchanging the dimensions of the
			//second matrix we obtain the multiplication between a line and a colomn.
		}
	}
	//Printing the results:
	printf("The product matrix is:\n");
	printf("[");
	for (i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf(" %d ", ProductMatrix[i][j]);
		}
	
		printf("]\n");
	}
	
	return 0;
}
