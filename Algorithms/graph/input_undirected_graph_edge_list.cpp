#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int nodes, edges;
    cin >> nodes >> edges;
    vector<pair<int, int>> graph;
    while (edges--)
    {
        int x, y;
        cin >> x >> y;
        graph.push_back({x, y});
    }

    for (auto i : graph)
    {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}