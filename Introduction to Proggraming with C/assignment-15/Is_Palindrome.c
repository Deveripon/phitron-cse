/**
 * Is Palindrome
Problem
Submissions
Leaderboard
Discussions
Problem Statement

You will be given a string, S, as input. Take this input in the main function. Next, write a function named is_palindrome() that will receive this string. Return type of that function will be integer. The function checks whether the string is a palindrome or not. If it is a palindrome, return 1; otherwise, return 0. Receive this value in the main function and, with the help of that value, print "Palindrome" or "Not Palindrome".

Palindrome: A palindrome is a word that reads the same forward and backward.

Input Format

Input will contain the string S.
Constraints

1 <= |S| <= 1000; Here |S| means the length of the string.
Output Format

Output "Palindrome" or "Not Palindrome" without the quotation marks.
Sample Input 0

madam
Sample Output 0

Palindrome
Sample Input 1

abccba
Sample Output 1

Palindrome
Sample Input 2

x
Sample Output 2

Palindrome
Sample Input 3

abca
Sample Output 3

Not Palindrome
*/

#include <stdio.h>
#include <string.h>

int is_palindrome(char str[])
{
    int length = strlen(str);
    int left = 0;
    int right = length - 1;

    for (int i = 0; i < length / 2; i++)
    {
        if (str[left] != str[right])
        {
            return 0;
        }
        left++;
        right--;
    }
    return 1;
}

int main()
{
    char str[1001];
    scanf("%s", str);

    int result = is_palindrome(str);
    if (result == 1)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not Palindrome\n");
    }
    return 0;
}