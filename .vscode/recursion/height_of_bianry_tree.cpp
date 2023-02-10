#include <bits/stdc++.h>

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
int height(N *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lefth = height(root->left);
    int righth = height(root->right);

    return 1 + max(lefth, righth);
}
int main()
{
    N *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);

    root->left->left = new node(4);
    root->right->right = new node(5);
    cout << height(root);
    return 0;
}