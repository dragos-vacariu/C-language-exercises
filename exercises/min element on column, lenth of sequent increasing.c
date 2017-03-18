/*
Se citesc doua numere naturale n si m (1<=m,n<=100) si apoi o matrice cu n linii si m coloane având elementele numere
întregi cu cel mult 4 cifre fiecare. Afisati pentru fiecare coloana a matricii numarul de elemente al celui mai lung
subsir strict crescator care se poate forma parcurgând elementele coloanei de sus în jos.
*/
#include<stdio.h>

int main()
{
    int n, m;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    printf("Enter the number of columns: ");
    scanf("%d", &m);
    int matrix[n][m];
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            do{
            printf("element[%d][%d] = ",i,j);
            scanf("%d", &matrix[i][j]);
            }while(matrix[i][j]>9999);
        }
    }
    int min[m];
    int LengthOf=1;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d\t",matrix[i][j]);
            if(i==0)
            {
                min[j]=matrix[i][j];
            }
            if(matrix[i][j]<min[j])
            {
                min[j]=matrix[i][j];
            }
        }
        printf("\n");
    }
    printf("\nMIN:\n");
        for(i=0;i<n;i++)
        {
            printf("%d\t", min[i]);
        }

    printf("\nLength of sequent-increasing elements:\n");
    for(j=0;j<n;j++)
    {
        LengthOf=1;
        for(i=0;i<m;i++)
        {
            if((min[j]+1)==matrix[i][j])
            {
                LengthOf++;
                min[j]++;
            }
            if(i==(n-1))
            {
                printf("%d\t",LengthOf);
            }
        }
    }
}
