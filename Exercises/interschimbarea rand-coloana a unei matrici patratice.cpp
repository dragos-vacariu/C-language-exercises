#include <stdio.h>
#include <stdlib.h>

int main()
{
	int A[35][35];
	int AUX[35][35]; //the auxiliar matrix.
	int i,j,n;
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
	//Storing into AUX by interchanging;
	printf("Interschimbare rand - coloana:\n\n");
	
	for(i=0; i<n; i++)
	{	
		for(j=0;j<n;j++)		
		{
			AUX[j][i]=A[i][j]; // Always be careful at the = sign;
		}		
	
	}
	
	//Copying the interchanged values of AUX back into A;
	for(i=0; i<n; i++)
	{	
		for(j=0;j<n;j++)		
		{
			A[i][j]=AUX[i][j]; // Always be careful at the order of elements surrounded by
			//equal operator. First is the variable which will store the value of the second.
		}		
	
	}
	//Printing the resulted/interchanged matrix;	
	printf("The resulted matrix is:\n\n");
	for(i=0;i<n;i++)
	{
		printf("[");	// deschide paranteza patrata rand;
		for(j=0;j<n;j++)
		{
			printf("\t%d\t", A[i][j]); // afisarea randului de elemente;
		}
		printf("]\n"); // inchide paranteza patrata rand;
	}
		
	return 0;
}
