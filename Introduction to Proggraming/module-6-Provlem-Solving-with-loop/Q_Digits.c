/*
Q. Digits
time limit per test1 second
memory limit per test256 megabytes

Given a number N. Print the digits of that number from right to left separated by space.

Input
First line contains a number T (1 ≤ T ≤ 10) number of test cases.

Next T lines will contain a number N (0 ≤ N ≤ 109)

Output
For each test case print a single line contains the digits of the number separated by space.

Example
InputCopy
4
121
39
123456
1200
OutputCopy
1 2 1
9 3
6 5 4 3 2 1
0 0 2 1

*/
#include <stdio.h>

int main(){
    int test_cases_times; 
    scanf("%d", &test_cases_times); // Taking number of test cases 
    for (int i = 1; i <= test_cases_times; i++) { // Iterating through test cases
        int number; 
        scanf("%d",&number); // Taking each test case number

        if(number == 0){ // If number is 0  just print 0 and move to next test case
            printf("0\n");
            continue;
        }

        while (number > 0) // Iterating through each digit
        {
            printf("%d ", number%10); // Printing Last digit -> 121%10 = 1
            number /= 10; // Removing last digit -> 121/10 = 12
        }
        printf("\n"); // New line
    }

    return 0;
}

// Logic is simple, 
// And when we mod by 10 we get the last digit -> 121%10 = 1
// And when we divide by 10 we remove the last digit - > 121/10 = 12