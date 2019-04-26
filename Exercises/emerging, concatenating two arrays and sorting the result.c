#include <stdio.h>

int main()
{
    int dimension;
    printf("Enter dimension for the arrays: ");
    scanf("%d", &dimension);
    int Arr1[dimension], Arr2[dimension];
    int i;
    //Reading the two arrays:
    for(i=0;i<dimension;i++)
    {
        printf("array1[%d] = ", i);
        scanf("%d", &Arr1[i]);
        printf("array2[%d] = ", i);
        scanf("%d", &Arr2[i]);
    }
    int EmergedArr[dimension*2];
    //Printing array1:
    printf("\nFirst array: \n");
    for(i=0;i<dimension;i++)
    {
        printf("%d ", Arr1[i]);
    }
    printf("\n");
    //Printing array2:
    printf("\nSecond array: \n");
    for(i=0;i<dimension;i++)
    {
        printf("%d ", Arr2[i]);
    }
    printf("\n");
    //Emerging the arrays:
    for(i=0;i<dimension*2;i++)
    {
        if(i<dimension)
        {
            EmergedArr[i]=Arr1[i];
        }
        else
        {
            EmergedArr[i]=Arr2[i-dimension];
        }
    }
    //Printing emerged array:
    printf("\nEmerged array: \n");
    for(i=0;i<dimension*2;i++)
    {
        printf("%d ", EmergedArr[i]);
    }
    printf("\n");
    //Sorting the Emerged array;
    int j;
    for(i=0;i<dimension*2;i++)
    {
        for(j=0;j<dimension*2;j++)
        {
            if(EmergedArr[j]>EmergedArr[i])
            {
                //INTERCHANGING WITHOUT AUXILIARITY:
                EmergedArr[j]=EmergedArr[j]^EmergedArr[i];
                EmergedArr[i]=EmergedArr[j]^EmergedArr[i];
                EmergedArr[j]=EmergedArr[j]^EmergedArr[i];
            }
        }
    }
    //Printing the sorted Emerged array:
    printf("\nThe emerged sorted array is: \n");
    for(i=0;i<dimension*2;i++)
    {
        printf("%d ", EmergedArr[i]);
    }
    printf("\n\n");
    scanf("%d");
    return 0;
}
