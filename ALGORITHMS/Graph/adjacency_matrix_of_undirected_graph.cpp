#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int nodes, edges;
    cin >> nodes >> edges;
    int adj_matrix[nodes][nodes];
    memset(adj_matrix, 0, sizeof(adj_matrix)); // set all to 0

    // making 1 in diagonal connection
    for (int i = 0; i < nodes; i++)
    {
        for (int j = 0; j < nodes; j++)
        {
            if (i == j)
            {
                adj_matrix[i][j] = 1;
            }
        }
    }

    while (edges--)
    {
        int x, y;
        cin >> x >> y;

        adj_matrix[x][y] = 1;
        adj_matrix[y][x] = 1;
    }

    // Print output
    for (int i = 0; i < nodes; i++)
    {
        for (int j = 0; j < nodes; j++)
        {
            cout << adj_matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}