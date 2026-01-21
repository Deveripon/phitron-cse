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

void delete_at_tail(Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        return; // List is empty
    }
    Node *current = head;
    while (current->next != tail)
    {
        current = current->next;
    }
    Node *nodeToDelete = current->next;
    current->next = NULL;
    tail = current;
    delete nodeToDelete;
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
    Node *head = NULL;
    Node *tail = NULL;
    take_inputs_list(head, tail);
    delete_at_tail(head, tail);
    print_list(head);

    return 0;
}