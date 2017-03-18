#include <stdio.h>

int main()
{
    int arr[5] = {0,0,0,0,0};
    int* ptr = arr;
    //IF THESE STATEMENTS WOULD GET UNCOMMENTED THE WHOLE PROGRAM WOULD BE A MESS:
    //THIS IS THE PAIN OF INCREMENTING POINTERS DIRECTLY:
    /*printf("address of arr = %d\n", arr);
    printf("val of ptr = %d\n", ptr);
    ptr++; //increasing a pointer directly is pretty bad, because if you forget to decrement it back, you will mess
    //all the program trying to assign a value to that address, which is not in the schedule, you don't know what
    //is that address used by.
    printf("val of ptr = %d\n", ptr);
    printf("address of arr = %d\n", arr+1);
    */
    int i;
    printf("\n");
    for(i=0;i<5;i++)
    {
        printf("element %d = ", i);
        scanf("%d", ptr); //scanf("%d        ", ptr); ->scanf is acting weird when is written like this
        ptr++;
    }
    ptr-=i; //decrease this pointer back with i units, so that it could point again to the
    //first element of my array.
    for(i=0;i<5;i++)
    {
        printf("%d ", *ptr);
        ptr++;
    }
    return 0;
}
