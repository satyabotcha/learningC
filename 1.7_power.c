#include <stdio.h>

/*
Implementing power (or **) function
*/

int power(int base, int exponent); // function declaration

int main()
{
    printf("Result: %i\n", power(2, 0));
    return 0;
}

int power(int base, int exponent)
{
    int result = 1;
    for (int i = 0; i < exponent; i++)
    {
        result = result * base;
    }
    return result;
}