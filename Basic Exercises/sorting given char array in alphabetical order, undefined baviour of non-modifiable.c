#include <stdio.h>
#include <string.h>

void SortLettersInString(char A[]);
int getSizeOfString(char A[]);

int main()
{
    char str[]="sbcdhiksjaghgfhsghjawyeqsadfsazxx";
    //This is perfectly fine. My string is stored in a variable which is not a constant, so it can be easily modified.
    SortLettersInString(str);
    //THIS CRASHES THE PROGRAM
    //SortLettersInString("AAACBSVSFSA"); //in some compilers this wouldn't even compiler because it equivalently
    //to passing a constant to a function which is designed to modify it. This string is not modifiable it's
    //just like trying to say 2=1; which of course it's an error. It's undefined behaviour passing the unmodifiable
    //literal directly to the function. The function tries to modify something which shouldn't be modified.

    /*ANOTHER EXAMPLE OF THIS PROBLEM:
        void changeToTwo(int* x)
        {
            *x = 2;
        }
          changeToTwo(&1); // will not compile
          int one = 1;
          changeToTwo(&one); // will compile and work fine
    */

    scanf("%d");
    return 0;
}

void SortLettersInString(char A[])
{
    int sizeOfA = getSizeOfString(A);
    int i,j;
    for(i=0;i<sizeOfA;i++)
    {
        for(j=0;j<sizeOfA;j++)
        {
            if(A[i]<A[j])
            {
                //INTERCHANGING THE VALUES WITHOUT AUXILIARITY
                A[i]=A[i]^A[j];
                A[j]=A[i]^A[j];
                A[i]=A[i]^A[j];
            }
        }
    }
    //PRINT THE SORTED STRING:
    printf("Sorted string: %s\n", A);
}

int getSizeOfString(char A[])
{
    int i=0;
    while(A[i]!='\0')
    {
        i++;
    }
    return i;
}
