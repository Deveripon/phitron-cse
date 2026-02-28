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

void print_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
int main()
{
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *tail = new Node(30);
    head->next = second;
    second->next = tail;

    insert_at_tail(head, tail, 40);
    insert_at_tail(head, tail, 50);
    insert_at_tail(head, tail, 60);
    print_list(head);
    cout << "Head: " << head->value << endl;
    cout << "Tail: " << tail->value << endl;

    return 0;
}