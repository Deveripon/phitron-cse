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

void print_list_forward(Node *head)
{
    Node *current = head;
    while (current != NULL)
    {
        cout << current->value << " ";
        current = current->next;
    }
    cout << endl;
}

void print_list_backward(Node *tail)
{
    Node *current = tail;
    while (current != NULL)
    {
        cout << current->value << " ";
        current = current->prev;
    }
    cout << endl;
}

int main()
{
    Node *head = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);

    // next pointers
    head->next = second;
    second->next = third;
    // prev pointers
    third->prev = second;
    second->prev = head;

    print_list_forward(head);
    print_list_backward(third);

    return 0;
}