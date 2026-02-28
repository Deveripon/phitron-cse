#include <iostream>
using namespace std;
vector<pair<int, int>> adjList[100];

int dist[100];

void dijkstra(int source)
{
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    // put the source to queue
    dist[source] = 0;
    q.push({
        0,
        source,
    });

    while (!q.empty())
    {
        // get the first node of queue
        pair<int, int> current = q.top();
        q.pop();

        int current_weight = current.first;
        int current_node = current.second;

        // push child to queue
        for (auto child : adjList[current_node])
        {

            int child_weight = child.first;
            int child_node = child.second;

            if (current_weight + child_weight < dist[child_node])
            {
                dist[child_node] = current_weight + child_weight;
                q.push({
                    current_weight + child_weight,
                    child_node,
                });
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
        adjList[x].push_back({w, y});
        adjList[y].push_back({w, x});
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