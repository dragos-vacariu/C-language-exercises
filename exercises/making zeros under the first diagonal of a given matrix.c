#include <stdio.h>

int main()
{
    int dimension;
    printf("Enter the dimension: \n");
    scanf("%d", &dimension);
    int Matrix[dimension][dimension];
    int i,j;
    for(i=0;i<dimension;i++)
    {
        for(j=0;j<dimension;j++)
        {
            printf("element[%d][%d] = ", i, j);
            scanf("%d", &Matrix[i][j]);
        }
    }
    printf("\nYour matrix is: \n\n");
    for(i=0;i<dimension;i++)
    {
        for(j=0;j<dimension;j++)
        {
            printf("%d\t", Matrix[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<dimension;i++)
    {
        for(j=0;j<dimension;j++)
        {
            if(i>j)
            {
                Matrix[i][j] = 0;
            }
        }
    }
    printf("\nThe new matrix\n");
    for(i=0;i<dimension;i++)
    {
        for(j=0;j<dimension;j++)
        {
            printf("%d\t", Matrix[i][j]);
        }
        printf("\n");
    }
    scanf("%d");
    return 0;
}
