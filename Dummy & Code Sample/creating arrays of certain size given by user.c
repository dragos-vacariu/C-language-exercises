#include<stdio.h>
#include<stdlib.h> //for malloc

int* CreateArray(int SizeOfArray);
int main()
{
    int* ArrayLocation;
    int sizeOfArr;
    printf("What is the size of the array you wish to build?\n");
    scanf("%d",&sizeOfArr);
    ArrayLocation=CreateArray(sizeOfArr);
    int i;
    for(i=0;i<sizeOfArr;i++)
    {
        printf("%d\n",*(ArrayLocation+i));
    }
    scanf("%d");
    return 0;
}

int* CreateArray(int SizeOfArray)
{
    int* array = (int *)malloc(SizeOfArray*sizeof(int)); //allocating heap memory for the array;
    int i;
    for(i=0;i<SizeOfArray;i++)
    {
        *(array+i)=i*10; //initializing array elements;
    }
    return array;
}
