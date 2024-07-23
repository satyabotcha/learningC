#include <stdio.h>

int isOdd(int num);

/*
Bitwise operations:

set the bits you want to change to 1, the rest to 0.

&& operation will only give us the mask (or 1) if both number & mask are the same (i.e. odd number), or else 0 (i.e. even).

    0000 0010 -> any number (2 for example)
 && 0000 0001 -> mask
    ---------
    0000 0000 -> not odd
    ---------
*/

int main()
{
    int number = 12;
    int result = isOdd(number);
    // result = 1 -> odd
    // result = 0 -> event
    result ? printf("%i is odd.", number) : printf("%i is even.", number);
    return 0;
}

int isOdd(int num)
{
    return num & 1; // 1 gets converted to binary -> can also be written as 00000001
}