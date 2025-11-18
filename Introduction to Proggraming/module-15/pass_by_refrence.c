#include <stdio.h>

void passByReference(int *x){
    printf("address of x in fun %p\n", x);
    *x = 20;
    printf("Inside passByReference function: %d\n", *x);
}

int main(){
    int x = 10;
    printf("address of x %p\n", &x);

    passByReference(&x);
    printf("value of x after %d\n",x);
    return 0;
}