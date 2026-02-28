#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int node, edges;
    cin >> node >> edges;
    int matrix[node][node];

    memset(matrix, 0, sizeof(matrix));

    for (int i = 0; i < node; i++)
    {
        for (int j = 0; j < node; j++)
        {
            matrix[i][i] = 1;
        }
    }

    for (int i = 0; i < edges; i++)
    {
        int x, y;
        cin >> x >> y;
        matrix[x][y] = 1;
        matrix[y][x] = 1;
    }

    for (int i = 0; i < node; i++)
    {
        for (int j = 0; j < node; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}