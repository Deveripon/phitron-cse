#include <iostream>
using namespace std;

int main()
{

    int nodes, edges;
    cin >> nodes >> edges;

    vector<int> list[nodes];

    while (edges--)
    {
        int x, y;
        cin >> x >> y;
        list[x].push_back(y);
        // list[y].push_back(x); // Both way connection is not allowed in directed graph
    }

    for (auto item : list)
    {
        for (auto value : item)
        {
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}