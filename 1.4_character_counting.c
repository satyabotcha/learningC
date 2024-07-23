#include <stdio.h>

/*
Take stream of characters & count them.
*/

int main()
{
    int c; // int instead of char to store EOF value (-1)
    int total = 0;

    while ((c = getchar()) != '\n') // '\n' can be replaced with EOF (end of file)
    {
        total = total + 1;
    }

    printf("Total characters: %i", total);
    return 0;
}