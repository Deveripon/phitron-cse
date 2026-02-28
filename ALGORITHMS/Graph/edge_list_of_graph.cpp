#include <iostream>
using namespace std;

int main()
{
    int nodes, edges;
    cin >> nodes >> edges;

    vector<pair<int, int>> list;

    while (edges--)
    {
        int x, y;
        cin >> x >> y;
        list.push_back({x, y});
    }

    for (auto i : list)
    {
        cout << i.first << " " << i.second << endl;
    }

    return 0;
}