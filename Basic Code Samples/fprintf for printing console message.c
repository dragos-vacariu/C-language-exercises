#include <stdio.h>

int main(int args, char** argv)
{
    FILE* fp;
    fp=fopen("mytext.txt", "w");
    //Writing in console:
    fprintf(stdout, "My message!\n");
    //Writing in a file:
    fprintf(fp, "My message!\n");
    scanf("%d");
    return 0;
}
