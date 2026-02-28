#include <iostream>
using namespace std;

class Node
{
public:
    Node *left;
    Node *right;
    int val;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

int main()
{

    return 0;
}