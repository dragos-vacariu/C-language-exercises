#include <stdio.h>

int main()
{
    int dimension;
    printf("Enter the dimension: \n");
    scanf("%d", &dimension);
    int Array[dimension][dimension];
    int i,j;
    int SumRow=0;
    for(i=0;i<dimension;i++)
    {
        for(j=0;j<dimension;j++)
        {
            printf("element[%d][%d] = ",i,j);
            scanf("%d", &Array[i][j]);
        }
    }
    int SumCols[dimension];
    printf("\n");
    //Printing the matrix
    for(i=0;i<dimension;i++)
    {
        SumCols[i]=0; //initializing the array for Sum of Cols;
        for(j=0;j<dimension;j++)
        {
            printf("%d\t", Array[i][j]);
            SumRow+=Array[i][j];
            SumCols[i]+=Array[j][i];
        }
        printf("%d", SumRow);
        SumRow=0;
        printf("\n");
    }
    for(i=0;i<dimension;i++)
    {
        printf("%d\t", SumCols[i]);
    }
    printf("\n\n");
    scanf("%d");
    return 0;
}
