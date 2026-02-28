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

int get_depth(Node *root)
{
    if (!root)
        return 0;
    int left = get_depth(root->left);
    int right = get_depth(root->right);
    return max(left, right) + 1;
}

int get_total_nodes(Node *root)
{
    if (!root)
        return 0;
    int left = get_total_nodes(root->left);
    int right = get_total_nodes(root->right);
    return left + right + 1;
}
void is_perfect(int depth, int total_nodes)
{
    int power = pow(2, depth) - 1;
    if (power == total_nodes)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{

    Node *root = take_input();
    int depth = get_depth(root);
    int total_nodes = get_total_nodes(root);

    is_perfect(depth, total_nodes);

    return 0;
}