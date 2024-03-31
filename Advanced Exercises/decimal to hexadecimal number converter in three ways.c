#include <stdio.h>
#include <stdlib.h>

void ConvertToHexa(int x);
void ConvertToHexaTwo(int x);
void ConvertToHexaThree(int x);
int GetDigits(int x);

int main()
{
    int number;
    printf("Enter your number: ");
    scanf("%d", &number);
    ConvertToHexa(number);
    ConvertToHexaTwo(number);
    ConvertToHexaThree(number);
    scanf("%d");
    return 0;
}

void ConvertToHexa(int x)
{
    int delta=1;
    int n=0;
    while(delta<x)
    {
        delta*=16;
        n++;
    }
    if(delta>x)
        {
            delta/=16;
            n--;
        }
    delta=1;
    int* number = (int*) malloc(GetDigits(x)*sizeof(int));
    int i=0;
    while(n>-1)
    {
        while(delta<x)
        {
            delta*=16;
        }
        if(delta>x&&x>0)
        {
            delta/=16;
        }
        if(x>0)
        {
            *(number+i) = x/delta;
            x-=(*(number+i)*delta);
        }
        else
        {
            *(number+i)=0;
        }
        delta=1;
        n--;
        i++;
    }
    int j;
    printf("Hexadecimal number: ");
    for(j=0;j<i;j++)
    {
        switch(*(number+j))
        {
            case 10:{printf("Ä");break;}
            case 11:{printf("B");break;}
            case 12:{printf("C");break;}
            case 13:{printf("D");break;}
            case 14:{printf("E");break;}
            case 15:{printf("F");break;}
            default:{printf("%d", *(number+j));break;}
        }
    }
    printf("\n");
}
void ConvertToHexaTwo(int x)
{
    int* number = (int*) malloc(GetDigits(x)*sizeof(int));
    int i=0;
    while(x)
    {
        *(number+i)=x&0b1111; //take the first 4 bits of the digit and store them to number;
        x=x>>4; //shift 4 position to the right so that the bits that have been taken are now out from that number;
        i++; //increase the index to provide a free place in the array fro the next value.
    }
    i--; // because before exiting the loop i was increased, the purpose of increasing i is keep tracking of
    //the next free index in number, but while all the digits have been stored, we need to keep track of the last digit
    //index.
    printf("Hexadecimal number: ");
    int j;
    for(j=i;j>-1;j--)
    {
        switch(*(number+j))
        {
            case 10:{printf("Ä");break;}
            case 11:{printf("B");break;}
            case 12:{printf("C");break;}
            case 13:{printf("D");break;}
            case 14:{printf("E");break;}
            case 15:{printf("F");break;}
            default:{printf("%d", *(number+j));break;}
        }
    }
    printf("\n");
}
void ConvertToHexaThree(int x)
{
    //This will print exactly the hexadecimal value of the number, because of %x specifier
    printf("Hexadecimal number: %x\n", x);
}
int GetDigits(int x)
{
    int NrOfDigits=0;
    if(x==0)
    {
        return 1;
    }
    while(x)
    {
        NrOfDigits++;
        x/=10;
    }
    return NrOfDigits;
}
