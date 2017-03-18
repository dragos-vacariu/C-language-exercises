#include<stdio.h>

int main()
{
    char a;
    int i;
    while (a!='X'&&a!='x')
    {
        system("cls");
        fflush(stdin);
        printf("Press 1 for testing unoptimized loop!\nPress 2 for testing optimized loop\nPress X to quit!\n");
        scanf("%c",&a);
        if(a=='1')
        {
            for (i=0;i<500000;i++) //completion time 74 seconds.
            {
                printf("%d\n",i);
            }
        }
        else if(a=='2')
        {
            for (i=0;i<500000;) //completion time 61 seconds.
            {
                printf("%d\n",i); i++;
                printf("%d\n",i); i++;
                printf("%d\n",i); i++;
                printf("%d\n",i); i++;
                printf("%d\n",i); i++;
                printf("%d\n",i); i++;
                printf("%d\n",i); i++;
                printf("%d\n",i); i++;
                printf("%d\n",i); i++;
                printf("%d\n",i); i++;
            }
        }
        printf("Press any key to roll again!\n");
        scanf("%d");
    }
    return 0;
}
