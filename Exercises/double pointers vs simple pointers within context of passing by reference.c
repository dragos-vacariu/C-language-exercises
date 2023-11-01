#include <stdio.h>
#include <stdlib.h>

void addElementToVectorCorrect(unsigned int index, int element, unsigned int* dimension, int** array); //will use double pointer to pass the pointer itself as reference
void addElementToVectorWrong(unsigned int index, int element, unsigned int* dimension, int* array);
void printVector(unsigned int dimension, int* vector);
void readArray();

int main(void)
{
	setbuf(stdout, NULL);
	int command;

	readArray();

    //Keep the console open after the program ends so that I can see the output.
    scanf("%d", &command);
    return 0;
}

void readArray()
{
	unsigned int arraySize = 7;
	int* vector = (int*)malloc(sizeof(int)*arraySize);
	int* vector_copy = (int*)malloc(sizeof(int)*arraySize);
	printf("Enter the values for the vector elements: \n");
	for(int i=0; i<arraySize;i++)
	{
		printf("element[%d] = ", i);
		int variable_input = 0;
		scanf("%d", &variable_input);
		*(vector+i) = variable_input;
		*(vector_copy+i) = variable_input;
	}

	int element;
	unsigned int userIndex;
	printf("Enter the new element: ");
	scanf("%d", &element);
	printf("Enter the index: ");
	scanf("%d", &userIndex);

	//Creating a new dynamic array to store the existing element + the added element.
	printf("The initial vector: \n");
	printVector(arraySize, vector);

	//Increasing the dimension of the array, as we will add one more element.
	arraySize++;

	addElementToVectorWrong(userIndex, element, &arraySize, vector);
    printf("The result after SINGLE pointer function call.");
	printVector(arraySize, vector);
	addElementToVectorCorrect(userIndex, element, &arraySize, &vector_copy);
    printf("The result after DOUBLE pointer function call.");
	printVector(arraySize, vector_copy);
}
void printVector(unsigned int dimension, int* vector)
{
	printf("--------------------------------\n");
	printf("[");
	for(int i=0; i<dimension; i++)
	{
		printf(" %d ", *(vector+i));
	}
	printf("]\n");
	printf("--------------------------------\n");
}
void addElementToVectorWrong(unsigned int index, int element, unsigned int* dimension, int* array)
{
	int *newVector = (int*)malloc(sizeof(int)*(*(dimension)));
	unsigned int existingArrayindex = 0;
	for(unsigned int i=0; i<(*dimension); i++)
	{
		if(i == index)
		{
			*(newVector+i) = element;
		}
		else
		{
			*(newVector+i) = *(array+existingArrayindex);
			existingArrayindex++;
		}
	}
	//Transfer the address of the new created array to the initial pointer and free the resources.
	free(array);
	array = newVector; // this assignment will not be saved because array is single pointer hence not passed-by-reference
	//return would be required to store the assignment above.
    //---------------------------------------------------------------------------------------
}

void addElementToVectorCorrect(unsigned int index, int element, unsigned int* dimension, int** array) //will use double pointer to pass the pointer itself as reference
{
	/* The double pointer is used to pass a pointer as reference.
	 * Without the double pointer, the changes done to the pointer variable will not be saved, therefore
	 * a return is necessary to store the changes.*/
	int *newVector = (int*)malloc(sizeof(int)*(*(dimension)));
	unsigned int existingArrayindex = 0;
	for(unsigned int i=0; i<(*dimension); i++)
	{
		if(i == index)
		{
			*(newVector+i) = element;
		}
		else
		{
			// from double pointer to simple pointer for initialization purposes:
			int * array_double_pointer_value = *array;
			*(newVector+i) = *(array_double_pointer_value + existingArrayindex);
			existingArrayindex++;
		}
	}
	//Transfer the address of the new created array to the initial pointer and free the resources.
	free(*(array));
	*(array) = newVector;

}
