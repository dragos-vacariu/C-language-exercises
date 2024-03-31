#include <stdio.h>

int main()
{
    int numberOfElem;
    printf("How many elements you wish to store?\n");
    scanf("%d", &numberOfElem);
    int Array[numberOfElem];
    int i=0;
    for(i=0;i<numberOfElem;i++)
    {
        printf("elem %d = ", i);
        scanf("%d", &Array[i]);
    }
    int j;
    int numberOfApparitions=0;
    printf("\nThe unique elements in your array are: \n");
    for(i=0;i<numberOfElem;i++)
    {
        for(j=0;j<numberOfElem;j++)
        {
            if(Array[i]==Array[j]&&i!=j)
            {
                numberOfApparitions++;
            }
        }
        if(numberOfApparitions==0)
        {
            printf("%d ", Array[i]);
        }
        numberOfApparitions=0;
    }
    printf("\n");
    scanf("%d");
    return 0;

}
