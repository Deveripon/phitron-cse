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
        list[y].push_back(x);
    }

    for (int i = 0; i < nodes; i++)
    {
        cout << i << ":-> ";
        for (auto value : list[i])
        {
            cout << value << " ";
        }
        cout << endl;
    }

    return 0;
}