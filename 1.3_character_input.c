#include <stdio.h>

/*
Take character input from user & print on screen
*/

int main()
{
    int c; // int instead of char to store EOF value (-1)
    while ((c = getchar()) != EOF)
    { // EOF = end of file
        putchar(c);
    }
    return 0;
}