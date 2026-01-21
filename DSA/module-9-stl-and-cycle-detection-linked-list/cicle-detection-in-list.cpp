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

void print_list(Node *head)
{
    Node *current = head;
    while (current != NULL)
    {
        cout << current->value << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;
}

void insert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void take_inputs_list(Node *&head, Node *&tail)
{
    int value;
    while (true)
    {
        cin >> value;
        if (value == -1)
            break;
        insert_at_tail(head, tail, value);
    }
};

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    Node *tail = new Node(50);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = tail;
    tail->next = b; // Creating a cycle here

    Node *slow = head;
    Node *fast = head;
    bool cycle_found = false;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast)
        {
            cycle_found = true;
            break;
        }
    }
    if (cycle_found)
    {
        cout << "Cycle detected in the linked list." << endl;
    }
    else
    {
        cout << "No cycle detected in the linked list." << endl;
    }
    return 0;
}