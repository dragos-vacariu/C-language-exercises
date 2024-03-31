#include <stdio.h>

int main()
{
    int dimension;
    printf("Enter the dimension for the array: ");
    scanf("%d", &dimension);
    int Arr[dimension];
    int i;
    for(i=0;i<dimension;i++)
    {
        printf("element %d = ", i);
        scanf("%d", &Arr[i]);
    }
    //Printing the array:
    printf("\nElement of the array: \n");
    for(i=0;i<dimension;i++)
    {
        printf("%d ", Arr[i]);
    }
    printf("\n\nFrequency of elements:\n");
    int j,k;
    int Occurences=1;
    for(i=0;i<dimension;i++)
    {
        Occurences=1;
        for(j=i+1;j<dimension;j++)
        {
            if(Arr[i]==Arr[j])
            {
                Occurences++;
            }
        }
        for(k=0;k<dimension;k++)
        {
            if(Arr[i]==Arr[k])
            {
                if(k<i) //if enters here it means that our element has already appeared in the statistic.
                    //so I will take caution to avoid another appearance.
                {
                   Occurences=0; //just to prevent multiple and different statistics for the same element.
                }
            }
        }
        if(Occurences>0)
        {
            printf("Element: %d appears %d times.\n", Arr[i], Occurences);
        }
    }
    scanf("%d");
    return 0;
}
