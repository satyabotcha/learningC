#include <stdio.h>

/*
write a recursive function that takes input from the user and returns factorial of it.
*/

int factorial(int num);

int main()
{
    int number;
    printf("Type any number: ");
    scanf("%i", &number);
    printf("%i factorial is: %i", number, factorial(number));
    return 0;
}

/*
Recursion: a function that calls itself till a condition is met. It works by using function call stack.

Example: 3!

main calls -> factorial(3) -> factorial(2) -> factorial(1)
                3          *  2             *  1 (base case)    = 6
                
*/

int factorial(int num)
{
    if (num <= 1) // base case
    {
        return 1;
    }
    return (num * factorial(num - 1)); // recursive case
}