#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

char grid[100][100];
bool visited[100][100];
int row, col;
vector<pair<int, int>> movement = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool isValid(int i_row, int i_col)
{
    if (i_row < 0 || i_row >= row || i_col < 0 || i_col >= col)
    {
        return false;
    }
    return true;
}

void DFS(int si_row, int si_col)
{
    // print the source
    cout << si_row << " " << si_col << endl;
    visited[si_row][si_col] = true;

    // recursion with child
    for (int i = 0; i < 4; i++)
    {

        int ci_row = si_row + movement[i].first;
        int ci_col = si_col + movement[i].second;

        if (isValid(ci_row, ci_col) && !visited[ci_row][ci_col])
        {
            visited[ci_row][ci_col] = true;
            DFS(ci_row, ci_col);
        }
    }
}

int main()
{
    cin >> row >> col;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> grid[i][j];
        }
    }

    int si_row, si_col;
    cin >> si_row >> si_col;

    memset(visited, false, sizeof(visited));
    DFS(si_row, si_col);

    return 0;
}