/* Problem Statement

            You will be given an integer array A of size N.You need to print the prefix sum array of the array A in reverse order.

        Input Format

            First line will contain N.Next line of contain the array A.Constraints

        1 <= N <= 10 ^
    5 1 <= A[i] <= 10 ^ 9;
Where 0 <= i < N
                   Output Format

                       Output the prefix sum array in reverse order.Sample Input 0

               5 2 4 1 5 3 Sample Output 0

               15 12 7 6 2 Explanation 0

               The prefix sum of the given array is : 2 6 7 12 15. The reverse order is : 15 12 7 6 2. Sample Input 1

               3 1000000000 1000000000 1000000000 Sample Output 1

               3000000000 2000000000 1000000000 */

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<long long> arr(n);
    vector<long long> prefix_sum(n);

    for (int i = 0; i < n; i++) // O(n)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++) // O(n)
    {
        if (i == 0)
        {
            prefix_sum[i] = arr[i];
        }
        else
        {
            prefix_sum[i] = prefix_sum[i - 1] + arr[i];
        }
    }

    // Printing in Reverse
    for (int i = n - 1; i >= 0; i--) // O(n)
    {
        cout << prefix_sum[i] << (i != 0 ? " " : "");
    }

    return 0;
}
// Final Time Complexity: O(n)