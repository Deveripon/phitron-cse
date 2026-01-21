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

void print_list_reverse(Node *head)
{
    Node *temp = head;
    if (temp == NULL)
    {
        return;
    }
    print_list_reverse(temp->next);
    cout << temp->value << " -> ";
};

void reverse_list(Node *&head, Node *temp, Node *&tail)
{
    if (temp->next == NULL)
    {
        head = temp; // Update the head to the last node
        return;
    }

    reverse_list(head, temp->next, tail);

    temp->next->next = temp;
    temp->next = NULL;
    tail = temp;
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
    Node *head = NULL;
    Node *tail = NULL;
    take_inputs_list(head, tail);
    reverse_list(head, head, tail);
    print_list(head);

    return 0;
}