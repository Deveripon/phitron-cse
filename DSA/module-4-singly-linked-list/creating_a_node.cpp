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
    Node *x = new Node(20);
    Node *y = new Node(30);

    head->next = x;
    x->next = y;
    y->next = NULL;

    cout << head->value << " -> " << head->next->value << " -> "
         << head->next->next->value << endl;

    return 0;
}