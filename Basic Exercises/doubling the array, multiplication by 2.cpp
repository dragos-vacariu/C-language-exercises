#include <stdio.h>
#include <conio.h>

int main()
{
	float a[25];
	int i,n;
	printf("Enter the dimension of the array (be sure that is smaller than 25):\n");
	scanf("%d", &n);

	for (i=0;i<n;i++)
	{
		printf("a[%d] = ", i);
		scanf("%f", &a[i]);
	}

	printf("\n\n\n");
	printf("Doubling the array:\n");
	printf("*********************\n");

	for(i=0;i<n;i++)
	{
		a[i]=a[i]*2;
	}

	for (i=0;i<n;i++)
	{
		printf("a(%d) = %.2f\n", i, a[i]);
		//%.2f will print only the first 2 decimals of the float number;
	}
	printf("Press any key to exit.\n");
	getch();
	return 0;
}
