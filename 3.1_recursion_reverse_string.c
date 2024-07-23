#include <stdio.h>

/*
reverse a string using recursion
*/

void recursiveReverseString(char word[]);

int main()
{
    char word[] = "hello";
    printf("Input: %s\n", word);
    printf("Output: ");
    recursiveReverseString(word);
    return 0;
}

void recursiveReverseString(char word[])
{
    if (word[0]) // base case: check if character is not null
    {
        recursiveReverseString(word + 1); // recursive call
        printf("%c", word[0]);
    }
}
