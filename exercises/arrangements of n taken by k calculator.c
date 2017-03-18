#include <stdio.h>

int main()
{
    int n,k;
    printf("Enter values for n and k: \n");
    if(scanf("%d %d", &n, &k)!= 2 || n<0 || k<0)
    {
        printf("Wrong values!\n");
        scanf("%d");
        return -1;
    }
    if(k>n)
    {
        printf("k > n so the result is 0.\n");
        scanf("%d");
        return 0;
    }
    int nf=1, nMinusK=n-k;
    int i;
    for(i=1;i<n+1;i++)
    {
        nf*=i;
    }
    k=1;
    for(i=1;i<nMinusK+1;i++)
    {
        k*=i;
    }
    printf("n factorial = %d    n-k factorial = %d\n", nf, k);
    printf("\nResult: %d\n", nf/k);
    scanf("%d");
    return 0;
}
