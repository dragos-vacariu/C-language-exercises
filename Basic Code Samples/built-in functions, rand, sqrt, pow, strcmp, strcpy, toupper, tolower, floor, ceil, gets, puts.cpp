#include <stdio.h>
#include <ctype.h>	// used for toupper() function;
#include <conio.h>	//	used for getch() function;
#include <string.h>	// used for strcpy and strcat functions;
#include <math.h> // used for floor() and ceil();
#include <stdlib.h> // used for abs();
int main()
{
	char f='a';
	char g='1';
	char h='F';
	char a[100] = "Hey Man";
	char b[100];
	int strcp;
	printf("%c\n", toupper(f));
	printf("%c\n", toupper(g));
	printf("%c\n", toupper(h));
	
	strcat(a, " You Are My Boy \n");
	printf("%s", a);
	strcat(a, "This is the end!");
	printf("%s\n\n\n", a);
	strcpy(b, a); //first the name of the string to be copied, then the name of the string which
	//is copied.
	printf("%s\n", b);
	strcp=strcmp(a,b); // used for string comparizon; if a is less than b => strcp<0;
	// if b<a => strcp>0; if a=b => strcp=0;
	printf("%d", strcp);
	puts("What is here?"); //similar to printf;
	gets(a); // similar to scanf;
	float z=9.876;
	float s=3.22221;
	printf("z = %.2f\n", floor(z)); // will aproximate z to the down value, smaller value.
	printf("s = %.2f\n", ceil (s)); // will aproximate s to the upper value, bigger value.
	int j = -1;
	printf("%d\n", j);
	j = abs(j);
	printf("%d\n", j);
	printf("%f\n", pow(5,4)); // pow(base number, the exponent), not working with integer numbers;
	printf("%f\n \n \n \n", sqrt(144)); // sqrt(number);
	//how to use rand function;
	int i;
	int n;
	for (i=0;i<10; i++)
	{
		printf("%d\n", rand());//rand() - will return a random number within and interval, by default
		// it is between 0 - 32000+
	}
	printf("\n \n \n using the rand function in intervals of numbers\n");
	//how to use rand() on a interval of time;
	n=rand() % 6 + 1;// % - "the modulus operator" will return the remainder of any number divide to six,
	// so the reminder can be between 0 and 5, by ading one, the reminder will be between 1 and 6;
	// like in a dice game.
	for (i=0; i<10; i++)
		printf("%d\n", n);
	getch();
}
