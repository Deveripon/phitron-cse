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
    Node *root = new Node(val);
    if (val == -1)
    {
        cout << "NODE IS NULL" << endl;
        root = NULL;
        return root;
    }

    queue<Node *> q;
    q.push(root);

    while (!q.empty())
    {
        // Take first node
        Node *current = q.front();
        q.pop();
        // work with the node
        int left, right;
        cin >> left >> right;
        if (left != -1)
        {
            current->left = new Node(left);
            q.push(current->left); // push the childs to queue
        }

        if (right != -1)
        {
            current->right = new Node(right);
            q.push(current->right); // push the childs to queue
        }
    }

    return root;
}

void print_lavel(Node *root)
{
    if (!root)
        return;
    // First push the root to queue
    queue<Node *> q;
    q.push(root);

    // loop until the queue empty
    while (!q.empty())
    {
        // get the front node of queue
        Node *current = q.front();
        // do work with the node (Print and Pop)
        cout << current->value << " ";
        q.pop();
        // if there left or right child push them to queue
        if (current->left)
        {
            q.push(current->left);
        }
        if (current->right)
        {
            q.push(current->right);
        }
    }
}

int count_nodes(Node *root)
{
    if (!root)
        return 0;
    int leftCount = count_nodes(root->left);
    int rightCount = count_nodes(root->right);
    return leftCount + rightCount + 1;
}

int get_max_height(Node *root)
{
    if (!root)
    {
        return 0;
    }
    if (!root->left && !root->right)
    {
        return 0;
    }

    int leftHeight = get_max_height(root->left);
    int rightHeight = get_max_height(root->right);
    return max(leftHeight, rightHeight) + 1;
}
int main()
{

    Node *root = input_tree();
    print_lavel(root);
    cout << endl;
    int count = count_nodes(root);
    cout << count << endl;
    int height = get_max_height(root);
    cout << height << endl;
    return 0;
}