#include <stdio.h>

void FindPerfectNumbersWithinRange(int range);

int main()
{
    int range;
    printf("Enter the range: ");
    scanf("%d", &range);
    FindPerfectNumbersWithinRange(range);
    scanf("%d");
    return 0;
}
void FindPerfectNumbersWithinRange(int range)
{
    int i=2;
    int counter;
    int result=0;
    printf("\n");
    //BECAUSE I KNOW THAT THERE ARE NO PERFECT NUMBERS UNTIL 6.
    if(range<6)
    {
        printf("There are no perfect numbers within this range: \n");
    }
    while(i<range+1)
    {
        for(counter=1;counter<i+1;counter++)
        {
            if(i%counter==0 && counter<i) //using % operator with 0 is a problem.
            {
                result+=counter;
            }
        }
        if(result==i)
        {
            printf("%d ", result);
        }
        result=0;
        i++;
    }
    printf("\n");
}
