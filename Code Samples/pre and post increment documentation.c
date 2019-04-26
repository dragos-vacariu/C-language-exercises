#include <stdio.h>

int main()
{
    /*
    DIFFERENCE BETWEEN PRE-INCREMENTATION AND POST-INCREMENTATION:
    int j = i++; // j will contain i, i will be incremented.
    int j = ++i; // i will be incremented, and j will contain the incremented i.

    i++ makes a copy, increases i, and returns the copy (old value).
    ++i increases i, and returns i.

    Sometimes ++i will be the faster than i++ since it doesn't make a copy.

    BEHIND THE SCENES:
     ++i
    function pre_increment(i) {
        i += 1;
        return i;
    }
        i++
    function post_increment(i) {
        copy = i;
        i += 1;
        return copy;
    }
     6 down vote

    COMPILING DIFFERENCES:
    In Pre-Increment the initial value is first incremented and then used inside the expression.
    In Post-Increment value is first used in a expression and then incremented.

    Pre-Increment is working from left to right first incrementing and then passing the values
    Post-Increment is working from right to left first pass value and then incrementing
    */
    int i=2;
    printf("Original: %d\n", i);
    printf("Pre-Incrementation: %d\n", ++i); //i is incremented before being passed to printf so the value 4 is output
    printf("Post-Incrementation: %d\n", i++); //i is incremented before being passed to printf so the value 4 is output
    printf("Double Pre-Incrementation: %d, %d\n", ++i, ++i); //increasing i => i=5 and then increasing i again => i=6,
    //and then print the value of i, twice (using the value).
    printf("Double Post-Incrementation: %d, %d\n", i++, i++); // this works from right to left so first pass the value of
    //i to the second parameter of printf, and then increment the value, and then pass the value to the first parameter
    //of printf, and then increment the value again, so now i is 8 but we get printed only 6 (before any incrementation)
    //and 7 (before first incrementation)
    printf("Value after last incrementation: %d\n", i); // so now we see that the value of i is 8.
    scanf("%d");
    return 0;
}
