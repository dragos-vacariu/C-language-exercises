#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ConvertToRomansOne(int x);
void ConvertToRomansTwo(int x);
void ConvertToRomansThree(int x);
void ConvertToRomansFour(int x);
int GetNumberOfDigits(int x);

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    if(number>4999)
    {
        printf("This number is out of range! Romans have never used numbers that large.\n");
    }
    while(number>4999)
    {
       scanf("%d", &number);
       fflush(stdin);
    }
    ConvertToRomansOne(number);
    ConvertToRomansTwo(number);
    ConvertToRomansThree(number);
    ConvertToRomansFour(number);
    scanf("%d");
    return 0;
}
void ConvertToRomansOne(int x)
{
    //Defining a struct
    struct RomanNumbers{
    int Value;
    char * RomanChar;
};
    //Declaring a struct;
    struct RomanNumbers m[]= {
        {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "LC"}, {50, "L"},
        {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"} };

    int i=0; //using this a counter to access the array RomanNumbers;

    //This kind of arrays needs requires space allocation.
    char* RomanLetters = (char*) malloc(20*sizeof(char));
    //Initializing the string:
    strcpy(RomanLetters,"");

    while (x) //while x>0
    {
        if(x >= m[i].Value) //if first value smaller than x is found;
        {
            strcat(RomanLetters, m[i].RomanChar); //put the letter corresponding to it in my string
            x-=m[i].Value; // subtract the value for that letter from my number;
        }
        else //this is important
        {
            i++; //let x compare another value from the array only if the current value is bigger than x.
        }
    }
    printf("%s\n", RomanLetters); //print the result;
}
void ConvertToRomansTwo(int x)
{
    char* RomanLetters = (char*) malloc(20*sizeof(char)); //big enough to store a value within 5000;
    //Initializing the string:
    strcpy(RomanLetters,"");
    while(x) //while x>0
    {
        if(x>=1000) //is x>=1000
        {
            strcat(RomanLetters, "M"); //add M to my string
            x-=1000; //subtract the value for M (which is 1000) from my x, and then roll the loop again.
        }
        //Do the same for those.
        else if(x>=900)
        {
            strcat(RomanLetters, "CM");
            x-=900;
        }
        else if(x>=500)
        {
            strcat(RomanLetters, "D");
            x-=500;
        }
        else if(x>=400)
        {
            strcat(RomanLetters, "CD");
            x-=400;
        }
        else if(x>=100)
        {
            strcat(RomanLetters, "C");
            x-=100;
        }
        else if(x>=90)
        {
            strcat(RomanLetters, "LC");
            x-=90;
        }
        else if(x>=50)
        {
            strcat(RomanLetters, "L");
            x-=50;
        }
        else if(x>=40)
        {
            strcat(RomanLetters, "XL");
            x-=40;
        }
        else if(x>=10)
        {
            strcat(RomanLetters, "X");
            x-=10;
        }
        else if(x>=9)
        {
            strcat(RomanLetters, "IX");
            x-=9;
        }
        else if(x>=5)
        {
            strcat(RomanLetters, "V");
            x-=5;
        }
        else if(x>=4)
        {
            strcat(RomanLetters, "IV");
            x-=4;
        }
        else if(x>=1)
        {
            strcat(RomanLetters, "I");
            x-=1;
        }
    }
    printf("%s\n", RomanLetters);//printing the result;
}
void ConvertToRomansThree(int x)
{
    int nofDig=GetNumberOfDigits(x); //get the number of digits that x has.
    //Create an array of that size, so that we could store each digit composing the number
    int *Digits = (int*) malloc(nofDig*sizeof(int));
    int i=0; //let this be my counter;
    while(x)
    {
        *(Digits+i)=x%10; //separate x into digits
        x/=10;
        i++;
    }
    char* RomanLetters = (char*) malloc(20*sizeof(char)); //big enough to store a value within 5000;
    //Initializing the string:
    strcpy(RomanLetters,"");
    i=nofDig-1; // because each array start from 0 index.
    while(nofDig)
    {
        if(nofDig==4)
        {
            do{
            strcat(RomanLetters, "M");
            *(Digits+i)-=1;
            }while(*(Digits+i)>0);
            nofDig--;
            i--;
        }
        else if(nofDig==3)
        {
            do{
                if(*(Digits+i)==9)
                {
                    strcat(RomanLetters, "CM");
                    *(Digits+i)-=9;
                }
                else if(*(Digits+i)>=5)
                {
                    strcat(RomanLetters, "D");
                    *(Digits+i)-=5;
                }
                else if(*(Digits+i)==4)
                {
                    strcat(RomanLetters, "CD");
                    *(Digits+i)-=4;
                }
                else
                {
                    strcat(RomanLetters, "C");
                    *(Digits+i)-=1;
                }
            }while(*(Digits+i)>0);
            nofDig--;
            i--;
        }
        else if(nofDig==2)
        {
            do{
                if(*(Digits+i)==9)
                {
                    strcat(RomanLetters, "LC");
                    *(Digits+i)-=9;
                }
                else if(*(Digits+i)>=5)
                {
                    strcat(RomanLetters, "L");
                    *(Digits+i)-=5;
                }
                else if(*(Digits+i)==4)
                {
                    strcat(RomanLetters, "XL");
                    *(Digits+i)-=4;
                }
                else
                {
                    strcat(RomanLetters, "X");
                    *(Digits+i)-=1;
                }
            }while(*(Digits+i)>0);
            nofDig--;
            i--;
        }
        else
        {
            do{
                if(*(Digits+i)==9)
                {
                    strcat(RomanLetters, "IX");
                    *(Digits+i)-=9;
                }
                else if(*(Digits+i)>=5)
                {
                    strcat(RomanLetters, "V");
                    *(Digits+i)-=5;
                }
                else if(*(Digits+i)==4)
                {
                    strcat(RomanLetters, "IV");
                    *(Digits+i)-=4;
                }
                else
                {
                    strcat(RomanLetters, "I");
                    *(Digits+i)-=1;
                }
            }while(*(Digits+i)>0);
            nofDig--;
            i--;
        }
    }
    printf("%s\n", RomanLetters);
}
void ConvertToRomansFour(int x)
{
    int* Romans = malloc(GetNumberOfDigits(x)*sizeof(int)) ;
    struct RomanNumbers{
        int Value;
        char * RomanChar;
    };
    struct RomanNumbers m[]= {
    {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"}, {90, "LC"}, {50, "L"},
    {40, "XL"}, {10, "X"}, {9, "IX"}, {5, "V"}, {4, "IV"}, {1, "I"} };
    int i=0; //index for Romans array;
    int multiplier=1; //starting from units;
    while (x)
    {
        *(Romans+i) = (x%10)*multiplier; //getting the last digit (rightest digit) of the x
        x*=0.1; //multiplying to this value the digit that has been taken will disappear, and the dozens will be units
        //thousands will become hundreds...
        multiplier*=10; // raising up to dozens hundreds and thousands
        i++; //increase the index for Romans array.
    }
    i--;
    multiplier*=0.1;
    int j=i;
    i=0; //index for Romans array
    for(;j>-1;j--)
    {
        while(*(Romans+j)) //while number>0
        {
            if(*(Romans+j)>=m[i].Value)
            {
                printf("%s", m[i].RomanChar);
                *(Romans+j)-=m[i].Value;
            }
            else
            {
                i++;
            }
        }
    }
    printf("\n");
}
int GetNumberOfDigits(int x) //count the number of digits in given number
{
    int numberOfDigits=0;
    while(x)
    {
        x/=10;
        numberOfDigits++;
    }
    return numberOfDigits;
}
