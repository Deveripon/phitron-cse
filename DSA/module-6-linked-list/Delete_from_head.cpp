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

void delete_from_head(Node *&head)
{
    if (head == NULL)
    {
        return;
    }
    Node *temp = head;
    head = head->next;
    delete temp;
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
    delete_from_head(head);
    delete_from_head(head);
    delete_from_head(head);
    print_list(head);

    return 0;
}