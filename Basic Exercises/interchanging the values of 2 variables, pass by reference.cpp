#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int schimbare (int &a, int &b) // this is called pass by reference.
{
   int aux;
   aux=a;
   a=b;
   b=aux;
}

int main ()
{
	int e,f;
	printf ("Enter two numbers\n");
	scanf("%d %d", &e,&f);
	printf("a = %d, b = %d\n", e,f);
	schimbare (e, f);
	printf ("Interchanging: a=%d, b=%d\n", e,f);
	getch ();
}
