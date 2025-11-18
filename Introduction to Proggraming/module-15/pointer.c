#include <stdio.h>

int main(){

    int x = 10;
    printf("%d\n", x);
    
    // print the address of x
    printf("%p\n", &x);
    // create a pointer variable ptr that stores the address of x
    int *ptr = &x;
    // print the value of ptr
    printf("%p \n", ptr);

    // print the address of ptr
    printf("%p\n", &ptr);



    return 0;
}