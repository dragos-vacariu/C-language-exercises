#define MAX 9 //the size of MAX is set to 9
#include <stdio.h>


struct Stiva
{
	int size[MAX];
	int varf;
};

Stiva s; //Stiva s={{1,0},0};

void push(int x) //functie push adauga automat cate un element pe stiva.
{
	if (s.varf < MAX) //daca stiva nu e plina
	
	s.size[s.varf++] = x; //stiva va primi elementul x (asa cum elementul unei array primeste o valoare).
	//s.varf creste, intrucat x se va aseza pe stiva, asadar stiva va fi mai inalta.
	else // daca stiva e deja plina, s.varf=MAX;
	printf ("Stiva e plina\n");
}

int pop() //functia pop;
{
	if (s.varf > 0) // daca varful este mai sus de pozitia 0
	
	return s.size[--s.varf]; // returneaza s.size[-un element din s.varf), atunci cand un element este
	//printat pe ecran.
	
	printf ("Stiva e vida\n"); // stiva este zero in acest caz.
	return 0; 
}

int empty() // functia empty
{
	return s.varf==0; // stiva este goala doar cand s.varf atinge valoarea zero;
}

int full() //functie full
{
	return s.varf==MAX; // stiva este plina doar cand s.varf atinge valoarea MAX;
}

int main()
{
	s.varf=0;
	int i;
	for(i=0;i<9;i++) // i<valoarea lui MAX;
	push(i);
	
	while(!empty()) // atata timp cat stiva nu e goala
	{
		printf("%d\t",pop()); // afiseaza elementele stivei;
	//bucla incepe doar daca pe stiva sunt elemente, si se termina doar dupa ce printeaza ultimul element
	//de pe stiva.	
	}
	return 0;
}
