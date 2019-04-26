#include <stdio.h>
#include <stdlib.h>

int main()
{
	int A[20][20];
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
	
	FILE *fp;
	fp=fopen("D://elementele matricii.txt", "w");
	if(fp!=NULL) //if fp exists
	fprintf(fp, "Elementele matricii sunt: \n\n");
	{
		for (i=0;i<n;i++)
		{
			fprintf(fp, "[");
			for(j=0;j<n;j++)
			{
				fprintf(fp, " %d ", A[i][j]);
			}
			fprintf(fp, "]\n");
		}
	}
	fclose(fp);
	return 0;
}
