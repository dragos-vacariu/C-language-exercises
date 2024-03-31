#include <stdio.h>
#include <stdbool.h>
//GLOBAL VARIABLES:
int dimension;
//PROTOTYPING THE FUNCTIONS:
bool CheckIdentityMatrix(int Matrix[dimension][dimension]);

int main()
{
    printf("Enter the dimension of the matrix: \n");
    scanf("%d", &dimension);
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
    //Printing the matrix:
    printf("\nYour matrix is: \n");
    int counter=0;
    for(i=0;i<dimension;i++)
    {
        for(j=0;j<dimension;j++)
        {
            printf("%d ", Matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    bool IdentityOrNot = CheckIdentityMatrix(Matrix);
    if(IdentityOrNot)
    {
        printf("Your matrix is identity matrix!\n");
    }
    else
    {
        printf("Your matrix is not identity matrix!\n");
    }
    scanf("%d");
    return 0;
}
bool CheckIdentityMatrix(int Matrix[dimension][dimension])
{
    int i,j;
    for(i=0;i<dimension;i++)
    {
        for(j=0;j<dimension;j++)
        {
            if(i==j)
            {
                if(Matrix[i][j]==1)
                {
                    continue;
                }
                else
                {
                    return false;
                }
            }
            else
            {
                if(Matrix[i][j]==0)
                {
                    continue;
                }
                else
                {
                    return false;
                }
            }
        }
    }
    return true;
}
