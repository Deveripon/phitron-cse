#include <iostream>
#include <vector>
#include <queue>
#include <cstring>
using namespace std;
vector<int> graph[1005];
bool visited[1005];

void bfs(int source)
{
    queue<int> q;
    visited[source] = true;
    q.push(source);
    while (!q.empty())
    {
        // get the node
        int current = q.front();
        q.pop();

        // work with node
        cout << current << " ";

        // push children
        for (int child : graph[current])
        {
            if (!visited[child])
            {
                visited[child] = true;
                q.push(child);
            }
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
    bfs(0);

    return 0;
}