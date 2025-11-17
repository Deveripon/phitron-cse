#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    // top traiangle
    for (int i = 1; i <= n; i++)
    {
        // spaces
        for (int s = i; s < n; s++)
        {
            printf(" ");
        }
        //  pattern
        if (i % 2 == 1)
        {
            // odd '#'
            for (int j = 1; j <= (2 * i - 1); j++)
            {
                printf("#");
            }
        }
        else
        {
            // even  '-'
            for (int j = 1; j <= (2 * i - 1); j++)
            {
                printf("-");
            }
        }
        printf("\n");
    }

    // bottom triangle
    for (int i = n - 1; i >= 1; i--)
    {
        for (int s = i; s < n; s++)
        {
            printf(" ");
        }
        if (i % 2 == 1)
        {
            for (int j = 1; j <= (2 * i - 1); j++)
            {
                printf("#");
            }
        }
        else
        {
            for (int j = 1; j <= (2 * i - 1); j++)
            {
                printf("-");
            }
        }
        printf("\n");
    }

    return 0;
}
