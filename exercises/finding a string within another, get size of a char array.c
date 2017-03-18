#include <stdio.h>

int FindBinA(char A[], char B[]);
int getSizeOfString(char array[]);

int main()
{
    int result;
    result=FindBinA("I was here long time ago!", "was");
    if(result<0) //the only case when FindAinB returns -1 is when the string B could not be found in string A
    {
        printf("The string could not be found!\n");
    }
    else
    {
        printf("Found at index: %d\n", result);
    }
    result=FindBinA("I was here long time ago!", "goa");
    if(result<0)
    {
        printf("The string could not be found!\n");
    }
    else
    {
        printf("Found at index: %d\n", result);
    }
    scanf("%d");
    return 0;
}
int FindBinA(char A[], char B[])
{
    int sizeOfA = getSizeOfString(A); //get size for string A
    int sizeOfB = getSizeOfString(B); //get size of string B
    int i,j,p;
    for(i=0;i<sizeOfA;i++) //iterate through the whole string A
    {
        p=i; //p will be used once that the value at current index is equals to the first element of B,
        //if so it will enter the while loop where both indexes p and j will be increased one at time, such that
        //it will verify until either one of the strings reach their end, or the character of A at a certain index does
        //not match to the character of B at a certain index.
        j=0;
        while(A[p]==B[j])
        {
            if(j==sizeOfB-1)
            {
                return i;
            }
            else if(p==sizeOfA-1)
            {
                return -1;
            }
            //THESE TWO INCREMETATIONS NEEDS TO BE DONE AFTER THE CHECKS ABOVE:
            p++;
            j++;
        }
    }
    return -1;
}
int getSizeOfString(char array[])
{
    int i=0;
    while(array[i]!='\0') //each string is null terminated, so while not finding the termination count...
    {
        i++;
    }
    return i; // return the number;
}
