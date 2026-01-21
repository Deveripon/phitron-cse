#include <iostream>
#include <stack>
#include <queue>

using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node *prev;
    Node(int value = 0)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

class Stack
{
public:
    Node *head = NULL;
    Node *tail = NULL;

    void push(int value)
    {
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void pop()
    {
        if (tail == NULL)
            return;
        Node *toDelete = tail;
        if (head == tail)
        {
            head = NULL;
            tail = NULL;
        }
        else
        {
            tail = tail->prev;
            tail->next = NULL;
        }
        delete toDelete;
    }

    int top()
    {
        if (tail == NULL)
        {
            throw runtime_error("Stack is empty");
        }
        return tail->value;
    }

    bool empty()
    {
        return head == NULL;
    }

    bool size()
    {
        int count = 0;
        Node *current = head;
        while (current != NULL)
        {
            count++;
            current = current->next;
        }
        return count;
    }
};

class Queue
{
public:
    Node *head = NULL;
    Node *tail = NULL;
    void push(int value)
    {
        Node *newNode = new Node(value);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void pop()
    {
        if (head == NULL)
            return;
        Node *toDelete = head;
        if (head == tail)
        {
            head = NULL;
            tail = NULL;
        }
        else
        {
            head = head->next;
            head->prev = NULL;
        }
        delete toDelete;
    }

    int front()
    {
        if (tail == NULL)
        {
            throw runtime_error("Queue is empty");
        }
        return head->value;
    }

    bool empty()
    {
        return head == NULL;
    }

    bool size()
    {
        int count = 0;
        Node *current = head;
        while (current != NULL)
        {
            count++;
            current = current->next;
        }
        return count;
    }
};

int main()
{
    int n, m;
    cin >> n >> m;
    if (n != m)
    {
        cout << "NO" << endl;
        return 0;
    }

    Stack a;
    Queue b;

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