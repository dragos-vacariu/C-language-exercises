#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>
int main(void)
{
	 double b;
	 char c;
	 int a;
	 int *p1=NULL; // initializare pointer cu valoarea NULL (pointerul nu indica nicaieri);
	 double *p2=NULL; // initializare pointer cu valoarea NULL (pointerul nu indica nicaieri);
	 char *p3=NULL; // initializare pointer cu valoarea NULL (pointerul nu indica nicaieri);

	 p1=&a; // pointerul p1 va primi adresa lui a;
 	 p2=&b; // pointerul p2 va primi adresa lui b;
 	 p3=&c; // pointerul p3 va primi adresa lui c;
 	 *p1=1000; // valoare spre care arata pointerul p1 sa fie egala cu 1000; (a = 1000);
 	 *p2=-12.3; // valoarea spre care arata pointerul p2 sa fie -12.3 (b=-12.3);
 	 *p3='a';	// valoarea spre care arata pointerul p3 sa fie 'a' (constanta a/caracterul a) (c= litera a)
 	 printf("a=%d\t b= %g\t c= %c\n", *p1, *p2, *p3); // afisarea valorilor adreselor spre care arata pointerii p1,p2,p3;
 	 (*p1)++; //valoarea spre care arata p1 sa creasca cu 1;
	 (*p2)++;//valoarea spre care arata p1 sa creasca cu 1;
	 (*p3)++;//valoarea spre care arata p1 sa creasca cu 1;
	 printf("a=%d\t b=%g\t c=%c\t\n", *p1, *p2, *p3); // afisarea noilor valori de la adresele aratate de
	 //pointerii p1,p2,p3;
	 printf("p1=%p\t p2=%p\t p3=%p\t\n", p1, p2, p3);// arata adresele din pointerii p1,p2,p3 (echivalent cu
	 // p1=&a, p2=&b, p3=&c);
	 printf("p1=%d\t p2=%d\t p3=%d\t\n", &p1, &p2, &p3);
	 
	 printf("\nPress any key to exit.\n");
	 scanf("%d", &a);
	 return 0;
}
