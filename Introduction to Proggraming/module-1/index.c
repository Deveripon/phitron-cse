// Basic Syntax of C programming language
# include <stdio.h>
# include <stdbool.h>
int main(){
       

// Variables and Data Types in C programming language

// Data Types in C programming language

// 1 -> int
// 2 -> float
// 3 -> double
// 4 -> char
// 5 -> _Bool


// Variable Declaration in C programming language
// Syntax: data_type variable_name = value;
// Example: int a = 12

int a = 12;
float b = 12.5;
double c = 12.55;
char d = 'A'; // must single quote not double quote
_Bool e = 1; // 1 -> true, 0 -> false

// Memory Allocation in C programming language
// int -> 4 bytes
// float -> 4 bytes
// double -> 8 bytes
// char -> 1 byte
// _Bool -> 1 byte

// Format Specifiers in C programming language 

// int -> %d
// float -> %f
// double -> %lf
// char -> %c
// _Bool -> %d




int bdd = 12.5;
bool x = 0;

    // printf("Size of int: %zu bytes\n", sizeof(a));
    // printf("Size of float: %zu bytes\n", sizeof(b));
    // printf("Size of double: %zu bytes\n", sizeof(c));
    // printf("Size of char: %zu bytes\n", sizeof(d));
    // printf("Size of _Bool: %zu bytes\n", sizeof(e));
    // printf("size of 12: %zu \n",sizeof(bdd));
    // printf(":%zu \n",sizeof(bdd));
    // printf("variable printing a : %d \n", a);
    // printf("printing floating value : %.3f \n", b);
    // printf("printing boolean value : %d \n", x);


    // Taking Input in C programming language

int num1;

scanf("%d", &num1);
printf("You entered %d\n", num1);
return 0;
}