/**
 * G. Palindrome Array
time limit per test1 second
memory limit per test256 megabytes
Given a number N
 and an array A
 of N
 numbers. Determine if it's palindrome or not.

Note:

An array is called palindrome if it reads the same backward and forward, for example, arrays { 1 } and { 1,2,3,2,1 } are palindromes, while arrays { 1,12 } and { 4,7,5,4 } are not.

Input
First line contains a number N
 (1≤N≤105)
 number of elements.

Second line contains N
 numbers (1≤Ai≤109)
.

Output
Print "YES" (without quotes) if A is a palindrome array, otherwise, print "NO" (without quotes).

Examples
InputCopy
5
1 3 2 3 1
OutputCopy
YES
InputCopy
4
1 2 3 4
OutputCopy
NO


*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // two pointer approach
    int isPalindrome = 1; // assume it is a palindrome
    int left = 0;
    int right = n - 1;
    while (left < right)
    {
        if (arr[left] != arr[right])
        {
            isPalindrome = 0; // not a palindrome
            break;
        }
        left++;
        right--;
    }
    if (isPalindrome)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}