#include<stdio.h>
/*
Bit field declarations SINTHAX:
struct {
   type [member_name] : width ;
};
The following table describes the variable elements of a bit field
Elements 	Description
type 	An integer type that determines how a bit-field's value is interpreted. The type may be int, signed int,
or unsigned int.
member_name 	The name of the bit-field.
width 	The number of bits in the bit-field. The width must be less than or equal to the bit width of the specified
type.
*/
int main()
{
    //Using bit-field operator to create a 4bit char;
    struct a
    {
        int category:3; // a 3bit integer
        int scheme:4; // a 4bit char;
    };
    struct b
    {
        int category; // a 3bit integer
        int scheme; // a 4bit char;
    };
    /*
    Bit field can not be used for floating values it can be used with => signed int ,unsigned int and char
    Also bit fields can be used ONLY inside a struct.
    the meaning of "char scheme:4;"
    is only 4-bit are reserved for "scheme" not 4-byte(people always make that confusion) here is one example
    [1][1][1][1][1][1][1][1] -->8-bit field for char
    but for char scheme:4;
    the first 4 are not reserved and the last 4 will be reserved for "scheme".
    like this (assume 0 for unreserved and 1 for reserved)
    [0][0][0][0][1][1][1][1]
    */
    struct a MyStruct;
    struct b MyStr2;
    //THIS IS NOT VALID BECAUSE 32 CANNOT BE WRITTEN ON THE AVAILABLE 3 BITS:
    MyStruct.category = 32; //the value for this will be 0;
    printf("Difference between struct a and b:\nSize of a=%d\nSize of b=%d\n\n", sizeof(MyStruct), sizeof(MyStr2));
    /*Difference between struct a and b: is that a occupies only 4 bytes of memory for 2 ints and even if we'd store
    other 6 ints the struct size will still be 4 bytes because the struct will use the bits in the same integer
    reserving them to the other fields.
    On the other had the struct b is a normal struct which uses 4bytes for each int. While the struct a uses only a
    custom set of bits for the ints inside it.s*/
    printf("Value of category=%d\n", MyStruct.category);
    //IMPORTANT: sizeof() cannot be applied to a bit field.
    scanf("%d");
    return 0;
}
/*
DOCUMENTATION:
This structure requires 8 bytes of memory space but in actual, we are going to store either 0 or 1 in each of the
variables. The C programming language offers a better way to utilize the memory space in such situations.
If you are using such variables inside a structure then you can define the width of a variable which tells the C
compiler that you are going to use only those number of bytes. Example:
struct {
   unsigned int widthValidated : 1;
   unsigned int heightValidated : 1;
} status;
The above structure requires 4 bytes of memory space for status variable, but only 2 bits will be used to store the values.
If you will use up to 32 variables each one with a width of 1 bit, then also the status structure will use 4 bytes. However
as soon as you have 33 variables, it will allocate the next slot of the memory and it will start using 8 bytes.
*/
