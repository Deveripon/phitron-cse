#include <stdio.h>

int main(){

    int x = 10;
    // print the value of x
    printf("Value of x: %d\n", x);


    // print the address of x
    printf("Address of x: %p\n", &x); 


    // store the address of x in pointer variable ptr
    int *ptr = &x;

    // print the value of ptr
    printf("Value of ptr (Address of x): %p\n", ptr);

    // print the address of ptr
    printf("Address of ptr: %p\n", &ptr);


    // dereference the pointer ptr to get the value of x

    printf("Dereferenced value of ptr: %d\n", *ptr);

    *ptr = 100; // changing the value of x using pointer

    printf("Dereferenced value of ptr: %d\n", *ptr);

    return 0;
}