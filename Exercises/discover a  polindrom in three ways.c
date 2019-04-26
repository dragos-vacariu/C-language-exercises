#include <stdio.h>
#include <stdlib.h>

int CheckPolindromOne(int xNum);
int CheckPolindromTwo(int xNum);
int CheckPolindromThree(int xNum, int NrOfDigits, int result);
int GetPowOfTwo(int order);
//STATIC CANNOT BE USED FOR FUNCTION PARAMETERS
int GetNrOfDigits(int xNum);

int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    //Testing the first function:
    int rev_num = CheckPolindromOne(number);
    if(number==rev_num)
    {
        printf("%d==%d => Polindrom\n", number, rev_num);
    }
    else
    {
        printf("%d!=%d => Not a polindrom\n", number, rev_num);
    }
    //Checking the second function:
    rev_num = CheckPolindromTwo(number);
    if(number==rev_num)
    {
        printf("%d==%d => Polindrom\n", number, rev_num);
    }
    else
    {
        printf("%d!=%d => Not a polindrom\n", number, rev_num);
    }
    //Checking the third functions:
    rev_num=0;
    rev_num=CheckPolindromThree(number, GetNrOfDigits(number), rev_num);
    if(number==rev_num)
    {
        printf("%d==%d => Polindrom\n", number, rev_num);
    }
    else
    {
        printf("%d!=%d => Not a polindrom\n", number, rev_num);
    }
    scanf("%d");
    return 0;
}

int CheckPolindromOne(int xNum)
{
    int temp=xNum;
    int factor=1;
    int result=0;
    while(temp>10)
    {
        temp=temp/10;
        factor*=10; // get a multiplication factor such that turning LSB into MSB
        //(units into dozens hundred or thousands);
    }
    while(xNum)
    {
        temp=xNum%10; // get the LSB;
        xNum/=10; // divide number such that dozens go to units, and units go to decimals, and because
        //this is an integer, decimal part will get lost, you don't need to worry about it.
        temp*=factor; //once the last digit has been taken turn it from LSB to MSB;
        factor/=10; // make sure you reduce the factor by ten, because we made our MSB
        result+=temp;// put that value into result;
    }
    return result;
}
int CheckPolindromTwo(int xNum)
{
    int temp = xNum;
    int factor = 1;
    int result = 0;
    while(temp>10)
    {
        temp=temp/10;
        factor*=10; // get a multiplication factor such that turning LSB into MSB
        //(units into dozens hundred or thousands);
    }
    temp = xNum;
    int TempFactor = 1;
    float xFactor = 1/(float)factor;
    while(xNum)
    {
        xFactor=1/(float)factor; //got our factor (thousands, dozens, hundreds whatever), now we can create a factor
        //such that multiplied to our number it will leave us with only one digit;
        temp = xNum*xFactor; //temp will have the MSB digit.
        xNum -= temp*factor; //delete from our number MSB digit * factor (which is the dozen thousand hundred.. whatever)
        temp *= TempFactor; //let the MSB digit be multiplied with a temporary factor that start from 1 and ends up with
        //having the value of (hundreds thousands dozens depending how large the number was)...
        factor /= 10; //divide factor such that xFactor gets larger;
        TempFactor *= 10; //increase temporary factor such that next digit will be shifted 1 position to the left
        result += temp; //add that value tot the result
    }
    return result;
}
//USING RECURSION:
int CheckPolindromThree(int xNum, int NrOfDigits, int result) //using recursion
{
    //122
    int digit=0;
    static int multiplier = 1; //this will only be initialized once, because it's static.
    if(xNum) //if xNum!=0;
    {
        digit+=xNum*(1.0/NrOfDigits); // let the digit take the MSB
        result += digit*multiplier; // multiply the digit with a value starting from 1, up to (dozens thousands etc...)
        //such that MSB of number will be LSB of the result and LSB of the number will be MSB of the result.
        multiplier *= 10; //increase that multiplier by 10
        result=CheckPolindromThree(xNum-(digit*NrOfDigits), NrOfDigits*0.1, result); //call this function again with
        //current values;
    }
    return result;
}
int GetNrOfDigits(int xNum)
{
    int nrOfDigits = 1;
    while(xNum>10)
    {
        xNum=xNum/10;
        nrOfDigits*=10;
    }
    return nrOfDigits;
}
