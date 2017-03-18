#include <stdio.h>

void PrintCheckerBoard(int XaxisLength, int YaxisLength);

int main()
{
    int xLen,yLen;
    printf("Enter the height and the width of the table: \n");
    if(scanf("%d %d", &xLen, &yLen)!=2 || xLen<2||yLen<2)
    {
        printf("You have entered wrong values!\n");
        scanf("%d");
        return 0;
    }
    PrintCheckerBoard(xLen,yLen);
    scanf("%d");
    return 0;
}

void PrintCheckerBoard(int XaxisLength, int YaxisLength)
{
    int i,j;
    for(i=0;i<XaxisLength;i++)
    {
        for(j=0;j<YaxisLength;j++)
        {
            if(i%2==0)
            {
                if(j%2==0)
                {
                    printf("#");
                }
                else
                {
                    printf(" ");
                }
            }
            else
            {
                if(j%2==1)
                {
                    printf("#");
                }
                else
                {
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
}
