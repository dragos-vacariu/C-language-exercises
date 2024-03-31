#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct rectangle
{
	int lenght;
	int width;
};

int area (struct rectangle *rect1)// *rect1 takes the value of rect1 from below.
{
	int area;
	area = rect1->lenght * rect1->width; // -> arrow operator for working structure with pointers.
	return area;
}

int main ()
{
	int result;
	struct rectangle rect1;
	rect1.lenght = 10;
	rect1.width = 9;
	result = area (&rect1); //&rect1 passes the value to the fuction's pointer rect1.
	printf ("The result is %d\n", result);
	getch();
	return 0;
}
