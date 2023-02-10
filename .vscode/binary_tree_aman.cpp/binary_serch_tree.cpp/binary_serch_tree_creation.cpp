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
Node *insertbst(Node *root, int val)

{
    if (root == NULL)
    {
        return new Node(val);
    }

    if (val < root->data)
    {
        root->left = insertbst(root->left, val);
    }
    else
    {
        root->right = insertbst(root->right, val);
    }
}
void inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int main()
{
    Node *root = NULL;
    root = insertbst(root, 5);
    insertbst(root, 2);
    insertbst(root, 3);
    insertbst(root, 4);
    insertbst(root, 6);
    insertbst(root, 7);
    inorder(root);
}