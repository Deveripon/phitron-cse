#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int nodes, edges;
    cin >> nodes >> edges;
    int matrix[nodes][nodes];

    memset(matrix, 0, sizeof(matrix));

    for (int i = 0; i < nodes; i++)
    {
        for (int j = 0; j < nodes; j++)
        {
            matrix[i][i] = 1;
        }
    }

    for (int i = 0; i < edges; i++)
    {
        int x, y;
        cin >> x >> y;
        matrix[x][y] = 1;
    }

    for (int i = 0; i < nodes; i++)
    {
        for (int j = 0; j < nodes; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}