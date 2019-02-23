#include <stdio.h>
#include <stdlib.h>
#include <conio.h> // used for getch();
#include <math.h> // used for rand() function;


int main()
{
	int A[20];
	int n,i,aux;
	printf("Enter the dimension for the arrays:\n");
	scanf("%d", &n);
	
	for(i=0;i<n;i++)
	{
		A[i]=rand(); // A[i] = a random element given by the rand(no peremeter always) function;
	}
	
	//printing the original Array:
	printf("\n\nThe original array is: \n\n\n");
	printf("[");
	for(i=0;i<n;i++)
	{
		printf(" %d ", A[i]);
	}
	printf("]\n\n\n");
	
	if(n%2==0) // if the number is even;
	{
		for(i=0;i<n/2;i++) // go from the first element to the middle - 1 element;
		{	
			if(A[i]>A[i+1]) // if the element is greater than the next element;
			{
				aux=A[i];
				A[i]=A[i+1]; // interchange their values;
				A[i+1]=aux;
			}
		}
		for(i=n/2;i<n-1;i++) // go from the middle element to the last -1 element, because the last element
			// cannot be evaluated and interchanged with the next, because the array is already ending.
		{
			if(A[i]<A[i+1]) // if the element is smaller then the next element;
			{
				aux=A[i+1];
				A[i+1]=A[i]; // interchange their values;
				A[i]=aux;
			}
		}
	}
	
	if(n%2!=0) // if the number is odd;
	{
		{
			for(i=0;i<n/2;i++) // go from the firt element to the half-1 element;
			{	
				if(A[i]>A[i+1]) // if the element is greater than the next element
				{
					aux=A[i];
					A[i]=A[i+1]; // interchange their values;
					A[i+1]=aux;
				}
			}
			for(i=n/2+1;i<n-1;i++) // go from the half element to the last-1 element, because the last element
			// cannot be evaluated and interchanged with the next, because the array is already ending.
			{
				if(A[i]<A[i+1]) // if element is smaller than the next element
				{
					aux=A[i+1];
					A[i+1]=A[i]; // interchange their values
					A[i]=aux;
				}
			}
		}
	}
	// print the half sortion array;
	printf("The half sortion array is: \n\n\n");
	printf("[");
	for(i=0;i<n;i++)
		printf(" %d ", A[i]);
	printf("]\n");
}
