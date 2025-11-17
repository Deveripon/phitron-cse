#include <stdio.h>

void printArr(int arr[], int n, int index)
{
    if (index == n)
    {
        return;
    }

    printf("%d \n", arr[index]);
    printArr(arr, n, index + 1);
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printArr(arr, n, 0);
    return 0;
}