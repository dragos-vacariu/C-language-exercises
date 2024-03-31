#include <stdio.h>
#include <stdlib.h>

//Prototyping the functions:
void SplitNumberToDigits(int x, int Size, int* Digits);
void PrintDigits(int* dig, int NrOfDig);
void PrintReverseDigits(int* dig, int NrOfDig);
int ConcatenateNumber(int* dig, int NrOfDig);
int GetMultiplier(int NrOfDig);
int CheckNumberOfDigits(int x);
void CheckPolindrom(int x, int y);

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int Size=CheckNumberOfDigits(number);
    int* Digits = (int*) malloc(Size*sizeof(int));
    SplitNumberToDigits(number, Size, Digits);
    PrintReverseDigits(Digits, Size);
    PrintDigits(Digits, Size);
    int reverse_number = ConcatenateNumber(Digits, Size);
    CheckPolindrom(number, reverse_number);
    scanf("%d");
    return 0;
}
void SplitNumberToDigits(int x, int Size, int* Digits) //split user number into digits
{
    //122
    int index=0;
    while(x)
    {
        *(Digits+index)=x%10;
        x/=10;
        index++;
        if(x<10)
        {
            *(Digits+index)=x;
            x/=10; // this is equivalent to x=0;
        }
    }
}
int CheckNumberOfDigits(int x) //Get the number of digits of our number, such that we could create an perfect array
//to store each digits.
{
    int number=0;
    while(x>0)
    {
        x/=10;
        number++;
    }
    return number;
}
void PrintReverseDigits(int* dig, int NrOfDig)//function to print digits in reverse order after they're split;
{
    int i=0;
    printf("Digit array in reverse is: ");
   while(NrOfDig)
   {
       printf("%d", *(dig+i));
       i++;
       NrOfDig--;
   }
   printf("\n");
}
void PrintDigits(int* dig, int NrOfDig) //function to print digits after they're split;
{
    printf("Digit array is: ");
   while(NrOfDig)
   {
       printf("%d", *(dig+(NrOfDig-1)));
       NrOfDig--;
   }
   printf("\n");
}
int ConcatenateNumber(int* dig, int NrOfDig) //Concatenate all the digits in reverse order, obtaining the mirrored number
{
   int ConcNumber;
   int result=0;
   int i=0;
   while(NrOfDig)
   {
       ConcNumber= *(dig+i);
       ConcNumber*=GetMultiplier(NrOfDig);
       result+=ConcNumber;
       NrOfDig--;
       i++;
   }
   return result;
}
int GetMultiplier(int NrOfDig) //get multiplier such that moving LSB to MSB;
{
    int nr=1;
   while((NrOfDig-1)>0)
   {
       nr*=10;
       NrOfDig--;
   }
   return nr;
}
void CheckPolindrom(int x, int y) //Check if polindrom;
{
    if(x==y)
    {
        printf("Your number is polindrom: %d == %d\n", x, y);
    }
    else
    {
        printf("Your number is not a polindrom: %d != %d\n", x,y);
    }
}
