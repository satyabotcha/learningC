#include <stdio.h>

/*
Remove each character in string a that matches in string b
*/

#define MATCH 1
#define NO_MATCH 0

const int MAX_SIZE = 100;

void squeeze(char a[], char b[]);

int main()
{
    char a[MAX_SIZE] = "brocolli";
    char b[MAX_SIZE] = "mango";
    squeeze(a, b);
    return 0;
}

void squeeze(char a[], char b[])
{
    printf("Given string: %s\n", a);
    printf("Reference string: %s\n", b);
    int z = 0; // index for our new squeezed string
    for (int i = 0; a[i] != '\0'; i++)
    {
        int flag = NO_MATCH; // set flag value to know if we should add value in string a

        for (int j = 0; b[j] != '\0'; j++)
        {
            if (a[i] == b[j])
            {
                flag = MATCH; // character found in sting a that matches in string b
                break;        // no need to loop further, break out and proceed to next character
            }
        }

        if (!flag)
        {
            a[z] = a[i];
            z++;
        }
    }
    a[z] = '\0';

    printf("Squeezed string: %s\n", a);
}
