#include <stdio.h>


int main (){

    int A, B, C;
     scanf("%d %d %d", &A, &B, &C);
     int max;
     int min;
     // find max
     if (A >= B && A >= C)
     {
         max = A;
     }else if (B>= A && B >= C){
         max = B;
    }else if (C >= A && C >= B){
        max = C;
    }

    // find min
    if (A <= B && A <= C)
    {
        min = A;
    }else if (B <= A && B <= C){
        min = B;
    }else if (C <= A && C <= B){
        min = C;
    }

    printf("%d %d", min, max);
    return 0;
}