#include <iostream>

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
void sumreplace(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    sumreplace(root->left);
    sumreplace(root->right);
    if (root->left != NULL)
    {
        root->data += root->left->data;
    }
    if (root->right != NULL)
    {
        root->data += root->right->data;
    }
}
void preorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->right->right = new Node(5);
    preorder(root);
    cout << endl;
    sumreplace(root);
    preorder(root);
    return 0;
}