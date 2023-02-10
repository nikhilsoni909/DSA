#include <iostream>
#include <queue>
using namespace std;
class Node
{
public:
    int data;
    struct Node *left;
    struct Node *right;

    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};
bool isbst(Node *root, Node *min, Node *max)
{
    if (root == NULL)
    {
        return true;
    }

    if (min != NULL && root->data <= min->data)
    {
        return false;
    }
    if (max != NULL && root->data >= max->data)
    {
        return false;
    }

    bool leftvalid = isbst(root->left, min, root);
    bool rightvalid = isbst(root->right, root, max);
    return leftvalid && rightvalid;
}

int main()
{
    Node *root = new Node(5);
    root->left = new Node(2);
    root->right = new Node(8);
    cout << isbst(root, NULL, NULL);
    return 0;
}