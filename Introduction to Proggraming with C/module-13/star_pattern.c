#include <stdio.h>

int main()
{

    int n;
    scanf("%d", &n);

    int star = 1;
    int space = n - 1;
    for (int i = 1; i <= n; i++)
    {

        // print spaces
        for (int s = 0; s < space; s++)
        {
            printf(" ");
        }
        space--;

        for (int j = 1; j <= star; j++)
        {
            printf("*");
        }
        star = star + 2;
        printf("\n");
    }

    return 0;
}