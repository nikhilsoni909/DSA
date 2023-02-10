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
Node *serchinbst(Node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == key)
    {
        return root;
    }
    if (root->data > key)
    {
        return serchinbst(root->right, key);
    }
    return serchinbst(root->right, key);
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

    if (serchinbst(root, 9))

    {
        cout << "element found";
    }
    else
        cout << "element not found";
}