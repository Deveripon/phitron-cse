#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int nodes, edges;
    cin >> nodes >> edges;
    vector<int> graph[nodes];
    while (edges--)
    {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    for (int i = 0; i < nodes; i++)
    {
        cout << i << ": ";
        for (int j : graph[i])
        {
            cout << j << " ";
        }
        cout << endl;
    }

    return 0;
}