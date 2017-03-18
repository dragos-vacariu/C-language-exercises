#include <stdio.h>

void StaticValueInFunction();

int main()
{
    auto a; //auto is a word that will be replace to a datatype after you initialize a the value of the variable.
    //it is used when you don't really know which type you will store in that variable.
    a=22;
    printf("%d\n", a);
    printf("Size of auto a is: %d\n", sizeof(a));
    //Once the auto type is initialized with a value it will choose the right data type for the variable (in our case
    //for 22 has chosen int) so the next time you will try to store a value into it, you need to store the same type of
    //value
    a=22.3;
    printf("%d\n", a);
    register int b = 23; //the operator & cannot be used on register data types and constant types;
    //The register type modifier tells the compiler to store the variable being declared in a CPU register (if possible),
    //to optimize access.
    //Note that TIGCC will automatically store often used variables in CPU registers when the optimization is turned on,
    //but the keyword register will force storing in registers even if the optimization is turned off. However, the request
    //for storing data in registers may be denied, if the compiler concludes that there is not enough free registers for use
    //at this place.
    printf("%d\n", b);
    //Calling the function, to see the static behavior:
    StaticValueInFunction();
    StaticValueInFunction();
    StaticValueInFunction();
    scanf("%d");
    return 0;
}
void StaticValueInFunction()
{
    static int a = 1; //this static variable has local scope so usually it would die when the function terminates.
    //Using the static keyword, the compiler will let this variable allocated in the memory so it could hold on to
    //its value until the whole program ends.
    printf("The static value is: %d\n", a);
    a++;
}
