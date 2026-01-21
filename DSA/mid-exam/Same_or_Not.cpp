#include <iostream>
#include <stack>
#include <queue>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    if (n != m)
    {
        cout << "NO" << endl;
        return 0;
    }

    stack<int> a;
    queue<int> b;
    bool same = true;
    for (int i = 0; i < n; ++i)
    {
        int input;
        cin >> input;
        a.push(input);
    }

    for (int i = 0; i < m; ++i)
    {
        int input;
        cin >> input;
        b.push(input);
    }

    while (!a.empty() && !b.empty())
    {
        if (a.top() == b.front())
        {
            a.pop();
            b.pop();
        }
        else
        {
            same = false;
            break;
        }
    }

    // Return and Print result
    if (same)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}