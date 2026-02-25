#include <iostream>
using namespace std;

vector<pair<int, int>> adjList[100];
bool visited[100];

void bfs(int source)
{
    queue<int> q;
    // put the source to queue
    visited[source] = true;
    q.push(source);

    while (!q.empty())
    {
        // get the first node of queue
        int current = q.front();
        q.pop();

        // work with that node
        cout << current << " ";
        // push child to queue
        for (auto child : adjList[current])
        {
            if (!visited[child.first])
            {
                visited[child.first] = true;
                q.push(child.first);
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
        int x, y, w;
        cin >> x >> y >> w;
        adjList[x].push_back({y, w});
        adjList[y].push_back({x, w});
    }
    int source;
    cin >> source;
    memset(visited, false, sizeof(visited));
    bfs(source);

    return 0;
}