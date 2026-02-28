#include <iostream>
using namespace std;
vector<int> list[1000];
queue<int> graph_q;
bool visited[1000];
void can_be_visitet_BFS(int source)
{
    // push the root/source into queue
    visited[source] = true;
    graph_q.push(source);

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
    can_be_visitet_BFS(source);

    if (visited[destination])
    {
        cout << "Node " << destination << " can be visited from node " << source << endl;
    }
    else
    {
        cout << "Node " << destination << " cannot be visited from node " << source << endl;
    }
    return 0;
}