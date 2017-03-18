#include <stdio.h>

/*A sparse martix is matrix which  has more zero elements than nonzero elements */

int main()
{
    int dimension;
    printf("Enter the dimension: \n");
    scanf("%d", &dimension);
    int Matrix[dimension][dimension];
    int i,j,NrOfZeros=0, NrOfNonZeros=0;
    for(i=0;i<dimension;i++)
    {
        for(j=0;j<dimension;j++)
        {
            printf("element[%d][%d] = ", i, j);
            scanf("%d", &Matrix[i][j]);
            if(Matrix[i][j]!=0)
            {
                NrOfNonZeros++;
            }
            else
            {
                NrOfZeros++;
            }
        }
    }
    printf("\nYour Matrix is: \n");
    for(i=0;i<dimension;i++)
    {
        for(j=0;j<dimension;j++)
        {
            printf("%d\t", Matrix[i][j]);
        }
        printf("\n");
    }
    printf("\nYour matrix has %d zeros. \n", NrOfZeros);
    printf("Your matrix has %d non-zero elements.\n", NrOfNonZeros);
    if(NrOfNonZeros<NrOfZeros)
    {
        printf("Your matrix is spare matrix.\n");
    }
    else
    {
        printf("Your matrix is not spare.\n");
    }
    scanf("%d");
    return 0;
}
