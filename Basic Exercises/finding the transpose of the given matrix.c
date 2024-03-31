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
    int Matrix[dimension][dimension];
    int i,j;
    for(i=0;i<dimension;i++)
    {
        for(j=0;j<dimension;j++)
        {
            printf("element[%d][%d] = ", i,j);
            scanf("%d", &Matrix[i][j]);
        }
    }
    printf("\n");
    printf("The matrix is: \n");
    //Print the matrix:
    for(i=0;i<dimension;i++)
    {
        for(j=0;j<dimension;j++)
        {
            printf("%d\t", Matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("The transpose of the matrix is: \n");
    for(i=0;i<dimension;i++)
    {
        for(j=0;j<dimension;j++)
        {
            printf("%d\t", Matrix[j][i]);
        }
        printf("\n");
    }
    printf("\n");
    scanf("%d");
    return 0;
}
