#include <stdio.h>

/*
Pointer arthmetic increments the pointer variable memory address by given number.
if pointer + 1 on integer, the pointer will move 4 bytes, to the next memory address.
*/

int main()
{
    int a = 1024;
    int *pointer = &a;
    printf("Value at address pointer: %i\n", *pointer);           //1024
    printf("Address of variable a %p\n", pointer);                // 200
    printf("Address of variable A + 1: %p\n", pointer + 1);       // 204 -> +1 increments the address to next byte
    printf("Value at address pointer + 1: %i\n", *(pointer + 1)); // garbage value
    return 0;
}