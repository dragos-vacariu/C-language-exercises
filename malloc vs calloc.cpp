#include <stdio.h>
#include <stdlib.h>

int main()
{
	int *A;
	int i;
	
	printf("Memory allocated with function MALLOC\n");
	A=(int *)malloc(20*sizeof(int)); // malloc return a void pointer that needs to be converted
	//into a pointer to however the type of the variable that uses it has. (int *) - is that pointer
	//20 = the number o memory cells (the space),
	for (i=0;i<20;i++)
		printf("A[%d]=%d\n", i, A[i]);
	free(A);
	printf("***************************\n\n");
	printf("Memory allocated with function CALLOC:\n\n");
	A=(int *)calloc(20, sizeof(int)); //calloc is the same as malloc with 2 exceptions:
	//all the cells are initialized with 0, and it has 3 parametes while malloc has 2;
	// the third parameter is that: you have to specify the number of cells and then the type of
	// the data you want to store in them. 
	for (i=0;i<20;i++)
		printf("A[%d]=%d\n", i ,A[i]);
	free(A);
}
