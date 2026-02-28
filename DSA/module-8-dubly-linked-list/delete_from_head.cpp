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

void delete_form_head(Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        cout << "List is empty, cannot delete" << endl;
        return;
    }
    if (head->next == NULL)
    {
        delete head;
        head = NULL;
        tail = NULL;
        return;
    }

    Node *temp = head;
    head = head->next;
    if (head == NULL)
    {
        tail = NULL;
        return;
    }
    head->prev = NULL;
    delete temp;
};

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

    delete_form_head(head, tail);
    print_list(head);

    return 0;
}