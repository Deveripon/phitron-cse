/**
 * D. Strings
time limit per test2 seconds
memory limit per test64 megabytes
Given two strings A and B. Print three lines contain the following:

The size of the string A and size of the string B separated by a space
The string produced by concatenating A and B (A + B).
The two strings separated by a single space respectively, after swapping their first character.
For more clarification see the example below.

Input
The first line contains a string A (1 ≤ |A| ≤ 10) where |A| is the length of A.

The second line contains a string B (1 ≤ |B| ≤ 10) where |B| is the length of B.

Output
Print the answer required above.

Example
InputCopy
abcd
ef
OutputCopy
4 2
abcdef
ebcd af

*/

#include <stdio.h>
#include <string.h>

int main()
{
    char strA[11];
    char strB[11];
    scanf("%s %s", strA, strB);

    int A_length = strlen(strA);
    int B_length = strlen(strB);
    char swappedA[11];
    char swappedB[11];

    // copy strA and strB to swappedA and swappedB
    for (int i = 0; i < A_length; i++)
    {
        swappedA[i] = strA[i];
    }
    swappedA[A_length] = '\0'; // WHEN COPYING STRINGS, DON'T FORGET TO ADD NULL CHARACTER AT THE END

    // copy strA and strB to swappedA and swappedB
    for (int i = 0; i < B_length; i++)
    {
        swappedB[i] = strB[i];
    }
    swappedB[B_length] = '\0'; // WHEN COPYING STRINGS, DON'T FORGET TO ADD NULL CHARACTER AT THE END
    // Swapping the First Characters
    swappedA[0] = strB[0];
    swappedB[0] = strA[0];

    printf("%d %d\n", A_length, B_length);
    printf("%s%s\n", strA, strB);
    printf("%s %s\n", swappedA, swappedB);
}