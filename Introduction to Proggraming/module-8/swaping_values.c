#include <stdio.h>

int main(){

    int a, b;
    scanf("%d %d", &a, &b);

/* 
    a = a + b; // 5 + 10 = 15
    b = a - b; // 15 - 10 = 5
    a = a - b; // 15 - 5 = 10
 */

 /* 
    int temp = a;
    a = b;
    b = temp;
 */

    printf("%d %d", a, b);
    return 0;
}