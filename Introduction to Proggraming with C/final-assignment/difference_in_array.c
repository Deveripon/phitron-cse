#include <stdio.h>

// Function to sort array in ascending order
void sortArray(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to calculate absolute value
int absolute(int x)
{
    if (x < 0)
    {
        return -x;
    }
    else
    {
        return x;
    }
}

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n;
        scanf("%d", &n);

        // Declare arrays A, B, and C
        int A[n], B[n], C[n];

        // Read array A
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &A[i]);
        }

        // Copy A to B
        for (int i = 0; i < n; i++)
        {
            B[i] = A[i];
        }

        // Sort array B in ascending order
        sortArray(B, n);

        // Calculate array C (absolute difference)
        for (int i = 0; i < n; i++)
        {
            C[i] = absolute(A[i] - B[i]);
        }

        // Print array C
        for (int i = 0; i < n; i++)
        {
            printf("%d ", C[i]);
        }
        printf("\n");
    }

    return 0;
}