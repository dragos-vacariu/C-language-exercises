#include<stdio.h>

void GetElementsForMatrices(int A[], int B[], int dimension);
void PrintElements(int A[], int dimension);
void MultiplyMatrices(int A[], int B[], int dimension);

int main()
{
    printf("Enter the dimension of the 2 matrices: \n");
    int dimension;
    scanf("%d", &dimension);
    int Array1[dimension], Array2[dimension];
    printf("\nEnter the elements: \n\n");
    GetElementsForMatrices(Array1, Array2, dimension);
    printf("\nPrinting the elements: \n\n");
    PrintElements(Array1, dimension);
    PrintElements(Array2, dimension);
    printf("\nMultiplying matrices:\n\n");
    MultiplyMatrices(Array1, Array2, dimension);
    scanf("%d");
    return 0;
}
void GetElementsForMatrices(int A[], int B[], int dimension)
{
    static int i = 0;
    if(i<dimension)
    {
        printf("elementA %d = ", i);
        scanf("%d", &A[i]);
        printf("elementB %d = ", i);
        scanf("%d", &B[i]);
        i++;
        GetElementsForMatrices(A, B, dimension);
    }
    //Don't forget to set this back to 0.
    i=0;
}
void PrintElements(int A[], int dimension)
{
    static int i=0;
    if(i<dimension)
    {
        printf("element %d = %d\n", i, A[i]);
        i++;
        PrintElements(A, dimension);
    }
    //AS i is static keeping its value until the program dies, don't forget to set it back to 0, such that
    //this function could be used again, until the program ends. If you don't set it back to 0, next time when
    //calling this function i will still have the same value, which is 3... and it won't print a thing, because 3 is higher
    //than the dimension.
    i=0;
}
void MultiplyMatrices(int A[], int B[], int dimension)
{
    static int i=0;
    if(i<dimension)
    {
        printf("A[%d]*B[%d] = %d\n", i, i, A[i]*B[i]);
        i++;
        MultiplyMatrices(A, B, dimension);
    }
    //Don't forget to set this back to 0 for future times.
    i=0;
}
