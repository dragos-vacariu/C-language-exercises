#include <stdio.h>
#include <conio.h>

void compara (int *A, int *B, int n); //prototyping the function, declarating the function;

void compara (int *A, int *B, int n) // creating the function;
{
	int i; // i will be the counter of the loop	
	
	for(i=0;i<n;i++)
	{
		
		if(*A>*B) //if the value through which A is pointing > the value through which B is pointing
		{
			printf("Elementul A[%d]= %d  >  B[%d] = %d cu diferenta de: %d\n",i, *A, i, *B, *A-*B);
						
		}
		if(*A==*B) //if the value through which A is pointing == the value through which B is pointing
		{
			printf("Elementul A[%d] = %d  ==  B[%d] = %d\n",i, *A, i, *B);
		}
		if(*A<*B) //if the value through which A is pointing < the value through which B is pointing
		{
			printf("Elementul B[%d] = %d  >  A[%d] = %d cu diferenta de: %d\n",i, *B, i, *A, *B-*A);
		}
		A++; // incrementing the pointer to the next value;
		//When incrementing a pointer: the index pointer will increment with the size of Ex: A[0] + sizeof(int), in this case
		B++; // incrementing the pointer to the next value;
		
	}
	
	return; // go to the main function again;
	
}

int main()
{
	int A[100];
	int B[100];
	int n, i;
	printf("Introduceti dimensiunea vectorului:\n");
	scanf("%d", &n); // getting the dimension;
	printf("Introduceti elementele vectorului A:\n");
	//Getting the elements of A;
	for(i=0; i<n; i++)
	{
		scanf("%d", &A[i]);
	}
		
	printf("Introduceti elementele vectorului B:\n");
	//Getting the elements of B;
	for(i=0; i<n; i++)
	{
		scanf("%d", &B[i]);
	}
	
	printf("Elementele vectorului A sunt:\n\n");
	//Printing the elements of A;
	
	printf("[");
	for(i=0; i<n; i++)
	{
		printf(" %d ", A[i]);
	}
	printf("]\n");
	
	printf("Elementele vectorului B sunt:\n\n");
	//Printing the elements of B;
	
	printf("[");
	for(i=0; i<n; i++)
	{
		printf(" %d ", B[i]);
	}
	printf("]\n\n\n");
	
	//Calling the function;
	compara(&A[0], &B[0], n);
	
	getch();
	return 0;
	
}
