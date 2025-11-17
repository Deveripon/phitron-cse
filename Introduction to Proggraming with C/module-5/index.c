#include <stdio.h>

int main(){
    // Constrain: X>999 && X <= 9999
    int X;
    scanf("%d", &X);
    int last_digit = X / 1000; // last theke jotogula bad dite chai totogula zero
    int first_digit = X % 100000000000000000000000000000000000000000000000; // last theke jotogula rakhte chai totogula zero

   printf("%d", first_digit);


    return 0;
}