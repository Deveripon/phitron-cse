#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>

using namespace std;
vector<int> list[1000];
bool visited[1000];
int level[1000];
int parant_node[1000];

void BFS(int source)
{
    queue<int> graph_q;

    // Push root to queue
    visited[source] = true;
    level[source] = 0;
    graph_q.push(source);

    while (!graph_q.empty())
    {
        // get current item from queue
        int current = graph_q.front();
        // work with current item (print & delete)
        graph_q.pop();
        // push child nodes to queue
        for (auto item : list[current])
        {
            if (!visited[item])
            {
                visited[item] = true;
                level[item] = level[current] + 1;
                parant_node[item] = current;
                graph_q.push(item);
            }
        }
    }
}

int main()
{
    // Take graph input
    int nodes, edges;
    cin >> nodes >> edges;

    while (edges--)
    {
        int x, y;
        cin >> x >> y;
        list[x].push_back(y);
        list[y].push_back(x);
    }

    int source, destination;
    cin >> source >> destination;

    // Get BFS
    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));
    memset(parant_node, -1, sizeof(parant_node));
    BFS(source);

    if (level[destination] != -1)
    {
        cout << "Shortest distance from node " << source << " to node " << destination << " is: " << level[destination] << endl;
    }
    else
    {
        cout << "Node " << destination << " cannot be visited from node " << source << endl;
    }

    int node = destination;
    vector<int> path;

    while (node != -1)
    {
        path.push_back(node);
        node = parant_node[node];
    }
    reverse(path.begin(), path.end());
    for (int i : path)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}