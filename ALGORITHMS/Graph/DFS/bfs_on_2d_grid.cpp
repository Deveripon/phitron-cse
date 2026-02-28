#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

char grid[100][100];
bool visited[100][100];
int level[100][100];

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

void BFS(int si_row, int si_col)
{
    queue<pair<int, int>> q;
    visited[si_row][si_col] = true;
    level[si_row][si_col] = 0;
    q.push({si_row, si_col});
    while (!q.empty())
    {
        // get the node
        auto current = q.front();
        q.pop();

        int current_i_row = current.first;
        int current_i_col = current.second;

        // work with node
        cout
            << current_i_row << " " << current_i_col << endl;

        // push children
        for (int i = 0; i < 4; i++)
        {

            int child_i_row = current_i_row + movement[i].first;
            int child_i_col = current_i_col + movement[i].second;

            if (isValid(child_i_row, child_i_col) && !visited[child_i_row][child_i_col])
            {
                visited[child_i_row][child_i_col] = true;
                level[child_i_row][child_i_col] = level[current_i_row][current_i_col] + 1;
                q.push({child_i_row, child_i_col});
            }
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
    int di_row, di_col;
    cin >> di_row >> di_col;

    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));
    BFS(si_row, si_col);
    cout << "Shortest path from source to destination is: " << level[di_row][di_col] << endl;

    return 0;
}