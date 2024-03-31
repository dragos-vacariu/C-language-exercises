#include <stdio.h>
#include <stdlib.h>

int PowersOfTwo(int number);
void ToBinaryConverter(int number);
void ToBinaryConverterTwo(int number);

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    ToBinaryConverter(number);
    ToBinaryConverterTwo(number);
    scanf("%d");
    return 0;
}
void ToBinaryConverter(int number)
{
    int* BinaryDigits = malloc(PowersOfTwo(number)*sizeof(int));
    int i=0;
    while(number)
    {
        *(BinaryDigits+i) = number&0b1; // get the last bit of the number, and store it to array;
        number=number>>1; //throw the bit away, by shifting it to the right.
        i++; //increase the index;
    }
    i--;
    printf("Binary Value: ");
    for(;i>-1;i--) //print the array in reverse order;
    {
        printf("%d", *(BinaryDigits+i));
    }
    printf("\n");
}
void ToBinaryConverterTwo(int number)
{
    int i;
    char a[PowersOfTwo(number)];
    int index =0;
    while(number)
    {
        i=number%2; //get the reminder of division by 2;
        //Convert the reminder which can be 0 or 1, to a char;
        a[index] = (i==1? '1' : '0'); //using ternary operator;
        //Divide the number, and because it's an integer, there will be no floating point value;
        number/=2;
        index++;
    }
    index--;
    printf("Binary Value: ");
    for(;index>-1;index--)
    {
        printf("%c", a[index]);
    }
    printf("\n");
}
int PowersOfTwo(int number)
{
    int temp=1;
    int i=1;
    while(temp<number)
    {
        temp*=2;
        i++;
    }
    return i;
}
