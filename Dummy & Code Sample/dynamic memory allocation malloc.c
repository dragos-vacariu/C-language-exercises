#include <stdio.h>

int main()
{
    int num, i, *ptr, sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &num);
    // return type of malloc is void* so the pointer needs to be casted into int * to be stored in *ptr variable
    ptr = (int*) malloc(num * sizeof(int));  //memory allocated using malloc
    if(ptr == NULL)
    {
        printf("Error: Memory not allocated.");
        exit(0);
    }
    /*
    malloc -> function that allocated dynamic memory on heap
    SINTHAX: void *malloc(size_t size);
    size = size of memory blocks in bytes.
    This function returns a pointer to the allocated memory, or NULL if the request fails.
    The reason why malloc returns a void* it's because it doesn't need what you need to fill that space with...
    it doesn't know for which type of data you are going to use it...
    */
    for(i = 0; i < num; ++i)
    {
        printf("Enter element%d: ", i);
        scanf("%d", ptr + i);
        sum += *(ptr + i);
    }
    printf("Sum = %d\n", sum);
    printf("Before free => element0 = %d\n", *ptr);
    printf("Before free => element1 = %d\n", *(ptr+1));
    free(ptr); //deallocate memory
    printf("After free => element0 = %d\n", *ptr);
    printf("After free => element1 = %d\n", *ptr+1);
    scanf("%d");
    return 0;

}
