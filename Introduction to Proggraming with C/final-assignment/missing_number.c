/**
 * Find the Missing Number

Given the multiplication of four numbers and three of those numbers, find the missing number.

Note: If the missing number could not be found for the given input, print -1. All numbers are non-negative integers.

Input Format

The first line will contain T, number of test cases.
For every test case, the input will contain one integer M (the multiplication of the four numbers), A, B, C (three of those four numbers).
Constraints

1 < T <= 100000
0 <= M <= 10^18
1 <= A, B, C <= 10^6
Output Format

Print the missing number. Don't forget to print a new line after it.
Sample Input 0

4
20 1 2 2
10 2 2 1
1 1 2 3
0 3 10 15
Sample Output 0

5
-1
-1
0
Sample Input 1

3
20 5 1 1
18 2 3 3
0 10 20 30
Sample Output 1

4
1
0
Submissions: 146
Max Score: 20
Difficulty: Easy
Rate This Challenge:


More


*/

#include <stdio.h>

int main()
{
    int test_cases;
    scanf("%d", &test_cases);

    while (test_cases != 0)
    {
        long long M, A, B, C;
        scanf("%lld %lld %lld %lld", &M, &A, &B, &C);

        if (M == 0)
        {
            printf("0\n");
        }
        else if (A == 0 || B == 0 || C == 0)
        {
            printf("-1\n");
        }
        else
        {
            long long multiple_abc = A * B * C;
            if (M % multiple_abc == 0)
            {
                long long D = M / multiple_abc;
                printf("%lld\n", D);
            }
            else
            {
                printf("-1\n");
            }
        }

        test_cases--;
    }

    return 0;
}