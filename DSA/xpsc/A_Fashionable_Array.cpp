#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int testCases;
    if (!(cin >> testCases))
        return 0;

    while (testCases--)
    {
        int n;
        cin >> n;

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);

        int min = arr[0];
        int max = arr[n - 1];
        if (min % 2 == max % 2)
        {
            cout << 0 << endl;
        }

        else
        {
            // try with removing minimum value
            int i = 0;
            int operation1 = 0;
            while (arr[i] % 2 != max % 2)
            {
                i++;
                operation1++;
            }

            // try with removing maximum value
            int j = n - 1;
            int operation2 = 0;
            while (arr[j] % 2 != min % 2)
            {
                j--;
                operation2++;
            }

            // compare both operations to find the minimum number of operations
            if (operation1 < operation2)
            {
                cout << operation1 << endl; // print the minimum number of operations
            }
            else
            {
                cout << operation2 << endl; // print the minimum number of operations
            }
        }
    }

    return 0;
}
