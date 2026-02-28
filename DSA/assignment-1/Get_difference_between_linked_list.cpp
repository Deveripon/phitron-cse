/* Problem Statement

    You need to take a singly linked list of integer value as input and print the difference between the maximum and minimum value of the singly linked list.

    Note : You must use singly linked list to solve this problem,
    otherwise you will not get marks.

    Input Format

        Input will contain the values of the singly linked list,
    and will terminate with - 1. Constraints

                1 <=
            N <= 10 ^
        5;
Here N is the maximum number of nodes of the linked list.- 10 ^ 9 <= V <= 10 ^ 9;
Here V is the value of each node.Output Format

        Output the difference between the maximum and minimum value.Sample Input 0

    2 4 1 5 3 6 -
    1 Sample Output 0

    5 Sample Input 1

    2 -
    1 Sample Output 1

    0 */

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
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}

void find_difference(Node *head)
{
    if (head == NULL || head->next == NULL)
    {
        cout << 0 << endl;
        return;
    }

    int min_value = head->value;
    int max_value = head->value;
    Node *current = head->next;

    while (current != NULL)
    {
        if (current->value < min_value)
        {
            min_value = current->value;
        }
        if (current->value > max_value)
        {
            max_value = current->value;
        }
        current = current->next;
    }

    cout << (max_value - min_value);
}
int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    while (true)
    {
        int value;
        cin >> value;
        if (value == -1)
        {
            break;
        }
        insert_at_tail(head, tail, value);
    }

    find_difference(head);
    return 0;
}