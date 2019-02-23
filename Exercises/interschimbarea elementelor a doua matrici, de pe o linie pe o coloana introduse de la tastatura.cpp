#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int A[50][50];
	int B[50][50];
	int AUX [50][50] = {0}; // matricea auxiliara initializata cu 0;
	int i,j,n;
	int linia, coloana; //variabilele cu ajutorul carora se va stabili ce linie si cu ce coloana se
	//schimba. 
	
	printf("Introduceti dimensiunea matricilor patratice:\n");
	scanf("%d", &n); // o singura dimensiune => matrice patratica;
	
	printf("Citire elemente matricea A:\n\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Introduceti elementul A[%d][%d] = ", i, j);
			scanf("%d", &A[i][j]);
		}
	}
	
	printf("Citire elemente matricea B:\n\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("Introduceti elementul B[%d][%d] = ", i,j);
			scanf("%d", &B[i][j]);
		}
	}
	//Afisarea matricilor
	printf("\nMatricea A este:\n\n");
	for(i=0;i<n;i++)
	{
		printf("[");
		for(j=0;j<n;j++)
		{
			printf(" %d ", A[i][j]);
			
		}
		printf("]\n");
	}
	printf("\nMatricea B este:\n\n");
		for(i=0;i<n;i++)
	{
		printf("[");
		for(j=0;j<n;j++)
		{
			printf(" %d ", B[i][j]);
			
		}
		printf("]\n");
	}
	//Stabilirea liniei si a coloanei; linia aleasa din matricea A va fi copiata in coloana aleasa
	//din matricea B.
	printf("Interschimbare linie din A in coloana din B:\n\n"); 
	printf("\nAlegeti linia din matricea A:\n");
	HERE:if(scanf("%d",&linia)!=1 || linia>n-1&&linia<0) //HERE - > numele parametrului
		{
			printf("Linia incorecta:\n");
			printf("Incercati din nou:\n");
			goto HERE; // daca valorile sunt gresite functia goto te va lasa sa mai incerci o data.
		}
	
	printf("\nAlegeti coloana din matricea B:\n");
	HERE2:if(scanf("%d",&coloana)!=1 || coloana>n-1&&coloana<0) //HERE2 - > numele parametrului
		{
			printf("Coloana incorecta:\n");
			printf("Incercati din nou:\n");
			goto HERE2; //daca sa valorile sunt gresite, functia goto te va lasa sa mai incerci o data.
		}
	
	//Principalul algoritm incepe aici.	
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==linia-1) //daca i este acelasi cu linia - 1 (deoarece 1 in realitate este echivalentul
			// lui 0 din program.)
			{
				AUX[j][coloana-1]=A[i][j]; // AUX[j] pentru ca i este pus in conditia if-ului. Daca s-ar
				//fi pus in loc de j valoarea lui i. Atunci s-ar copia doar primul element de pe linie,
				//in prima pozitie de pe coloana aleasa.
				
				//AUX[j][coloana-1]=A[i][j] - > copie elementul A[i]j[] (i-ul fiind nevoit numaidecat
				//sa fie = linia-1) in A[j] [coloana-1]; j - folosit pt a schimba randurile in for,
				//coloana = fixa.
				
				
				//coloana-1 (deoarece 1 in realitate este echivalentul lui 0 din program.)
			}
			
			if(j!=coloana-1) // daca j este diferit de coloana-1;
			{
				
				AUX[i][j]=B[i][j]; // copie elementul din pozitia lui din B pe aceiasi pozitie in AUX.
			}			
		}
	}
	
	//Afisarea rezultatelor;
	printf("Rezultatele \n\n\n");
	printf("\nPriviti matricea originala A:\n\n");
	for(i=0;i<n;i++)
	{
		printf("[");
		for(j=0;j<n;j++)
		{
			printf(" %d ", A[i][j]);
			
		}
		printf("]\n");
	}
	
	printf("\nPriviti matricea originala B:\n\n");
	for(i=0;i<n;i++)
	{
		printf("[");
		for(j=0;j<n;j++)
		{
			printf(" %d ", B[i][j]);
			
		}
		printf("]\n");
	}
	
	printf("\nPriviti matricea rezultata:\n");
	for(i=0;i<n;i++)
	{
		printf("[");
		for(j=0;j<n;j++)
		{
			printf(" %d ", AUX[i][j]);
			
		}
		printf("]\n");
	}
		 	
	return 0;
	getch();	
	
}
