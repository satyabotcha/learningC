#include <stdio.h>

/*
We can store the memory address of another pointer by using * followed by & of the pointer
int **a = &pointer;
int ***b = &b;

A simply way to think. The *** operator implies the number to pointers we have to dereference
to reach our orginal variable.
*/

int main()
{
    int x = 10;
    int *a = &x;                           // pointer to x
    int **b = &a;                          // pointer to b
    int ***c = &b;                         // pointer to b
    printf("Orginal value at x: %i\n", x); //10
    ***c = 91;
    printf("Chainging value of x through c pointer: %i\n", x); // 91
    return 0;
}