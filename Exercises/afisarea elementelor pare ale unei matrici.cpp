#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main()
{
	int A[35][35];
	int AUX[35]={0}; //the auxiliar vector, initialized with 0.
	int i,j,n;
	int element=0; // will help counting all the elements that have been copied into the
	//AUX array.
	printf("Enter the dimensions of the matrix MxN (square matrix):\n");
	scanf("%d", &n);
	
	printf("Enter the elements:\n");
	//Getting the elements of the matrix;
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			printf("A[%d][%d] = ", i,j);
			scanf("%d", &A[i][j]);
			if(A[i][j]%2==0) //Starting the "even" test.
			{
				AUX[element]=A[i][j];//element = number of elements already copied into AUX array
				element=element+1;
			}
		}
	}
	
	//Printing of the original matrix;
	printf("The matrix is:\n\n");
	for(i=0;i<n;i++)
	{
		printf("[");	// deschide paranteza
		for(j=0;j<n;j++)
		{
			printf("\t%d\t", A[i][j]); // afisarea randului de elemente;
		}
		printf("]\n");// inchide paranteza + treci la randul urmator;
	}
		
	
	//Printing the resulted even elements in the matrix:
	printf("The even elements of the matrix are:\n\n");
	printf("[");
	for(i=0;i<element;i++)
	{
		printf(" %d ", AUX[i]);
	}
	printf("]\n");
	
	getch();	
	return 0;
}
