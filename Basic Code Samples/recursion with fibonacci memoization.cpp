#include <stdio.h>
#include <conio.h>

int f[510]; //global

int fibonacci (int n)
{
	if (n<=1)
	{
		return n;
	}
	
	if (f[n] != -1) //for memoization;
	{
		return f[n];
	}
	f[n] = fibonacci (n-1) + fibonacci (n-2); //f[n] is for memoization;
	return f[n]; // for memoization;
}


int main()
{
		for (int i=0; i<510; i++) // for memoization;
		{
			f[i]=-1;
		}
		int n;
		printf("Give me an n for this recursion: ");
		scanf("%d", &n);
		int result = fibonacci(n);
		printf("The result is %d", result);
		getch(); // conio.h needed
	
}
