#include <stdio.h>
/*
Combinations refer to the combination of n things taken k at a time without repetition.
*/
int main()
{
    int n,k;
    printf("Enter n and k:\n");
    if(scanf("%d %d", &n, &k)!=2 || n<0 || k<0)
    {
        printf("You have entered wrong values!\n");
        scanf("%d");
        return -1;
    }
    if(n<k)
    {
        printf("n is less than k!\n");
        scanf("%d");
        return -1;
    }
    int i;
    int nMinusK = n-k;
    int nf = 1,kf = 1;
    for(i=1;i<n+1;i++)
    {
        nf*=i;
    }
    for(i=1;i<k+1;i++)
    {
        kf*=i;
    }
    n=1;
    for(i=1;i<nMinusK+1;i++)
    {
        n*=i;
    }
    printf("n factorial = %d, k factorial = %d, n-k factorial = %d\n", nf, kf, n);
    printf("\nResult: %d\n", nf/(kf*n));
    scanf("%d");
    return 0;
}
