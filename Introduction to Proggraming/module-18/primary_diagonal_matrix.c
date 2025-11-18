#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d %d", &row, &col);
    int arr[row][col];

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    if (row != col) // checking is it a square matrix or not -> 1st condition of diagonal matrix
    {
        printf("Not a diagonal matrix bcz its not a square matrix");
        return 0;
    }
    else
    {
        // square matrix -> checking next condition

        // if non digonal value is not 0 than it a non diagonal matrix
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                // checking non diagonal value
                // i != j -> not diagonal line
                if (i != j && arr[i][j] != 0) // is it outside of diagonal and its value is not 0
                {
                    printf("Not a diagonal matrix bcz outside of diagonal value is not 0");
                    return 0;
                }
            }
        }

        printf("Primary Diagonal matrix bcz all test passed");
    }

    return 0;
}