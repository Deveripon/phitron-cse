#include <iostream>
using namespace std;
class Node
{
public:
    int value;
    Node *next;
    Node(int value = 0)
    {
        this->value = value;
        this->next = NULL;
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
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
    }

    void pop()
    {
        if (head == NULL)
        {
            throw runtime_error("Queue is empty");
        }
        else
        {
            Node *temp = head;
            head = temp->next;
            delete temp;
            if (head == NULL)
            {
                tail = NULL;
            }
        }
    }

    int front()
    {
        if (head == NULL)
        {
            throw runtime_error("Queue is empty");
        }
        else
        {
            return head->value;
        }
    }

    int back()
    {
        if (tail == NULL)
        {
            throw runtime_error("Queue is empty");
        }
        else
        {
            return tail->value;
        }
    }

    bool empty()
    {
        if (head == NULL)
        {
            return true;
        }
        return false;
    }

    int size()
    {
        int count = 0;
        Node *temp = head;
        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }
        return count;
    }
};

int main()
{
    Queue q;
    q.push(10);
    q.push(20);
    q.pop();
    cout << "Front element: " << q.front() << endl;
    cout << "Back element: " << q.back() << endl;
    cout << "Queue size: " << q.size() << endl;
    cout << "Is queue empty? " << (q.empty() ? "Yes" : "No") << endl;

    return 0;
}