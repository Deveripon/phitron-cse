/**
 * D. Ali Baba and Puzzles
time limit per test1 second
memory limit per test256 megabytes
One day, Ali Baba had an easy puzzle that he couldn't solve. The puzzle consisted of 4
 numbers and his task was to check whether he could get the fourth number using arithmetic operators (+,−,×
) between the other three numbers; so that each operator is used only once.

a□b□c=d
Can you solve this tricky puzzle for him?
Input
Only one line containing four numbers a
, b
, c
 and d
 (−109≤a,b,c≤109
),(−1018≤d≤1018
).

Output
Print "YES" (without quotes) if you get the fourth number using arithmetic operators, otherwise, print "NO" (without quotes).

Examples
InputCopy
3 4 5 23
OutputCopy
YES
InputCopy
9 5 3 7
OutputCopy
YES
InputCopy
1 2 3 1
OutputCopy
NO

*/

#include <stdio.h>

int main()
{
    int a, b, c;
    long long int d;
    scanf("%d %d %d %lld", &a, &b, &c, &d);

    /**
     *cast to long long int to avoid overflow like
     * a = -99999999
     * b = -99999999
     * c = 99999999
     * a * b = 9999999979979 -> This is out of int range + c = 9999999800000002 which is out of int range
     */
    long long int la = a, lb = b, lc = c;
    // Check all combinations of operations
    if (la + lb - lc == d ||
        la + lb * lc == d ||
        la - lb + lc == d ||
        la - lb * lc == d ||
        la * lb + lc == d ||
        la * lb - lc == d)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}