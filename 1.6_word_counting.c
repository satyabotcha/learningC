#include <stdio.h>

/*
Take stream of words & count them.
*/

const int IN = 1;  // we are inside the word
const int OUT = 0; // we are outside the word

int main()
{
    int c; // int instead of char to store EOF value (-1)
    int total = 0;

    int state = OUT;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n' || c == '\t' || c == ' ') // check if there are spaces or tabs or new lines
        {
            state = OUT;
        }
        else if (state == OUT) // if the above check passes, we are inside the word & reached the end of it.
        {
            state = IN;
            total = total + 1;
        }
    }

    printf("Total words: %i", total);
    return 0;
}
