#include <stdio.h>

int main () {
    int a = 9;
    int b = 5;
    printf("Before: a = %d,   b = %d\n", a, b);
    a ^= b; // store in a XOR between a and b (what is in a and b but not in both)
    b ^= a; // store in b XOR between a and b (what is in a and b but not in both)
    a ^= b; // store in a XOR between a and b (what is in a and b but not in both)
    printf("After first: a = %d,   b = %d \n", a, b);
    a = 9, b = 5;
    b = a^b; // equivalent to: b = b^a or b ^= a;
    a = a^b; // equivalent to: a = b^a or a ^= b;
    b = a^b; // equivalent to: b = b^a or b ^= a;
    printf("After second: a = %d,   b = %d", a, b);
    scanf("%d");
    return 0;
}
