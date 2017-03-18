#include<stdio.h>

int main()
{
    //Union is like an array that allocated memory required for the largest data type that it need to stores
    //in out case below, that type is int, so it will allocate 4 bytes.
    //first step it will use the 4 bytes of data for the char ch[2], because that is initialized first
    //so those 32 bits (4 bytes = 32 bits) it will arrange a 2d array of type char... that means 2 bytes
    //on first byte(first array) will put value 3 so having 8 bit(1 byte = 8 bits), first array will look like this:
    //char[0] = 00 00 00 11;
    //then char[1] it will look like this: char[1] = 00 00 00 10;
    //and then the whole union will have these bits: 00 00 00 00    00 00 00 00     00 00 00 10     00 00 00 10;
    //when trying to access the int, the union will see its memory which already have these bits above set
    //the value of the int will be the value of those bits converted from binary which is exactly 515;
    union a
    {
        int i; //this is the largest data type in the union, so union size it will be 4bytes (the size of int)
        char ch[2];
    };
    union a u; // allocating 4 bytes of memory: 00 00 00 00     00 00 00 00     00 00 00 00     00 00 00 00;
    u.ch[0]=3; // in those 4 bytes of memory because this array is initialized first it will allocate the 2 byte to it
    // and then store the value of 3 for the first char in the array and the union memory will look like so:
    //00 00 00 00     00 00 00 00     00 00 00 00     00 00 00 11;
    u.ch[1]=2;//now will store on the second byte the value 2 for this array, so union memory will look like this:
    //00 00 00 00     00 00 00 00     00 00 00 10     00 00 00 11;
    printf("%d, %d, %d\n", u.ch[0], u.ch[1], u.i); //when accesing the int will look at whole memory as an int
    //and will use those bits to express the value of the int which is 515;

    /*
    Union takes memory, according the largest data types.
    u.ch[0]=3;
    u.ch[1]=2;
    Now u.i is calculated as
    (2)(3) in binary form which is equal to 515.
    (2) --> 00000010; (3) --> 00000011
    (2)(3) --> 0000001000000011 --> 515.
    */
    return 0;
}
