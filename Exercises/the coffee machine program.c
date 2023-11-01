#include <stdio.h>

int main()
{
     int leiPlatiti=0;
     int sumaramasa=0;
     int comanda;
     printf("Introduceti suma in aparat: \n");
     scanf(" %d",&leiPlatiti);
     sumaramasa=leiPlatiti;
     printf("Ati introdus %d lei \n",leiPlatiti);
     while(sumaramasa>0)
     {
        printf("Lapte cu cacao   -> 1 leu \t apasati tasta 1 \n");
        printf("Ceai             -> 2 lei \t apasati tasta 2 \n");
        printf("Cafea Latte      -> 3 lei \t apasati tasta 3 \n");
        printf("Capucinno        -> 4 lei \t apasati tasta 4 \n");
        printf("Espresso         -> 5 lei \t apasati tasta 5 \n");
        scanf(" %d",&comanda);
          if((comanda==1) && (sumaramasa>=comanda))
                {
                    sumaramasa=sumaramasa-comanda;
                    if(sumaramasa>0)
                    {
                        printf("Ati comandat Lapte cu cacao \n");
                        printf("Mai aveti %d le%s \n",sumaramasa,(sumaramasa==1) ? "u" :"i");
                        printf("Mai doriti ceva? \n");
                    }
                    else if (sumaramasa==0)
                    {
                        printf("Ati comandat Lapte cu cacao \n");
                        printf("Mai aveti %d lei \n" ,sumaramasa);
                    }
                }
                else if ((comanda==1) && (sumaramasa<comanda))
                {
                     printf("Optiune Invalida, incercati din nou \n");
                     printf("Mai aveti %d lei \n",sumaramasa);
                }
                if((comanda==2) && (sumaramasa>=comanda))
                {
                    sumaramasa=sumaramasa-comanda;
                    if(sumaramasa>0)
                    {
                        printf("Ati comandat Ceai \n");
                        printf("Mai aveti %d le%s \n",sumaramasa,(sumaramasa==1) ? "u" :"i");
                        printf("Mai doriti ceva? \n");
                    }
                    else if (sumaramasa==0)
                    {
                        printf("Ati comandat Ceai \n");
                        printf("Mai aveti %d lei \n",sumaramasa);
                    }
                }
                else if ((comanda==2) && (sumaramasa<comanda))
                {
                   printf("Optiune Invalida, incercati din nou \n");
                   printf("Mai aveti %d lei \n",sumaramasa);
                }
                if((comanda==3) && (sumaramasa>=comanda))
                {
                    sumaramasa=sumaramasa-comanda;
                    if(sumaramasa>0)
                    {
                        printf("Ati comandat Cafea Latte \n");
                        printf("Mai aveti %d le%s \n",sumaramasa,(sumaramasa==1) ? "u" :"i");
                        printf("Mai doriti ceva? \n");
                    }
                    else if (sumaramasa==0)
                    {
                        printf("Ati comandat Cafea Latte \n");
                        printf("Mai aveti %d lei \n",sumaramasa);
                    }
                }
                else if ((comanda==3) && (sumaramasa<comanda))
                {
                   printf("Optiune Invalida, incercati din nou \n");
                   printf("Mai aveti %d lei \n",sumaramasa);
                }
                if((comanda==4) && (sumaramasa>=comanda))
                {
                    sumaramasa=sumaramasa-comanda;
                    if(sumaramasa>0)
                    {
                        printf("Ati comandat Capuchinno \n");
                        printf("Mai aveti %d le%s \n",sumaramasa,(sumaramasa==1) ? "u" :"i");
                        printf("Mai doriti ceva? \n");
                    }
                    else if (sumaramasa==0)
                    {
                        printf("Ati comandat Capucinno \n");
                        printf("Mai aveti %d lei \n",sumaramasa);
                    }
                }
                else if ((comanda==4) && (sumaramasa<comanda))
                {
                    printf("Optiune Invalida, incercati din nou \n");
                    printf("Mai aveti %d lei \n",sumaramasa);
                }
                if((comanda==5) && (sumaramasa>=comanda))
                {
                    sumaramasa=sumaramasa-comanda;
                    if(sumaramasa>0)
                    {
                        printf("Ati comandat Espresso \n");
                        printf("Mai aveti %d le%s \n",sumaramasa,(sumaramasa==1) ? "u" :"i");
                        printf("Mai doriti ceva? \n");
                    }
                    else if (sumaramasa==0)
                    {
                        printf("Ati comandat Espresso \n");
                        printf("Mai aveti %d le%s \n",sumaramasa,(sumaramasa==1) ? "u" :"i");
                    }
                }
                else if ((comanda==5) && (sumaramasa<comanda))
                {
                    printf("Optiune Invalida, incercati din nou \n");
                    printf("Mai aveti %d lei \n",sumaramasa);
                }
    }
    printf("Nu mai aveti credit! Va multumim \n");
    //Keep the console opened until the next button pressed.
    scanf("%d", &sumaramasa);
    return 0;
}
