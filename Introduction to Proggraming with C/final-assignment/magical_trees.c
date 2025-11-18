/**
 * Magical Tree
Problem
Submissions
Leaderboard
Discussions
Problem Statement

Jingle Bells, Jingle Bells - It's Christmas today! Ranja, our little friend, is all excited, but there's just one thing missing: a Christmas tree.

Ranja will provide us with the size of the tree, N, and we'll work our holiday magic to print out that perfect tree. Let's make Ranja's Christmas tree dreams come true!

You should see the sample input output to understand how the tree looks like.

Input Format

Input will contain only N.
Constraints

1 <= N <= 21 ; and N is odd.
Output Format

Output the tree of size N.
Sample Input 0

1
Sample Output 0

     *
    ***
   *****
  *******
 *********
***********
     *
     *
     *
     *
     *
Sample Input 1

3
Sample Output 1

      *
     ***
    *****
   *******
  *********
 ***********
*************
     ***
     ***
     ***
     ***
     ***
Sample Input 2

5
Sample Output 2

       *
      ***
     *****
    *******
   *********
  ***********
 *************
***************
     *****
     *****
     *****
     *****
     *****
*/

#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    int top_rows = 6 + (N - 1) / 2;

    // max numer of star
    int max_stars = 1 + 2 * (top_rows - 1);

    // upper part
    int row, space, star;
    for (row = 0; row < top_rows; row++)
    {
        int stars_in_row = 1 + 2 * row;

        int spaces_before = (max_stars - stars_in_row) / 2;

        // Print spaces
        for (space = 0; space < spaces_before; space++)
        {
            printf(" ");
        }

        // Print stars
        for (star = 0; star < stars_in_row; star++)
        {
            printf("*");
        }

        printf("\n");
    }

    // lower part
    for (row = 0; row < 5; row++)
    {

        int spaces_before = (max_stars - N) / 2;

        // Print spaces
        for (space = 0; space < spaces_before; space++)
        {
            printf(" ");
        }

        // Print N stars
        for (star = 0; star < N; star++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}