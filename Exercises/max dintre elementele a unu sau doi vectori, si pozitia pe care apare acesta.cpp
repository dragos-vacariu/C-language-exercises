#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int A[20];
	int B[20];
	int n,i;
	int maxa=0, maxb=0, maxab=0;// maxa = elementul max din matricea a;
	//maxb = elementul max din matricea b;
	//maxab = elementul max dintre maxa si maxb;
	int posa=0, posb=0, posab=0;//posa = pozitia pe care a fost gasit maxa;
	//posb = pozitia pe care a fost gasit maxb
	//posab = pozitia pe care a fost gasit maxab;
	char matrice; // matricea in care s-a gasit maxab;
	
	printf("Introduceti dimensiunea vectorilor: \n");
	scanf("%d", &n);
	
	//Citirea vectorului A;
	printf("Introduceti %d elemente pentru vectorul A:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&A[i]);
		if(A[i]>maxa)
		{
			maxa=A[i];
			posa=i+1;
		}
	}
	
	//Citirea vectorului B;
	printf("Introduceti %d elemente pentru vectorul B:\n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&B[i]);
		if(B[i]>maxb)
		{
			maxb=B[i];
			posb=i+1;
		}
	}
	
	//Afisarea vectorului A;
	printf("Vectorul A = \n");
	printf("[");
	for(i=0;i<n;i++)
	{
		printf(" %d ", A[i]);
	}
	printf("]\n");
	printf("Elementul MAX din vectorul A este: %d si a fost gasit pe pozitia %d\n", maxa, posa);
	
	//Afisarea vectorului B;
		printf("Vectorul B = \n");
	printf("[");
	for(i=0;i<n;i++)
	{
		printf(" %d ", B[i]);
	}
	printf("]\n");
	printf("Elementul MAX din vectorul B este: %d si a fost gasit pe pozitia %d\n", maxb, posb);
	
	if(maxa>maxb)
	{
		maxab=maxa;
		posab=posa;
		matrice='A';
	}
	else
	{
		maxab=maxb;
		posab=posb;
		matrice='B';
	}
	
	printf("Elementul MAX dintre cele 2 matrici este: %d si a fost gasit pe pozitia %d din matricea %c\n", maxab, posab, matrice);
	
	getch();
	return 0;	
}

