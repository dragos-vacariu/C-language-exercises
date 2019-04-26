#include <stdio.h>
#include <conio.h>

struct stiva //structura unei stive;
{
	int size[20]; // marimea numarului maxim de elemente de pe stiva;
	int varf; // varful stivei;
};

stiva A; // declararea stivei A;

int main()
{
	int i,n;
	printf("Alegeti marimea stivei:\n");
	scanf("%d", &n);
	printf("Adauga elemente pe stiva:\n");
	//Adaugarea elementelor pe stiva;
	for (i=0;i<n;i++)
		{
			scanf("%d", &A.size[n-1-i]); // n-1-i => elementele vor fi stocate de ultima pozitie
			// catre prima pozitie;
			A.varf = A.varf + 1;// la fiecare element adaugat varful stivei creste;
		}
	
	//Afisarea stivei;	
	printf("Stiva contine:\n");
	for (i=0;i<n;i++)
		{
			printf("%d\n", A.size[i]);			
		}
	
	return 0;
	getch();		
}
