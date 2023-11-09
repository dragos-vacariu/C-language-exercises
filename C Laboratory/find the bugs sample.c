#include <stdio.h>
#include <stdlib.h>

void FunctionOne();
void Interchange(int * varA, int * varB);
void FunctionTwo();
void FunctionThree();
void FunctionFour();

int main(void)
{
	setbuf(stdout, NULL);
	int command;
	FunctionOne();
	//FunctionTwo();
	FunctionThree();
	FunctionFour();

	//Keep the console open after the program ends so that I can see the output.
    scanf("%d", &command);
    return 0;
}

void FunctionOne()
{
	int *varA = (int *)malloc(sizeof(int));
	int *varB = (int *)malloc(sizeof(int));

	*varA = 5;
	*varB = 8;

	printf("Value of VarA = %d\n", *varA);
	printf("Value of VarB = %d\n", *varB);
	printf("Interchange.\n");
	Interchange(varA, varB);
	printf("Value of VarA = %d\n", *varA);
	printf("Value of VarB = %d\n", *varB);
}

void Interchange(int * varA, int * varB)
{
	int * temp = varA;
    varA = varB;
    varB = temp;
}

void FunctionTwo()
{
	#define VECTOR_SIZE 4000000
	int vect[VECTOR_SIZE];
	for(unsigned int i = 0; i<VECTOR_SIZE; i++)
	{
		vect[i] = i;
	}
	printf("Printing vector: \n");
	for(unsigned int i=0; i < VECTOR_SIZE; i+=VECTOR_SIZE/10000)
	{
		printf(" %d ", vect[i]);
	}
	printf("\nVector was initialized.\n");
}

void FunctionThree()
{
	struct D_Obj {
		float posX;
		float posY;
	};

	struct D_Obj* obj = (struct D_Obj*) malloc(sizeof(struct D_Obj*));
	obj->posX = 2.0f;
	obj->posX = -2.0f;
	printf("PosX = %f\nPosY = %f\n", obj->posX, obj->posY);
}

void FunctionFour()
{
	int varX = 10;
	for(unsigned int i =5; i>=0; i--)
	{
		printf("%d / %d = %d\n", varX, i, varX/i);
	}
	printf("Function ended.");
}
