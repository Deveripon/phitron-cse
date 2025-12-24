#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int n, q; // number of elements & queries
    cin >> n >> q;

    // n+1 size so that we can use index 1..n
    vector<long long> v(n + 1);

    // input from index 1
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
    }

    // sort only index 1 to n
    sort(v.begin() + 1, v.end());

    while (q--)
    {
        long long target;
        cin >> target;

        int left = 1, right = n;
        bool found = false;

        while (left <= right)
        {
            int mid = left + (right - left) / 2;

            if (v[mid] == target)
            {
                found = true;
                break;
            }
            else if (v[mid] < target)
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }

        if (found)
            cout << "found\n";
        else
            cout << "not found\n";
    }

    return 0;
}
