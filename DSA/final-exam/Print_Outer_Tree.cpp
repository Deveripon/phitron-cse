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

void print_left_nodes(Node *root)
{
    if (!root)
        return;

    if (root->left)
        print_left_nodes(root->left);
    else if (root->right)
        print_left_nodes(root->right);

    cout << root->value << " ";
}

void print_right_nodes(Node *root)
{
    if (!root)
        return;
    cout << root->value << " ";

    if (root->right)
        print_right_nodes(root->right);
    else if (root->left)
        print_right_nodes(root->left);
}
void outer_nodes(Node *root)
{
    //  Left side
    if (root->left)
        print_left_nodes(root->left);

    // Root
    cout << root->value << " ";

    //  Right side
    if (root->right)
        print_right_nodes(root->right);
}

int main()
{

    Node *root = take_input();
    if (!root)
        return 0;
    outer_nodes(root);
    return 0;
}