#include <stdio.h>
#include <stdlib.h>

int main()
{
	int Sdiag1=0;
	int A[20][20];
	int i,j,n,m; //n is the number of rows, m is the number of colomns;
	printf("Enter the dimensions of the matrix (needs to be square):\n");
	scanf("%d %d", &n, &m); // citire dimensiune;
	
	for (i=0;i<n;i++)
	{
		for (j=0;j<m;j++)
		{
			printf("A[%d][%d] = ", i,j);
			scanf("%d", &A[i][j]);
		}
	}
	printf("The matrix is:\n\n");
	for(i=0;i<n;i++)
	{
		printf("[");	// deschide paranteza
		for(j=0;j<m;j++)
		{
			printf(" %d ", A[i][j]); // afisarea randului de elemente;
		}
		printf("]\n");// inchide paranteza + treci la randul urmator;
	}
	for(i=0; i<n; i++) //cautare elementele diagonalei principale;
	{
		for(j=0;j<m;j++)
		{
			if(i==j)//if i == j it means that the element belongs to the first diagonal of the
			//square matrix;
			//Exemplu: a[0][0]; a[1][1]; a[2][2]; a[3][3]; etc;
			{
				Sdiag1=Sdiag1+A[i][j];//Sdiag1 = suma elementelor diagonalei principale;
			}
		}
	}
	printf("Suma diagonalei principale este: %d", Sdiag1);
	return 0;
}
