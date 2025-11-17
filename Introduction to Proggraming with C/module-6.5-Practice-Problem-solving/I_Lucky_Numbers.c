/**
 * A number of two digits is lucky if one of its digits is divisible by the other.

For example, 39, 82, and 55 are lucky, while 79 and 43 are not.

Given a number between 10 and 99, determine whether it is lucky or not.

Input
Only one line containing a single number N
 (10≤N≤99)
.

Output
Print "YES" if the given number is lucky, otherwise print "NO".

Examples
InputCopy
39
OutputCopy
YES
InputCopy
64
OutputCopy
NO


 *
*/

#include <stdio.h>

int main()
{

    int number;
    scanf("%d", &number);

    int first_digit = number / 10;
    int last_digit = number % 10;
    if (last_digit == 0 || first_digit == 0)
    {
        printf("YES\n");
    }
    else if (first_digit % last_digit == 0 || last_digit % first_digit == 0)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}