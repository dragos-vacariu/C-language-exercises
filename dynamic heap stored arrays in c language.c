#include<stdio.h>
#define SIZE 20

int main()
{
    int *array; // a pointer to integer;
    array = malloc(SIZE*sizeof(int)); //allocate space on heap for 20 integers;
    //array is now poiting to the first block of memory from our dynamic array
    int i;
    for(i=0;i<SIZE;i++)
    {
        *(array+i)=i+10; // assigning values to the array;
    }
    //Print the elements:
    for(i=0;i<SIZE;i++)
    {
        printf("%d\n", *(array+i));
    }
    scanf("%d");
    return 0;
}
