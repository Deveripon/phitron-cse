#include <iostream>
using namespace std;
vector<pair<int, int>> adjList[100];

int dist[100];

void dijkstra(int source)
{
    queue<pair<int, int>> q;
    // put the source to queue
    dist[source] = 0;
    q.push({source, 0});

    while (!q.empty())
    {
        // get the first node of queue
        pair<int, int> current = q.front();
        q.pop();
        int current_node = current.first;
        int current_weight = current.second;

        // push child to queue
        for (auto child : adjList[current_node])
        {
            int child_node = child.first;
            int child_weight = child.second;

            if (current_weight + child_weight < dist[child_node])
            {
                dist[child_node] = current_weight + child_weight;
                q.push({child_node, current_weight + child_weight});
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
    // SET MAX DISTANCE
    for (int i = 0; i < nodes; i++)
    {
        dist[i] = INT_MAX;
    }

    dijkstra(source);
    for (int i = 0; i < nodes; i++)
    {
        cout << dist[i] << endl;
    }

    return 0;
}