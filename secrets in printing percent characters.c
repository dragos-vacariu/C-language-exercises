#include <stdio.h>

int main()
{
    //ESCAPE SEQUENCE WITH %
    printf("%%\n"); // this will print only 1 %
    printf("%%%\n"); // this will also print 1 %
    printf("%%%%\n"); // this will print 2 %%
    printf("%%%%%\n"); // this will print also 2 %%
    printf("%%%%%%\n"); // this will print 3 %%%
    // So the rule while printing these is that it will print the number of % you entered, divided by 2, and if it's
    //a floating number, it will be rounded to the lower integer value (ex: instead of 5.5 it will be 5, instead of
                                                                        //6.5 it will be 6 and so on.);
    //In order to quit that behavior just use this:
    char c[] = "%%%%%%%%%%%%";
    printf("%s\n", c);

    //THESE WILL BE PRINTED JUST AS THEY ARE:
    printf("########\n");
    printf("$$$$$$$$\n");
    printf("&&&&&&&&\n");
    scanf("%d");
    return 0;
}
