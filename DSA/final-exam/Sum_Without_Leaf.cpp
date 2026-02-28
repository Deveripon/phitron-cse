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

Node *take_input()
{
    int val;
    cin >> val;
    Node *root = new Node(val);
    queue<Node *> q;
    // Push the root to the queue
    if (root->value)
    {
        q.push(root);
    }
    else
    {
        return root;
    }
    while (!q.empty())
    {
        // get the front node
        Node *current = q.front();
        q.pop();
        // work with the node
        int left, right;
        cin >> left >> right;

        if (left != -1)
        {
            current->left = new Node(left);
            q.push(current->left);
        }
        if (right != -1)
        {
            current->right = new Node(right);
            q.push(current->right);
        }
    }
    return root;
}

void print_node(Node *root)
{
    if (!root)
    {
        cout << "Node is empty" << endl;
        return;
    }
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        // take the front node
        Node *current = q.front();
        q.pop();
        // work with front node
        cout << current->value << " ";
        // if left child exists
        if (current->left)
        {
            // push it to the queue
            q.push(current->left);
        }

        // if right child exists
        if (current->right)
        {
            // push it to the queue
            q.push(current->right);
        }
    }
}

int sum_of_parents(Node *root)
{
    int sum = 0;
    if (!root)
    {
        return 0;
    }
    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        // take the front node
        Node *current = q.front();
        q.pop();
        // work with front node
        if (current->left || current->right)
        {
            sum = sum + current->value;
        }

        // if left child exists
        if (current->left)
        {
            // push it to the queue
            q.push(current->left);
        }

        // if right child exists
        if (current->right)
        {
            // push it to the queue
            q.push(current->right);
        }
    }
    return sum;
}

int main()
{

    Node *root = take_input();
    int sum = sum_of_parents(root);
    cout << sum << endl;
    return 0;
}