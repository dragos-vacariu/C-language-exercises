#include <stdio.h>
#include <conio.h>

int main()
{
    char strg[] = "I was here and there and there and how and now then see stars build project on";
    int maxval=5;
    int spacenr=0;
    for(int i=0; i<sizeof(strg); i++)
    {
        if(strg[i]==' ')
        {
            spacenr++;
        }
        if(spacenr==maxval)
        {
            spacenr=0;
            printf("\n");
        }

        printf("%c", strg[i]);
    }
    getch();
    return 0;
}
