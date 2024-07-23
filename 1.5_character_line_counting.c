#include <stdio.h>

/*
Take stream of characters & count lines among them.
*/

int main()
{
    int c; // int instead of char to store EOF value (-1)
    int total = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n')
        {
            total = total + 1;
        }
    }

    printf("Total new lines: %i", total);
    return 0;
}