#include <stdio.h>

/*
Pointers: a variable that stores the memory address of another variable
We declare a pointer using: * (operator)
We assign a value to pointer using: & (operator) + variable name
We de-reference, or going to the value of memory address of pointer variable, by using: * (operator)
*/

/*
Why declare type of the pointer? Example: int *pointer.
We need to tell the complier how many bytes to read.

For example, if we point to integer varaible and declare a pointer with char type, the complier will only look
at one byte (char is 1 byte).

Hence, int a = 1024; 00000000 00000000 00000100 00000000
char *pointer = &a
printing *pointer will give 0! -> we are only dereferencing one byte
*/

int main()
{
    int a = 10;                                                   // complier allocates 4 bytes of memory & writes number 10
    int *pointer = &a;                                            // pointer variable storing the address of variable a
    printf("Initial Value at a through pointer: %i\n", *pointer); // 10
    printf("Address of variable a: %p\n", pointer);               // address of a
    printf("Address of variable a: %p\n", &pointer);              // address of pointer variable
    *pointer = 51;                                                // de-referncing value at a & changing its contents
    printf("Final Value at a through pointer: %i\n", *pointer);   // 51
    return 0;
}