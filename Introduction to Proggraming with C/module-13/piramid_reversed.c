#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int star = n;
    int space = n - 1;
    for (int i = 0; i < n; i++)
    {

        for (int s = 0; s < space; s++)
        {
            printf(" ");
        }
        space++;

        for (int j = 1; j < star; j++)
        {
            printf("*");
        }

        printf("\n");
        star = star - 2;
    }

    return 0;
}