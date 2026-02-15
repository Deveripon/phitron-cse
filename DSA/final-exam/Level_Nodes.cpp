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

void print_level(Node *root, int level)
{
    vector<int> level_nodes;
    queue<pair<Node *, int>> q;
    if (root)
    {
        q.push({root, 0});
    }

    while (!q.empty())
    {
        pair<Node *, int> current = q.front();
        Node *current_node = current.first;
        int current_level = current.second;
        q.pop();
        if (current_level == level)
        {
            level_nodes.push_back(current_node->value);
        }

        if (current_node->left)
            q.push({current_node->left, current_level + 1});
        if (current_node->right)
            q.push({current_node->right, current_level + 1});
    }

    if (level_nodes.size() == 0)
    {
        cout << "Invalid";
    }
    else
    {
        for (int val : level_nodes)
            cout << val << " ";
    }
}

int main()
{

    Node *root = take_input();
    int level;
    cin >> level;
    print_level(root, level);
    return 0;
}