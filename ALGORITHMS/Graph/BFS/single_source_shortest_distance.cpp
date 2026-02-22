#include <iostream>
using namespace std;
vector<int> list[1000];
queue<int> graph_q;
bool visited[1000];
int level[1000];
void shortest_distance_BFS(int source)
{
    // push the root/source into queue
    visited[source] = true;
    graph_q.push(source);
    level[source] = 0;

    while (!graph_q.empty())
    {
        // get the current item
        int current = graph_q.front();
        // work with current item
        graph_q.pop();
        // push the children into queue
        for (auto item : list[current])
        {
            if (!visited[item])
            {
                visited[item] = true;
                graph_q.push(item);
                level[item] = level[current] + 1;
            }
        }
    }
}

int main()
{

    // take input
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
    memset(visited, false, sizeof(visited));
    memset(level, -1, sizeof(level));
    shortest_distance_BFS(source);

    if (level[destination] != -1)
    {
        cout << "Shortest distance from node " << source << " to node " << destination << " is: " << level[destination] << endl;
    }
    else
    {
        cout << "Node " << destination << " cannot be visited from node " << source << endl;
    }

    return 0;
}