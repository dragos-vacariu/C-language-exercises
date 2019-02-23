#include <stdio.h>

/*
Each array has a pointer that points by default to the first element of the array, the element
at index 0; In our case array[0]; to move that pointer to the next element in the array, example
the element at index 1, you have specify *(array+1). This will take the memory address of the
first memory block of the array (which is the memory address of array[0] element) and add
a sizeof(int) (because we have an int array) and go to the next memory block.
*/
int main()
{
    int array[3] = {12,1,4};
    int i;
    printf("The first element is: %d\n", array[0]);
    printf("The first element is: %d\n", *array);

    //Accessing elements of an array using the pointer of the array;
    for(i=0; i<3; i++)
    {
        *(array+i) +=4;
    }
    for(i=0;i<3;i++)
    {
        printf("array[%d] = %d\n", i, *(array+i));
    }
    scanf("%d");
    return 0;
}
