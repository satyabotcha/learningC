#include <stdio.h>

/*
Find all lines matching the pattern string, return its first string index
*/

const int MAX_LINE = 1000; // maximum size of the array

int lineInput(char line[], int maxLine);
int strindex(char word[], char pattern[]);

int main()
{
    char line[MAX_LINE];     // current input line
    char pattern[] = "ould"; // pattern to search for
    int found = 0;

    while (lineInput(line, MAX_LINE) > 0)
    {
        if (strindex(line, pattern) >= 0) // pattern matched
        {
            printf("%s", line);
            found++;
        }
    }
    return found;
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

// get the first matched string index in line
int strindex(char line[], char pattern[])
{
    /*
    LINE -> "hello, world"
    PATTERN -> "orl"

    Outer loop will loop from first character of line, checking if its not NUL character (a.k.a end of string).

    Inner loop will match first character of word from line, with that of pattern string.
    If first characters of word & pattern string match, we compare their next characters.

    The inner loops breaks once the characters of word & string mismatch.

    We check if the variable K is greater than 0 (some characters matched) and pattern[k] == '\0', meaning string terminated.

    If yes, we return the index. Else, -1/
    */

    int i, j, k;
    for (i = 0; line[i] != '\0'; i++)
    {
        // check characters in line one by one by comparing it to pattern
        for (j = i, k = 0; pattern[k] != '\0' && line[j] == pattern[k]; j++, k++)
        {
        }
        // if pattern match is greater than 0 & end of string -> we have matched the entire pattern
        if (k > 0 && pattern[k] == '\0')
        {
            return i;
        }
    }
    return -1;
}
