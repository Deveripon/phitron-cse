#include <stdio.h>

int main()
{
    int lenth1, length2;
    scanf("%d %d", &lenth1, &length2);
    int arr1[lenth1];
    int arr2[length2];

    for (int i = 0; i < lenth1; i++)
    {
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < length2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    // Concatenating the two arrays
    int concatedArr[lenth1 + length2];

    for (int i = 0; i < lenth1; i++)
    {
        concatedArr[i] = arr1[i];
    }

    for (int i = 0; i < length2; i++)
    {
        concatedArr[lenth1 + i] = arr2[i];
    }

    for (int i = 0; i < lenth1 + length2; i++)
    {
        printf("%d ", concatedArr[i]);
    }

    return 0;
}