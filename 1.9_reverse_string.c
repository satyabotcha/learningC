#include <stdio.h>

/*
Reverse a given word 
*/

const int MAX_LENGTH = 1000; // array size limit

void reverseString(char from[], char to[], int len);

int main()
{
    int c;
    int i; // word length counter
    char word[MAX_LENGTH];
    char result[MAX_LENGTH];

    for (i = 0; i < MAX_LENGTH - 1 && (c = getchar()) != '\n'; i++)
    {
        word[i] = c;
    }
    if (c == '\n')
    {
        word[i] = '\0';
        i++;
    }

    reverseString(word, result, i);

    printf("Entered word: %s\n", word);
    printf("Reversed word: %s\n", result);

    return 0;
}

void reverseString(char from[], char to[], int len)
{
    int i = 0;
    int end = len - 2; // avoid NUL character when copying as printf terminates printing seeing NUL
    for (; end >= 0; i++)
    {
        to[i] = from[end];
        end--;
    };
    to[i] = '\0'; // end the reversed word with NUL character
}
