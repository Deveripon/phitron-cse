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

void delete_from_tail(Node *&head, Node *&tail)
{
    Node *temp = tail;
    if (head == NULL)
    {
        cout << "List is empty, cannot delete" << endl;
        return;
    }

    tail = temp->prev;
    if (tail == NULL)
    {
        head = NULL;
        delete temp;
        return;
    }
    tail->next = NULL;
    delete temp;
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

    delete_from_tail(head, tail);
    delete_from_tail(head, tail);
    delete_from_tail(head, tail);
    delete_from_tail(head, tail);
    delete_from_tail(head, tail);
    delete_from_tail(head, tail);
    delete_from_tail(head, tail);
    delete_from_tail(head, tail);
    print_list(head);

    return 0;
}