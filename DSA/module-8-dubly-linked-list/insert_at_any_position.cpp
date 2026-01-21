#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node *prev;
    Node(int value = 0)
    {
        this->prev = NULL;
        this->value = value;
        this->next = NULL;
    }
};

void insert_at_position(Node *&head, Node *&tail, int position, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    if (position == 0)
    {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
        return;
    }

    Node *temp = head;
    for (int i = 1; i < position; i++)
    {
        temp = temp->next;
    }

    cout << "Inserting after " << temp->value << endl;

    Node *nextNode = temp->next;
    temp->next = newNode;
    newNode->next = nextNode;

    nextNode->prev = newNode;
    newNode->prev = temp;
}

void print_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{

    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *tail = new Node(40);

    // Next links
    head->next = a;
    a->next = b;
    b->next = tail;
    // Prev links
    tail->prev = b;
    b->prev = a;
    a->prev = head;
    insert_at_position(head, tail, 2, 25);
    print_list(head);

    return 0;
}