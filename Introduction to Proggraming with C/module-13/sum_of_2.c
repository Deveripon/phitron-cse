#include <stdio.h>

int main()
{

    // taking value input
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int val;
    scanf("%d", &val);
    int sum_found = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == val)
            {
                sum_found = 1;
            }
        }
    }

    if (sum_found)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    return 0;
}