#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <conio.h>

int main()
{
    int a[10];
    int i;
    for (i=0;i<10;i++)
	{
	   printf("a[%d] = \n", i);           
	   scanf ("%d", &a[i]);           
	}
    printf ("a[10]= %d", a[10]);
    getch();
    return 0;
           
}
