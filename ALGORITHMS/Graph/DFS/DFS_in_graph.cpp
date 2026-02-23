#include <iostream>
using namespace std;

vector<int> graph[1005];
int visited[1005];
void DFS(int source)
{
    // print node
    visited[source] = true;
    cout << source << " ";

    // recursion on clild
    for (auto item : graph[source])
    {
        if (!visited[item])
        {
            visited[item] = true;
            DFS(item);
        }
    }
}

int main()
{
    int nodes, edges;
    cin >> nodes >> edges;
    while (edges--)
    {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }
    memset(visited, false, sizeof(visited));

    DFS(0);

    return 0;
}