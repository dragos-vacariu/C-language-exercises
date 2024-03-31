#include <stdio.h>
#include <stdlib.h>
#include <conio.h> // used for getch();
#include <math.h> // used for rand() function;

void comparare (int x[], int y[], int n); //prototyping the function = declarating the function;

void comparare (int x[], int y[], int n) // creating the function;
{
	int i, j;
	for(i=0;i<n; i++)
	{
		if(x[i]>y[i])
		{
			printf("%d > %d\n", x[i], y[i]); // printing on the screen;
		}
		else if (x[i] == y[i])
		{
			printf("%d == %d\n", x[i], y[i]); // printing on the screen;
		}
		else
		{
			printf("%d < %d\n", x[i], y[i]); // printing on the screen;
		}
	}
	return; // return to the main function;
}



int main()
{
	int A[20];
	int B[20];
	int n,i;
	printf("Enter the dimension for the arrays:\n");
	scanf("%d", &n);

	for(i=0;i<n;i++)
	{
		A[i]=rand(); // A[i] = a random element given by the rand(no peremeter always) function;
		B[i]=rand(); // B[i] = a random element also given by the rand() function;
		printf("A[%d] = %d\t B[%d] = %d\n", i, A[i], i, B[i]); // showing the elements offered by rand();
	}
	printf("\n\nThe function begins:\n\n\n");
    comparare(A, B, n);	// calling the function;

    printf("\nPress any key to exit.\n");
	getch(); // freezing the screen;
	return 0;
}
