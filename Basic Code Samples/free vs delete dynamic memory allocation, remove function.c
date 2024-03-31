#include <stdio.h>

// THERE IS NO new OPERATOR IN C, SO THERE IS NO delete() IN C AS WELL

int main()
{
    //Memory allocation using malloc/calloc
    char *ptr;
    char f[] = "D:/Something.txt";
    int i, *p;
    ptr = (char*)malloc(5*sizeof(char));
    for(i = 0; i<5; i++)
    {
        *(ptr+i) = (char)(97+i);
    }
    printf("Before: %s\n", ptr);
    free(ptr); // deallocating memory;
    printf("After: %s\n", ptr);
    //Making use of REMOVE FUNCTION
    printf("Before removal: %s\n", f);
    if(remove(f)!=0) //remove() -> function that deletes the file at the address stored in f string...
    {
        printf("Failed to delete!\n"); // if it fails to delete probably it's because there is no file to delete
        //at the mentioned address....
    }
    printf("After removal: %s\n", f); // remove() it doesn't affect the string itself.

    //Memory allocation using new operator -> ONL
    /*
        //This is VALID only in C++
        *p = new int;
        *p = 42;
        printf("%d\n", *p);
        delete(p);
        printf("%d\n", *p);
    */
    scanf("%d");
    return 0;
}
