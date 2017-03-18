#include <stdio.h>

/*
Permutation = the distinct way in which a number of objects can be arranged. Example: 4 numbers can be arranged in
24 different ways.
*/
int main()
{
    int n;
    printf("Please enter the value of n:\n");
    if(scanf("%d", &n)!=1)
    {
        printf("Error reading the input:\n");
        scanf("%d");
        return -1;
    }
    int i,nf=1;
    for(i=1;i<n+1;i++)
    {
        nf*=i;
    }
    printf("\nPermutations of %d is %d\n", n, nf);
    scanf("%d");
    return 0;
}
