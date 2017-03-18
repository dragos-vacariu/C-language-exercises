#include <stdio.h>
#include <conio.h>

int* elementpar (int A[], int n, int nr_el_pare); // prototyping the function - declarating the function;

int* elementpar (int A[], int n, int nr_el_pare) //function will return a pointer to integer, and will
//take from the main function 3 arguments.
{
	int i;
	int el_adaugate=0; // counting how many elements have been copied into AUX array;
	int AUX[100]; 
	int *indexAUX; // storing the address of the first element of the AUX array;
	for (i=0;i<n;i++)
	{
		if(A[i]%2==0) // testing if the element is even;
		{
			AUX[el_adaugate]=A[i]; //copy the element from A[i] to A[el_adaugate];
			//el_adaugate is zero when it enters the loop, if the "if body is executed" it will increment
			//after it has been used as index for AUX.
			el_adaugate++; // increment the value of el_adaugate;
		}
	}
	
	
	for (i=0;i<nr_el_pare;i++)//be sure that you print only the even elements of the array, avoiding the
	//garbage stucked in there.
	{
		printf("AUX[%d] = %d\n", i, AUX[i]);
	}
	
	indexAUX=&AUX[0]; // storing the address of AUX[0] into a variable pointer;
	
	return indexAUX; // return the variable pointer;
}


int main()
{
	int A[100];
	int n, i;
	int nr_el_pare=0; // used for counting the even elements of the A;

	printf("Introduceti dimensiunea vectorului:\n");
	scanf("%d", &n); // getting the dimension;
	printf("Introduceti elementele vectorului A:\n");
	//Getting the elements of A;
	for(i=0; i<n; i++)
	{
		scanf("%d", &A[i]);
		if(A[i]%2==0)
		{
			nr_el_pare++; //increment this value only if the current element is even;
		}
	}
		
	
	printf("Elementele vectorului A sunt:\n\n");
	//Printing the elements of A;
	
	printf("[");
	for(i=0; i<n; i++)
	{
		printf(" %d ", A[i]);
	}
	printf("]\n\n");
	
	//Printing the number of even elements;
	printf("Vectorul A are %d elemente pare\n", nr_el_pare);
	
	
	//Calling the function;
	elementpar(A, n, nr_el_pare); //A - is an array, as you see there are no [] (paranteses);
	//never put [], and never try to pass it as an array. If you want to used it as an array in a function
	//you only have to pass the pointer to the first element of the array.
	//A = pointer to the first element of the array. This is by default, you don't need to mention it
	//in the compiler. 
	
	getch();
	return 0;
	
}
