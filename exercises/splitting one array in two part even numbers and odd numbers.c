#include <stdio.h>

int main()
{
    int dimension;
    printf("Enter the dimension of the array: ");
    scanf("%d", &dimension);
    int Array[dimension];
    int i;
    int EvenNumber=0;
    int OddNumber=0;
    for(i=0;i<dimension;i++)
    {
        printf("element%d = ", i);
        scanf("%d", &Array[i]);
        if(Array[i]%2==0)
        {
            EvenNumber++;
        }
        else
        {
            OddNumber++;
        }
    }
    printf("\nArray has the following elements: \n");
    for(i=0;i<dimension;i++)
    {
        printf("%d ", Array[i]);
    }
    printf("\n");
    int EvenArray[EvenNumber];
    int OddArray[OddNumber];
    //I will use these variables as index monitors for the two array barely created.
    EvenNumber=0;
    OddNumber=0;
    for(i=0;i<dimension;i++)
    {
        if(Array[i]%2==0)
        {
            EvenArray[EvenNumber]=Array[i];
            EvenNumber++;
        }
        else
        {
            OddArray[OddNumber]=Array[i];
            OddNumber++;
        }
    }
    printf("\nThe even elements in the array are the following: \n");
    for(i=0;i<EvenNumber;i++)
    {
        printf("%d ", EvenArray[i]);
    }
    printf("\n");
    printf("\nThe odd elements in the array are the following: \n");
    for(i=0;i<OddNumber;i++)
    {
        printf("%d ", OddArray[i]);
    }
    printf("\n\n");
    scanf("%d");
    return 0;
}
