#include<stdio.h>
#include<stdlib.h>

int main()
{
    int cash;
    char optiune;
    int choice;
    int nrpariat;
    char exit;
    printf("Introduceti suma \n");
    scanf(" %d",&cash);
    while(cash>0)
    {
        printf("Mai aveti suma de %d le%s \n",cash,(cash!=1) ? "i" : "u");
        if(cash>=1 && cash<=4)
        {
            printf("Castig = 4*miza \n");
            printf("Pentru miza de 1 leu apasati tasta a \n");
            scanf(" %c",&optiune);
            if((optiune=='a')||(optiune=='A'))
            {
                printf("Miza acceptata \n");
            }
            else
            {
                printf("Tasta incorecta! \n");
                continue;
            }
        }
        if(cash>=5 && cash<10)
        {
            printf("Castig = 4*miza \n");
            printf("Pentru miza de 1 leu apasati tasta a \n");
            printf("Pentru miza de 5 leu apasati tasta b \n");
            scanf(" %c",&optiune);
            if(optiune=='a'|| optiune=='A')
            {
                printf("Miza acceptata \n");
            }
            else if (optiune=='b'|| optiune=='B')
            {
                printf("Miza acceptata \n");
            }
            else
            {
                printf("Tasta incorecta! \n");
                continue;
            }
        }
        if (cash>10)
        {
            printf("Castig = 4*miza \n");
            printf("Pentru miza de 1 leu apasati tasta a  \n");
            printf("Pentru miza de 5 leu apasati tasta b \n");
            printf("Pentru miza de 10 lei apasati tasta c \n");
            scanf(" %c",&optiune);
            if(optiune=='a'|| optiune=='A')
            {
                printf("Miza acceptata \n");
            }
            else if (optiune=='b'|| optiune=='B')
            {
                printf("Miza acceptata \n");
            }
            else if (optiune=='c'|| optiune=='C')
            {
                printf("Miza acceptata \n");
            }
            else
            {
                printf("Tasta incorecta! \n");
                continue;
            }
        }
        choice=(rand()%9+1);
        printf("Introduceti numarul pe care vreti sa il pariati: (De la 1 la 10)\n");
        scanf(" %d",&nrpariat);
        printf("Numarul pe care ati pariat este: %d\n",nrpariat);
        printf("Numarul castigator este : %d\n",choice);
        if(choice==nrpariat)
        {
                if (optiune=='a'|| optiune=='A')
                {
                    cash=+4;
                    printf("Felicitari ati castigat! \n");
                    printf("Mai aveti suma de %d le%s \n",cash,(cash!=1) ? "i" : "u");
                    printf("Doriti sa mai jucati? (y/n) \n");
                    scanf(" %c",&exit);
                    if(exit=='y' || exit=='Y')
                    {
                        continue;
                    }
                    else
                    {
                        break;
                    }
                }
                else if (optiune=='b'|| optiune=='B')
                {
                    cash+=20;
                    printf("Felicitari ati castigat! \n");
                    printf("Mai aveti suma de %d le%s \n",cash,(cash!=1) ? "i" : "u");
                    printf("Doriti sa mai jucati? (y/n) \n");
                    scanf(" %c",&exit);
                    if(exit=='y' || exit=='Y')
                    {
                        continue;
                    }
                    else
                    {
                        break;
                    }
                }
                else if (optiune=='c'|| optiune=='C')
                {
                    cash+=40;
                    printf("Felicitari ati castigat! \n");
                    printf("Mai aveti suma de %d le%s \n",cash,(cash!=1) ? "i" : "u");
                    printf("Doriti sa mai jucati? (y/n) \n");
                    scanf(" %c",&exit);
                    if(exit=='y' || exit=='Y')
                    {
                        continue;
                    }
                    else
                    {
                        break;
                    }
                }
                else
                {
                    continue;
                }
        }
        else if (optiune=='a'|| optiune=='A')
        {
            cash--;
            printf("Ne pare rau , nu ati castigat \n");
            printf("Mai aveti suma de %d le%s \n",cash,(cash!=1) ? "i" : "u");
            printf("Doriti sa mai jucati? (y/n) \n");
            scanf(" %c",&exit);
            if(exit=='y' || exit=='Y')
            {
                continue;
            }
            else
            {
                break;
            }
        }
        else if (optiune=='b'|| optiune=='B')
        {
            cash-=5;
            printf("Ne pare rau , nu ati castigat \n");
            printf("Mai aveti suma de %d le%s \n",cash,(cash!=1) ? "i" : "u");
            printf("Doriti sa mai jucati? (y/n) \n");
            scanf(" %c",&exit);
            if(exit=='y' || exit=='Y')
            {
                continue;
            }
            else
            {
                break;
            }
        }
        else if (optiune=='c'|| optiune=='C')
        {
            cash-=10;
            printf("Ne pare rau , nu ati castigat \n");
            printf("Mai aveti suma de %d le%s \n",cash,(cash!=1) ? "i" : "u");
            printf("Doriti sa mai jucati? (y/n) \n");
            scanf(" %c",&exit);
            if(exit=='y' || exit=='Y')
            {
                continue;
            }
            else
            {
                break;
            }
        }
        else
        {
            continue;
        }
    }
    printf("Ati retras suma de %d le%s \n",cash,(cash!=1) ? "i" : "u");
    printf("Va multumim si va mai asteptam !");
    return 0;
}
