/*
C. Even, Odd, Positive and Negative
time limit per test1 second
memory limit per test256 megabytes
Given N numbers. Count how many of these values are even, odd, positive and negative.

Input
First line contains one number N (1 ≤ N ≤ 103) number of values.

Second line contains N numbers (-105 ≤ Xi ≤ 105).

Output
Print four lines with the following format:

First Line: "Even: X", where X is the number of even numbers in the given input.

Second Line: "Odd: X", where X is the number of odd numbers in the given input.

Third Line: "Positive: X", where X is the number of positive numbers in the given input.

Fourth Line: "Negative: X", where X is the number of negative numbers in the given input.

Example
    Input
    5
    -5 0 -3 -4 12
    Output
    Even: 3
    Odd: 2
    Positive: 1
    Negative: 3
    Note
    First Example :

    Even Numbers are : 0, -4 , 12

    Odd Numbers are : -5 , -3

    Positive Numbers are : 12

    Negative Numbers are : -5 , -3 , -4
*/

#include <stdio.h>

int main(){
    
    int n;
    int even_count = 0;
    int odd_count = 0;
    int positive_count = 0;
    int negative_count = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++){
        int num;
        scanf("%d", &num);
        // Count even and odd
        if(num % 2 == 0){
            even_count++;
        }else {
            odd_count++;
        }
        // Count positive and negative
        if(num > 0){
            positive_count++;
        }else if(num < 0){
            negative_count++;
        }
    }

        printf("Even: %d\n", even_count);
        printf("Odd: %d\n", odd_count);
        printf("Positive: %d\n", positive_count);
        printf("Negative: %d\n", negative_count);


    return 0;
}