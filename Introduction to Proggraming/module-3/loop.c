// #include <stdio.h>
// int main(){

//     printf("Hello, world! I am learning C programming language. ^_^\nProgramming is fun and challenging. /\\/\\/\\\nI want to give my 100%% dedication to learn!\tI will succeed one day.");

//     return 0;
// }

// #include <stdio.h>

// int main(){
//     long long A, B;
  
//     scanf("%lld %lld", &A, &B);
  
//     printf("%lld", A*B);

//     return 0;
// }

// #include <stdio.h>

// int main(){

//     int N;

//     scanf("%d", &N);
//     if(N%3==0){
//         printf("YES");
//     }
//     else
//     {
//             printf("NO");
//     }

//     return 0;
// }


// #include <stdio.h>
// int main(){

//     int N;
//     scanf("%d", &N);

//     for (int i = 1; i<= N; i++)
//     {
//         if(i%3==0 && i%7==0){
//             printf("%d\n", i);
//         }
//     }

//     return 0;
// }

#include <stdio.h>

int main(){

    int N;
    scanf("%d", &N);

    if(N>=1500){
        printf("I will buy Punjabi\nI will buy new shoes\nAlisa will buy new shoes");  
    }else if(N>1000 && N<1500){
        printf("I will buy Punjabi\n");
    }else{
        printf("Bad luck!\n");
    }

    return 0;
}