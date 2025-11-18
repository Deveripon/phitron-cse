#include <stdio.h>

int main()
{
    // when the terms of 2d array are known
    /*
      int sizeof_arr, sizeof_each_index;
        scanf("%d %d", &sizeof_arr, &sizeof_each_index);
        int arr[sizeof_arr][sizeof_each_index];

        for (int i = 0; i < sizeof_arr; i++)
        {
            for (int j = 0; j < sizeof_each_index; j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }

        if (sizeof_arr == 1)
        {
            printf("Row matrix");
        }
        else if (sizeof_each_index == 1)
        {
            printf("Column matrix");
        }
        else
        {
            printf("%d x %d Matrix", sizeof_arr, sizeof_each_index);
        } */

    // when it terms of matrix
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
    int isZero = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] != 0)
            {
                isZero = 1;
                break;
            }
        }
    }

    if (isZero == 0)
    {
        printf("Zero Matrix");
    }
    else if (row == 1)
    {
        printf("Row matrix");
    }
    else if (col == 1)
    {
        printf("Column matrix");
    }
    else if (row == col)
    {
        printf("Square matrix");
    }
    else
    {
        printf("%d x %d Matrix", row, col);
    }
    return 0;
}