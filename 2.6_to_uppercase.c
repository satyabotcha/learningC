#include <stdio.h>

/*
Given a string, convert it to uppercase using Bitwise operators. Leave unchanged if already uppercase.
*/

void *toUppercase(char word[], int len);

int main()
{
    char word[] = "hello";
    toUppercase(word, sizeof(word) / sizeof(word[0]));
    return 0;
}

/*      01100000 -> lowercase char 
&       01011111 -> mask
        --------
        01000000 -> uppercase char
*/

void *toUppercase(char word[], int len)
{
    int i = 0;
    char result[len]; // create new array as to not mutate the original array

    while (word[i] != '\0')
    {
        result[i] = word[i] & 0b01011111;
        i++;
    }
    result[i] = '\0';
    printf("%s", result);
}
