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

void print_preorder(Node *root)
{
    if (root == nullptr)
    {
        return;
    }
    cout << root->value << " ";
    print_preorder(root->left);
    print_preorder(root->right);
}

void print_inorder(Node *root)
{
    if (root == nullptr)
    {
        return;
    }

    print_inorder(root->left);
    cout << root->value << " ";
    print_inorder(root->right);
}

void print_postorder(Node *root)
{
    if (root == nullptr)
    {
        return;
    }

    print_inorder(root->left);
    print_inorder(root->right);
    cout << root->value << " ";
}
int main()
{
    Node *root = new Node(1);
    Node *a = new Node(2);
    Node *b = new Node(4);
    Node *c = new Node(5);
    Node *d = new Node(8);
    Node *e = new Node(9);
    Node *f = new Node(10);
    Node *g = new Node(11);
    Node *h = new Node(3);
    Node *i = new Node(6);
    Node *j = new Node(12);
    Node *k = new Node(13);
    Node *l = new Node(7);
    Node *m = new Node(14);
    Node *n = new Node(15);

    // connect
    root->left = a;
    a->left = b;
    b->left = d;
    b->right = e;
    a->right = c;
    c->left = f;
    c->right = g;
    root->right = h;
    h->left = i;
    i->left = j;
    i->right = k;
    h->right = l;
    l->left = m;
    l->right = n;

    print_preorder(root);
    cout << endl;
    print_inorder(root);
    cout << endl;
    print_postorder(root);

    return 0;
}