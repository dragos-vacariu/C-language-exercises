#include <stdio.h>
#include <stdlib.h>

int passbyvalue(int a);
int passbyreference(int *a);

int main()
{
	int b=2;
	passbyvalue(b);
	printf("The values of b after passing it's value to the function is %d\n", b);
	//b is still equal to 2 after passing it's value to the function, see below the explanation;
	passbyreference(&b);// by using & the address of b will be passed to the function, this is
	//called reference.
	printf("The values of b after passing it's address to the function is %d\n", b);
	//b = 155, because by reference the variable is affected.
	
	return 0;
}

int passbyvalue(int a) //by pasing the values of a variable to a function, does not affect 
//the variable. It affects only the value.
{
	a = 20;
	
	return a;
}

int passbyreference(int *a) // by reference the address of the variable is affected.
{
	*a = 155;//using * the value which is stored into the address that has been passed to the
	//function will be changed.
	
	return *a;
}
