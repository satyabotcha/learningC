#include <stdio.h>

/*
Given a string pattern, search if the pattern exists within in a string
*/

const int MAX_LENGTH = 1000;

int stringSearch(char word[], char pattern[], int patternLen);

int main()
{
    char word[MAX_LENGTH] = "Dan loves pigs";
    char pattern[] = "pigs";

    int result = stringSearch(word, pattern, sizeof(pattern) / sizeof(pattern[0]));
    printf(result ? "Pattern exists" : "No pattern");
    return 0;
}

int stringSearch(char word[], char pattern[], int patternLen)
{
    int i = 0;
    int j = 0;
    int match = 0;
    patternLen = patternLen - 1;

    while (word[i] != '\0' && patternLen != j)
    {
        if (word[i] == pattern[j])
        {
            match = 1;
            if (match)
            {
                j++;
            }
        }
        else
        {
            match = 0;
            j = 0;
        }
        i++;
    }

    return (patternLen == j) ? 1 : 0;
}
