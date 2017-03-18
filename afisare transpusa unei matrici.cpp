#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int A[50][50];
	int n;
	int i,j;
	int posi,posj;
	int min;
	
	printf("Enter a dimension for the square matrix:\n");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("Elementul a[%d][%d] = ", i,j);
			scanf("%d", &A[i][j]);
		}
	}
	
	for(i=0;i<n;i++)
	{
		printf("[");
		for (j=0;j<n;j++)
		{
			printf(" %d ", A[i][j]);
		}
		printf("]\n");
	}
	
	printf("Matricea transpusa este:\n");
	for(i=0;i<n;i++)
	{
		printf("[");
		for (j=0;j<n;j++)
		{
			printf(" %d ", A[j][i]); //interchanging the dimensions;
		}
		printf("]\n");
	}
	
	
	
	getch();
		
}
