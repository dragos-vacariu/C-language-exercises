#include <stdio.h>
#include <stdlib.h>
#include <math.h> // used for abs(), sqrt(), log(), functions;
#include <conio.h> // used for getch() function;


int interchanging(int A[], int n); // prototyping the function = declarating the function;

int interchanging(int A[], int n) // creating the function;
//Function will return an integer to the main function
//Function will take 2 values from the main function: (A[], n]
{
	int AUX[n]; //an auxiliar array, it will die after the end of the function;
	int i; 
	for (i=0;i<n;i++)
	{
		AUX[n-1-i]=A[i]; // AUX[n-1-i] = A[i] => the last element of the array AUX = first element of 
		//the array A;
	}
	
	for (i=0;i<n;i++)
	{
		A[i]=AUX[i]; //copy the values of AUX into A;
	}

	return A[n]; //return the new array A;
}

int main()
{
	int A[100];
	int n, i;
	printf("Enter the dimension of the array:\n");
	scanf("%d", &n); // taking the dimension of the array; 
	printf("Enter the elements for that array:\n");
	
	//Taking the elements of the array;
	for(i=0;i<n;i++)
	{
		scanf("%d", &A[i]);
	}
	
	//Printing the array;
	printf("The ORIGINAL array is this one:\n\n");
	printf("[");
	for(i=0;i<n;i++)
	{
		printf(" %d ", A[i]);
	}
	printf("]\n\n");
	
	//Calling the function;
	A[n]=interchanging (A, n);
	
	//Printing the results after calling the function;
	printf("The array after calling the FUNCTION is this one:\n\n");
	printf("[");
	for(i=0;i<n;i++)
	{
		printf(" %d ", A[i]);
	}
	printf("]\n\n");
	
	printf("Press any key to exit.\n");
	getch();
	return 0;
}
