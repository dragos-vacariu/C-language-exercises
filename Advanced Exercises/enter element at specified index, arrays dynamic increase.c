#include <stdio.h>

int main()
{
    int dimension;
    printf("Enter the dimension of your array: ");
    scanf("%d", &dimension);
    int Array[dimension];
    int i;
    for(i=0;i<dimension;i++)
    {
        printf("element%d = ",i );
        scanf("%d", &Array[i]);
    }
    //Printing the array:
    printf("\nYour array is: \n");
    for(i=0;i<dimension;i++)
    {
        printf("%d ", Array[i]);
    }
    printf("\n\n");
    printf("Enter a new element: ");
    int GivenElement;
    scanf("%d", &GivenElement);
    printf("Enter the storage index: ");
    int GivenIndex;
    if(scanf("%d", &GivenIndex)!=1 || GivenIndex<0 || GivenIndex>dimension-1)
    {
        printf("%d\n", GivenIndex);
        printf("You have entered an invalid index!\n");
    }
    dimension++;
    int TempArr[dimension];
    int j=0;
    for(i=0;i<dimension;i++)
    {
        if(i==GivenIndex)
        {
            TempArr[i]=GivenElement;
        }
        else
        {
            TempArr[i]=Array[j];
            j++;
        }
    }
    printf("\nThe new array is: \n");
    for(i=0;i<dimension;i++)
    {
        printf("%d ", TempArr[i]);
    }
    printf("\n\n");
    scanf("%d");
    return 0;
}
