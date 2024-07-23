#include <stdio.h>

// Swap two variables using pointers

/*
Since functions run on a stack frame, we must pass the address of the variable to the called function.
This is also known as call by reference. We are reference the variable address
*/
void swap(int *a, int *b);

int main()
{
    int a = 10;
    int b = 20;
    printf("Before Swapping, A: %i B: %i\n", a, b);
    swap(&a, &b);
    printf("After Swapping, A: %i B: %i\n", a, b);

    return 0;
}

void swap(int *a, int *b) // local variables a & b are created holding the memory address of &a and &b from main.
{
    int temp = *b; // temporialy store the variable
    *b = *a;       // allocate value of a to b
    *a = temp;     // allocate value of b to a
}
