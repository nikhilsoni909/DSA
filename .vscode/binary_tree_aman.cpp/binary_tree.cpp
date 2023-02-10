#include <iostream>

using namespace std;
typedef struct node
{
    int data;
    struct node *left;
    struct node *right;

    node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
} N;
void preorder(N *root)
{
    if (root == NULL)
    {
        return;
    }

    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}
void inorder(N *root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";

    inorder(root->right);
}
void postorder(N *root)
{
    if (root == NULL)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
}
int main()
{
    N *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);

    root->left->left = new node(4);
    root->right->right = new node(5);
    preorder(root);
    cout << endl;
    postorder(root);
    cout << endl;
    inorder(root);
    cout << endl;
    return 0;
}