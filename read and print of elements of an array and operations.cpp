#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main()
{
	int n, S;
	S = 0;
	float P, Avg;
	P=1;
	Avg=0;
	printf("Enter the size of the array: ");
	scanf("%d", &n);
	int A[n];
	printf("Enter %d elements of the array:\n", n);
	for (int i = 0; i<n;i++) // for the reading and the displaying of the elements of the array;
	{
		scanf("%d", &A[i]);
		printf("A[%d] = %d\n", i, A[i]);			
	}
	printf("*********************************\n");
	for (int j=0; j<n; j++)// for the displaying of the elements of the array;
	{		
		printf("A[%d] = %d\n", j, A[j]);
	}
	for (int k=0; k<n; k++) //for the sum of the elements of the array;
	{
		S=S+A[k];		
	}
	printf("The sum of all the elements of the array is %d\n", S);
	Avg=S/n;
	printf("The average of the elements of the array is %f\n", Avg);
	for (int m=0; m<n; m++) //for the product of the elements of the array;
	{
		P=P*A[m];
	}
	printf("The product of the elements of the array is %f\n", P);
}
