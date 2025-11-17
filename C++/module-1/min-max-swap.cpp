#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    int y;

    cin >> x >> y;
    int minimum = min(x, y);
    int maximum = max(x, y);
    swap(x, y);
    cout
        << x << endl
        << y << endl;
    cout << minimum << endl;
    cout << maximum << endl;
    return 0;
}