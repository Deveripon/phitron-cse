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

void delete_at_position(Node *&head, Node *&tail, int position)
{

    if (head == NULL)
    {
        cout << "List is empty, cannot delete" << endl;
        return;
    }
    if (position == 0)
    {
        Node *temp = head;
        head = temp->next;
        head->prev = NULL;
        delete temp;
        return;
    }
    Node *temp = head;
    for (int i = 1; i < position; i++)
    {
        temp = temp->next;
    }

    Node *nodeToDelete = temp->next;
    Node *nextNode = nodeToDelete->next;
    temp->next = nextNode;
    nextNode->prev = temp;
    delete nodeToDelete;
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
    delete_at_position(head, tail, 2);
    print_list(head);

    return 0;
}