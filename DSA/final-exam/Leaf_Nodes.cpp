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

void print_left_node_reverse(Node *root)
{
    if (!root)
    {
        cout << "Node is empty" << endl;
        return;
    }
    queue<Node *> q;
    q.push(root);
    vector<int> leaf_nodes;
    while (!q.empty())
    {
        // take the front node
        Node *current = q.front();
        q.pop();
        // work with front node

        if (!current->left && !current->right && current->value)
        {
            leaf_nodes.push_back(current->value);
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
    sort(leaf_nodes.begin(), leaf_nodes.end());
    reverse(leaf_nodes.begin(), leaf_nodes.end());
    for (int val : leaf_nodes)
    {
        cout << val << " ";
    }
}

int main()
{

    Node *root = take_input();
    print_left_node_reverse(root);
    return 0;
}