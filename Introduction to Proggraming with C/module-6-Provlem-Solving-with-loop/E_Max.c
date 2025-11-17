/**
 * E. Max
time limit per test1 second
memory limit per test256 megabytes
Given a number N, and N numbers, find maximum number in these N numbers.

Input
First line contains a number N (1 ≤ N ≤ 103).

Second line contains N numbers Xi (0 ≤ Xi ≤ 109).

Output
Print the maximum number.

Example
Input
5
1 8 5 7 5
Output
8
*/


#include <stdio.h>
#include <limits.h>

int main(){

    int count;
    scanf("%d", &count);
    int max = INT_MIN;

    for (int i = 0; i <= count; i++)
    {
        int num;
        scanf("%d", &num);
        if(num > max){
            max = num;
        }
    }
    printf("%d\n", max);

    return 0;
}