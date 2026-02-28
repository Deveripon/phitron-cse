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

int main()
{
    Node *head = new Node(10);
    Node *a = new Node(20);
    Node *b = new Node(30);
    Node *c = new Node(40);
    head->next = a;
    a->next = b;
    b->next = c;

    Node *current = head;
    while (current != NULL)
    {
        cout << current->value << endl;
        current = current->next;
    }

    return 0;
}