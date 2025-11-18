#include <stdio.h>

void passByValue(int a){
    a = 20;
    printf("address of a: %p\n", &a);
    printf("Inside passByValue function: %d\n", a);
}
int main(){

    int x = 10;
    
    printf("address of x: %p\n", &x);
    passByValue(x);
    printf("Value of x after passByValue function: %d\n", x);
    return 0;
}