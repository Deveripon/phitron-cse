/**
 * Given a string S. Determine whether S is Palindrome or not

Note: A string is said to be a palindrome if the reverse of the string is same as the string. For example, "abba" is palindrome, but "abbc" is not palindrome.

Input
Only one line contains a string S (1 ≤ |S| ≤ 1000) where |S| is the length of the string and it consists of lowercase letters only.

Output
Print "YES" if the string is palindrome, otherwise print "NO".

Examples
InputCopy
abba
OutputCopy
YES
InputCopy
icpcassiut
OutputCopy
NO
InputCopy
mam
OutputCopy
YES


*/

#include <stdio.h>
#include <string.h>

int main()
{
    char str[1001];
    scanf("%s", str);

    int length = strlen(str);
    int isPalindrome = 1; // assume it is a palindrome
    int left = 0;
    int right = length - 1;
    while (left < right)
    {
        if (str[left] != str[right])
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