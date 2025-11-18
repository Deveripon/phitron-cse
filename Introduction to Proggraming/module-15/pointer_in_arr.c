#include <stdio.h>

void  myArray(char str[]){
    str = "Hi";
    printf("str %s\n", str);
}

int main(){
    char str[] = "Hello, World!";


    myArray(str);
    printf("str %s\n", str);
    
    return 0;
}