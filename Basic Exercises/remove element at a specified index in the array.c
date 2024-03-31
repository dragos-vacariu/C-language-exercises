#include <stdio.h>

int main()
{
    int dimension;
    printf("Enter the dimension of the array:\n");
    scanf("%d", &dimension);
    int Array[dimension];
    int i;
    for(i=0;i<dimension;i++)
    {
        printf("element%d = ", i);
        scanf("%d", &Array[i]);
    }
    //Printing the array:
    for(i=0;i<dimension;i++)
    {
        printf("%d ", Array[i]);
    }
    printf("\n");
    int indexToRemove;
    printf("What is the index that you wish to remove?\n");
    scanf("%d", &indexToRemove);
    if(indexToRemove<0||indexToRemove>dimension-1)
    {
        printf("You have entered a wrong index: \n");
        return 0;
    }
    int TempArray[dimension-1];
    int j=0;
    for(i=0;i<dimension;i++)
    {
        if(indexToRemove!=i)
        {
            TempArray[j]=Array[i];
            j++;
        }
    }
    //Printing the new array:
    for(i=0;i<dimension-1;i++)
    {
        printf("%d ", TempArray[i]);
    }
    printf("\n");
    scanf("%d");
    return 0;
}
