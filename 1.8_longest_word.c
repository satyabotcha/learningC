#include <stdio.h>

/*
Count the largest line in given input
*/

const int MAX_LINE = 1000; // maximum size of the array

int lineInput(char line[], int maxLine);
void copy(char from[], char to[]);

int main()
{
    int len;                // keeps track of string length
    int max;                // current max length so far
    char line[MAX_LINE];    // current input line
    char longest[MAX_LINE]; // longest line seen so far

    max = 0;
    while ((len = lineInput(line, MAX_LINE)) > 0)
    {
        if (len > max) // current input is greater than max input line
        {
            max = len;
            copy(line, longest); // copy from line array to longest array
        }
    }
    if (max > 0)
    {
        printf("%s", longest);
    }
    return 0;
}

// take input line, return its length
int lineInput(char line[], int maxLine)
{
    int c, i;

    for (i = 0; i < maxLine - 1 && (c = getchar()) != EOF && c != '\n'; i++)
    {
        line[i] = c;
    }
    if (c == '\n')
    {
        line[i] = c;
        i++;
    }
    line[i] = '\0';
    return i;
}

void copy(char from[], char to[])
{
    int i = 0;
    while (from[i] != '\0') // keep looping till we see NUL character
    {
        to[i] = from[i];
        i++;
    }
}
