#include <stdio.h>
#include <stdlib.h>

int main()
{
	float a[25][25];
	int i,j,m,n;
	printf("Enter the dimension of the matrix:\n");
	scanf("%d %d", &n, &m);
	for (i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			printf("a[%d][%d]= ", i,j);
			scanf("%f", &a[i][j]);
		}
	}
	
	//Afisarea matricei:
	for (i=0; i<n; i++)
	{
		printf("[");
		for(j=0; j<m; j++)
		{
			printf("\t%f\t", a[i][j]);
		}
		printf("]\n");
	}
	
	//Elementele care apartin intervalului [- infinit ; -3.5] U [8.75; + infinit)  
	for (i=0; i<n; i++)
	{
		for(j=0; j<m; j++)
		{
			if(a[i][j]<=-3.5 || a[i][j]>=8.75)
			printf("a[%d][%d] = %f, apartine intervalului specificat\n", i,j,a[i][j]);
		}
	
	
	
	}
}
