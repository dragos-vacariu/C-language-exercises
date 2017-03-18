#include <stdio.h>
#include <stdlib.h>

int main()
{
	int A[20];
	int B[20];
	int n,i;
	int ProdScalar=0; //variabila in care se va salva rezultatul produsului scalar;
	//Se citeste dimensiunea vectorilor (trebuie sa aibe amandoi aceiasi dimensiune);
	printf("Introduceti dimensiunea vectorilor: \n");
	scanf("%d", &n);
	//Citirea vectorului A;
	printf("Introduceti %d elemente pentru vectorul A:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
	}
	//Citirea vectorului B;
	printf("Introduceti %d elemente pentru vectorul B:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&B[i]);
	}
	//Afisarea vectorului A;
	printf("Vectorul A = \n");
	printf("[");
	for(i=0;i<n;i++)
	{
		printf(" %d ", A[i]);
	}
	printf("]\n");
	//Afisarea vectorului B;
		printf("Vectorul B = \n");
	printf("[");
	for(i=0;i<n;i++)
	{
		printf(" %d ", B[i]);
	}
	printf("]\n");
	for(i=0;i<n;i++)
	{
		ProdScalar=ProdScalar+A[i]*B[i]; //Produsul scalar reprezinta suma produselor fiecarei
		//perechi A[i] B[i];
		//De exemplu: ProdScal = A[0]*B[0] + A[1]*B[1] + ....
		printf("ProdScalar al elementelor din coloana %d = %d ( Produsul Anterior + %d*%d )\n",i, ProdScalar,A[i],B[i]);
	}
	printf("Produsul scalar este: %d", ProdScalar);
	
	return 0;
}
