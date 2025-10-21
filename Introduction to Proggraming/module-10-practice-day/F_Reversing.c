/*
F. Reversing
time limit per test1 second
memory limit per test64 megabytes
Given a number N and an array A of N numbers. Print the array in a reversed order.

Note:

*Don't use built-in-functions.

Input
First line contains a number N (1 ≤ N ≤ 103) number of elements.

Second line contains N numbers (0 ≤ Ai ≤ 109).

Output
Print the array in a reversed order.

Examples
InputCopy
4
5 1 3 2
OutputCopy
2 3 1 5
InputCopy
5
1 2 3 4 5
OutputCopy
5 4 3 2 1
*/

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int revArr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // Reversing the array Method 1
    // for (int i = n - 1; i >= 0; i--)
    // {
    //     revArr[n - 1 - i] = arr[i];
    // }

    // Reversing the array Method 2
    // for (int i = n - 1, j = 0; i >= 0; i--, j++)
    // {
    //     revArr[j] = arr[i];
    // }

    // Reversing the array Method 3 using Two Pointer Approach
    int a = 0;
    int b = n - 1;

    while (a < b)
    {
        int temp = arr[a];
        arr[a] = arr[b];
        arr[b] = temp;
        a++;
        b--;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}