#include <stdio.h>

int main()
{
    int dimension;
    printf("Enter the dimension: \n");
    scanf("%d", &dimension);
    if(dimension<0)
    {
        printf("Dimension cannot be negative!\n");
        return 0;
    }
    int Array[dimension];
    int i;
    int maxElement, minElement;
    for(i=0;i<dimension;i++)
    {
        printf("element%d = ", i);
        scanf("%d", &Array[i]);
        if(i==0)
        {
            maxElement=Array[i];
            minElement=Array[i];
        }
        if(maxElement<Array[i])
        {
            maxElement=Array[i];
        }
        if(minElement>Array[i])
        {
            minElement=Array[i];
        }
    }
    //Print the array:
    int SearchedValue=minElement;
    for(i=0;i<dimension;i++)
    {
        printf("%d ", Array[i]);
        if(Array[i]!=maxElement)
        {
            if(Array[i]>SearchedValue)
            {
                SearchedValue=Array[i];
            }
        }
    }
    printf("\nMax Element: %d\t Min Element: %d\t SecondMax: %d\n", maxElement, minElement, SearchedValue);
    printf("\n");
    scanf("%d");
    return 0;
}
