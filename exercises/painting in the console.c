#include <stdio.h>
#define LENGTH 10
#define HEIGHT 20

void PrintLetterF();
int main()
{
    //PrintLetterF();
    printf("#################     ###########    ##########     ##    ##\n");
    printf("######                ##        #    #      # #     ##    ##\n");
    printf("###                   ##  ###   #    ##     # #     ##   ### \n");
    printf("##                    ##  # #   #    ##      ##     ###   ##   \n");
    printf("#        ###          ##  ##   ##    ###     ###    ##  ##     \n");
    printf("##   #####  #         ##       ##    ##             ####      \n");
    printf("#############         ###########    #              ##  ##     \n");
    printf("#    #####  #         #   ###   #    #              ##    ##    \n");
    printf("#        #  #         # ######  #    #              ##    ####   \n");
    printf("#        ###          # #    #  #    #              ##      ##   \n");
    printf("#                     # #    #  #    ##       ##    ##       ### \n");
    printf("###                   # #    #  #    ###      ##    ##  #     ##\n");
    printf("##                    # #    #  #    ####     ##    ##  #      ##\n");
    printf("####                  # #    ## #     #########       ##       ##\n");
    printf("#                      #      ###       ####                 ##\n");
    scanf("%d");
    return 0;
}
void PrintLetterF()
{
    int i,j;
    for(i=0;i<HEIGHT;i++)
    {
        for(j=0;j<LENGTH;j++)
        {
            if(j==0&&j<LENGTH/2||i==0||i==HEIGHT/2&&j<LENGTH-4)
            {
                printf("#");
            }
        }
        printf("\n");
    }
}
