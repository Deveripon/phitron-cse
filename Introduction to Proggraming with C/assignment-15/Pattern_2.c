#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        // spaces
        for (int s = i; s < n; s++)
        {
            printf(" ");
        }
        // decreasing numbers from i to 1
        for (int j = i; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
