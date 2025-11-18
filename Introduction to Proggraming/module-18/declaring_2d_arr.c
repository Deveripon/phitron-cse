#include <stdio.h>

int main()
{
    int arr_length, per_row_index_length;
    scanf("%d %d", &arr_length, &per_row_index_length);

    int arr[arr_length][per_row_index_length];
    for (int i = 0; i < arr_length; i++)
    {
        for (int j = 0; j < per_row_index_length; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int printing_row;
    scanf("%d", &printing_row);

    int printing_col;
    scanf("%d", &printing_col);

    printf("printing length of the arry %d \n", arr_length);
    printf("printing length of the each row index %d \n", per_row_index_length);

    printf("printing 1st row 2nd index value %d \n", arr[0][1]);

    printf("printing all values: \n");
    printf("printing column %d \n", printing_col);
    for (int i = 0; i < arr_length; i++)
    {
        /*       if (i == printing_row)
              {
                  for (int j = 0; j < per_row_index_length; j++)
                  {
                      printf("%d ", arr[i][j]);
                  }
                  printf("\n");
                  break;
              } */

        printf("%d ", arr[i][printing_col]);
    }

    return 0;
}