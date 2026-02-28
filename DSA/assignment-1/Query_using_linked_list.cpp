/* Problem Statement

    You have a singly linked list which is empty initially.Then you will be given Q queries.In each query you will be given two values X and V.

     If X is 0 that means you will insert the value V to the head of the linked list.

    If X is 1 then you will insert the value V to the tail of the linked list.

    If X is 2 then you will delete the value Vth index of the linked list.

    Assume that index starts from 0. If the index is invalid,
    then you shouldn't perform the deletion.

    After each query you need to print the linked list. */

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

void insert_at_head(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        newNode->next = head;
        head = newNode;
    }
};

void insert_at_tail(Node *&head, Node *&tail, int value)
{
    Node *newNode = new Node(value);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void delete_at_index(Node *&head, Node *&tail, int index)
{
    if (head == NULL)
        return; // Empty list, nothing to delete

    if (index == 0)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        if (head == NULL)
            tail = NULL; // List became empty
        return;
    }

    Node *current = head;

    for (int i = 0; i < index - 1 && current != NULL; i++)
    {
        current = current->next;
    }

    if (current == NULL || current->next == NULL)
    {
        return;
    }

    Node *nodeToDelete = current->next;
    current->next = nodeToDelete->next;

    if (current->next == NULL)
    {
        tail = current;
    }

    delete nodeToDelete;
}

void print_linked_list(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->value << (temp->next != NULL ? " " : "");
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int Q;
    cin >> Q;
    while (Q--)
    {
        int X, V;
        cin >> X >> V;
        if (X == 0)
        {
            insert_at_head(head, tail, V);
        }
        else if (X == 1)
        {
            insert_at_tail(head, tail, V);
        }
        else if (X == 2)
        {
            delete_at_index(head, tail, V);
        }

        // Print the linked list
        print_linked_list(head);
    }

    return 0;
}