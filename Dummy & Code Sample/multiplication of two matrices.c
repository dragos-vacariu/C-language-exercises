#include <stdio.h>

int main()
{
    printf("Enter the dimension:\n");
    int dim;
    scanf("%d", &dim);
    int array[dim][dim];
    int array1[dim][dim];
    int produs[dim][dim];
    int suma[dim][dim];
    int i,j;
    for(i = 0; i < dim; i++)
    {
        for(j = 0; j <dim; j++)
        {
            printf("matrix1[%d][%d] = ", i, j);
            scanf("%d", &array[i][j]);
            printf("matrix2[%d][%d] = ", i, j);
            scanf("%d", &array1[i][j]);
        }
     }
    //Displaying the matrices:
    printf("Matrix1 is: \n");
    for(i = 0; i < dim; i++)
    {
        for(j = 0; j <dim; j++)
        {
            printf("%d ", array[i][j]);
            //Calculating the sum of the 2 matrices:
            suma[i][j]=array[i][j] + array1[i][j];
        }
        printf("\n");
     }
    printf("Matrix2 is: \n");
    for(i = 0; i < dim; i++)
    {
        for(j = 0; j <dim; j++)
        {
            printf("%d ", array1[i][j]);
        }
        printf("\n");
     }
    //Calculating the multiplication:
    for(i=0;i < dim;i++)
    {
        for(j=0;j < dim;j++)
        {
            int k=0;
            produs[i][j]=0;
            while(k < dim)
            {
                produs[i][j] += array[i][k]*array1[k][i];
                k++;
            }
        }
    }
    printf("The result of summation between matrix1 and matrix2 is:\n");
    for(i = 0; i < dim; i++)
    {
       for(j = 0; j < dim; j++)
        {
            printf("%d ", suma[i][j]);
        }
        printf("\n");
    }
    //Result of multiplication:
    printf("The result of multiplication between matrix1 and matrix2 is:\n");
    for(i = 0; i < dim; i++)
    {
       for(j = 0; j < dim; j++)
        {
            printf("%d ", produs[i][j]);
        }
        printf("\n");
    }
    scanf("%d");
    return 0;
}
