#include <iostream>
#include <vector>
#include <cstring>

using namespace std;
vector<int> list[1000];
bool visited[1000];

void BFS(int source)
{
    queue<int> graph_q;

    // Push root to queue
    visited[source] = true;
    graph_q.push(source);

    while (!graph_q.empty())
    {
        // get current item from queue
        int current = graph_q.front();
        // work with current item (print & delete)
        graph_q.pop();
        cout << current << " ";
        // push child nodes to queue
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

    // print graph

    for (int i = 0; i < nodes; i++)
    {
        cout << i << "-> ";
        for (auto item : list[i])
        {
            cout << item << " ";
        }
        cout << endl;
    }

    // Get BFS
    memset(visited, false, sizeof(visited));
    BFS(0);

    return 0;
}