#include <iostream>
#include <vector>
#include <list>
using namespace std;
class Stack
{
public:
    list<int> v;
    Stack() {};
    Stack(int value)
    {
        this->push(value);
    }
    void push(int value)
    {
        v.push_back(value);
    }

    void pop()
    {
        if (!v.empty())
        {
            v.pop_back();
        }
    }

    int top()
    {
        if (!v.empty())
        {
            return v.back();
        }
        throw runtime_error("Stack is empty");
    }

    bool empty()
    {
        return v.empty();
    };

    int size()
    {
        return v.size();
    };
};

int main()
{
    int n;
    cin >> n;

    Stack s = Stack();
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        s.push(val);
    }

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    cout << endl;

    cout << "Top:" << s.size() << endl;

    return 0;
}