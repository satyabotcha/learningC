#include <stdio.h>
#include <math.h>

/*
Calculate data ranges (both signed & unsigned) for each C primitive type
*/

#define BYTE 8       // 1 bytes = 8 bits
#define POSITIVE '0' // positive flag
#define NEGATIVE '1' // negative flag

int unsignedRange(int size)
{
    return (int)pow(2, (size * BYTE)) - 1; // type cast return from float to int
}

int signedRange(int size, char flag)
{
    if (flag == NEGATIVE)
    {
        return -1 * (int)pow(2, (size * (BYTE - 1)));
    }
    return (int)pow(2, (size * (BYTE - 1))) - 1; // 0 comes under as positive number -> hence subtract 1 from the result
}

int main()
{
    int charSize = sizeof(char);
    int intSize = sizeof(int);
    int shortIntSize = sizeof(short int);
    int longIntSize = sizeof(long int);
    int floatSize = sizeof(float);
    int doubleSize = sizeof(double);

    printf("Unsigned Char Size: %i to %i\n", 0, unsignedRange(charSize));
    printf("Signed Char Size: %i to %i\n", signedRange(charSize, NEGATIVE), signedRange(charSize, POSITIVE));
    printf("Unsigned Short Int Size: %i to %i\n", 0, unsignedRange(shortIntSize));
    printf("Signed Short Int Size: %i to %i\n", signedRange(shortIntSize, NEGATIVE), signedRange(shortIntSize, POSITIVE));
    printf("Unsigned Int Size: %i to %i\n", 0, unsignedRange(intSize));
    printf("Signed Int Size: %i to %i\n", signedRange(intSize, NEGATIVE), signedRange(intSize, POSITIVE));
    printf("Unsigned Long Int Size: %i to %i\n", 0, unsignedRange(longIntSize));
    printf("Signed Long Int Size: %i to %i\n", signedRange(longIntSize, NEGATIVE), signedRange(longIntSize, POSITIVE));
    printf("Unsigned Float Size: %i to %i\n", 0, unsignedRange(floatSize));
    printf("Signed Float Size: %i to %i\n", signedRange(floatSize, NEGATIVE), signedRange(floatSize, POSITIVE));
    printf("Unsigned Double Size: %i to %i\n", 0, unsignedRange(doubleSize));
    printf("Signed Double Size: %i to %i\n", signedRange(doubleSize, NEGATIVE), signedRange(doubleSize, POSITIVE));

    return 0;
}