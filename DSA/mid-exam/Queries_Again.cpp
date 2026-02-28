#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *next;
    Node *prev;
    Node(int value)
    {
        this->value = value;
        this->next = NULL;
        this->prev = NULL;
    }
};

int getSize(Node *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}

void printList(Node *head)
{
    cout << "L -> ";
    while (head != NULL)
    {
        cout << head->value << (head->next ? " " : "");
        head = head->next;
    }
    cout << endl;
}

void printReverseList(Node *tail)
{
    cout << "R -> ";
    while (tail != NULL)
    {
        cout << tail->value << (tail->prev ? " " : "");
        tail = tail->prev;
    }
    cout << endl;
}

void solve(Node *&head, Node *&tail)
{
    int index, value;
    cin >> index >> value;
    int size = getSize(head);

    if (index < 0 || index > size)
    {
        cout << "Invalid" << endl;
        return;
    }

    Node *newNode = new Node(value);

    if (index == 0)
    {
        if (head == NULL)
        {
            head = tail = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }
    else if (index == size)
    {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    else
    {
        Node *temp = head;
        for (int i = 0; i < index - 1; i++)
        {
            temp = temp->next;
        }
        newNode->next = temp->next;
        newNode->prev = temp;
        temp->next->prev = newNode;
        temp->next = newNode;
    }

    printList(head);
    printReverseList(tail);
}

int main()
{
    int q;
    if (!(cin >> q))
        return 0;
    Node *head = NULL;
    Node *tail = NULL;
    while (q--)
    {
        solve(head, tail);
    }
    return 0;
}