#include <stdio.h>

/*
Write a function that returns the first matching character in string b with string a, return -1 if no match found.
*/

const int MAX_SIZE = 100;

int any(char a[], char b[]);

int main()
{
    char a[MAX_SIZE] = "brocolli";
    char b[MAX_SIZE] = "mango";
    int result = any(a, b);
    // ternery operator to conditionally print depending on the result
    // result = -1 -> no match
    // result >= 0 -> match
    result >= 0 ? printf("First matching character: %c\n", a[result]) : printf("No Match");
    return 0;
}

int any(char a[], char b[])
{
    printf("Given string: %s\n", a);
    printf("Reference string: %s\n", b);

    int z = 0; // index of matched char in string a

    for (int i = 0; a[i] != '\0'; i++)
    {

        for (int j = 0; b[j] != '\0'; j++)
        {
            if (a[i] == b[j])
            {
                z = i;
                return z; // no need to loop further, return z
            }
        }
    }

    return -1;
}
