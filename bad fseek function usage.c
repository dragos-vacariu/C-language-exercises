#include<stdio.h>

int main()
{
    FILE *fp;
    fp=fopen("trial", "r");
    //BAD USAGE (compilation error):
    //fseek(fp, "20", SEEK_SET); // this statement is wrong because fseek needs a long offset, just like this (20L).

    //GOOD USAGE:
    fseek(fp, "20L", SEEK_SET);
    fseek(fp, 20, SEEK_SET);
    fseek(fp, 20L, SEEK_SET);
    fseek(fp, -3L, SEEK_CUR);
    fseek(fp, -3, SEEK_CUR);
    fseek(fp, 0, SEEK_END);
    fclose(fp);
    scanf("%d");
    return 0;
}
