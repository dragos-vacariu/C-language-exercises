#include <stdio.h>

int main()
{
    int array[10];
    int i;
    for(i=0;i<10;i++)
    {
        printf("elements at %d = ", i);
        scanf("%d", &array[i]);
    }
    printf("\n");
    //printing all the elements of the array:
    for(i=0;i<10;i++)
    {
        printf("%d  ", *(array+i));
    }
    printf("\n");
    char arr[10];
    fflush(stdin);
    for(i=0;i<10;i++)
    {
        printf("char at %d = ", i);
        scanf("%c", &arr[i]);
        fflush(stdin);
    }
    printf("\n");
    //printing all the elements of the array:
    for(i=0;i<10;i++)
    {
        printf("%c  ", *(arr+i));
        printf("%c  ", arr(i));
    }
    printf("\n");
    scanf("%d");
    return 0;
}
