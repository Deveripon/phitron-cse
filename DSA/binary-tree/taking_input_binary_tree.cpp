#include <iostream>
using namespace std;

class Node
{
public:
    int value;
    Node *left;
    Node *right;
    Node(int value = 0)
    {
        this->value = value;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;

    if (val == -1)
    {
        cout << "NODE IS NULL" << endl, NULL;
        return NULL;
    }

    Node *root = new Node(val);
    queue<Node *> q;
    q.push(root); // Push the root to queue at very first

    while (!q.empty())
    {
        // 1. Get the First node of queue
        Node *current = q.front();
        q.pop();

        // 2. Operations for this node
        int left, right;
        cin >> left >> right;

        if (left != -1)
        {
            current->left = new Node(left);
            q.push(current->left); // Push the left child to queue
        }

        if (right != -1)
        {
            current->right = new Node(right);
            q.push(current->right); // Push the right child to queue
        }
    };
    return root;
}

void print_lavel(Node *root)
{
    if (!root)
        return;
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        cout << temp->value << " ";
        if (temp->left)
        {
            q.push(temp->left);
        };
        if (temp->right)
        {
            q.push(temp->right);
        }
    }
}

int main()
{
    Node *root = input_tree();
    print_lavel(root);
    return 0;
}