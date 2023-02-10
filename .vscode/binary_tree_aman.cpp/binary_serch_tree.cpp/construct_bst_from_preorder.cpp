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
        return serchinbst(root->left, key);
    }
    return serchinbst(root->right, key);
}
void preorderp(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorderp(root->left);

    preorderp(root->right);
}
Node *constructbst(int preorder[], int *preorderIdx, int key, int min, int max, int n)
{
    if (*preorderIdx >= n)
    {
        return NULL;
    }

    Node *root = NULL;
    if (key > min && key < max)
    {
        root = new Node(key);
        *preorderIdx = *preorderIdx + 1;

        if (*preorderIdx < n)
        {
            root->left = constructbst(preorder, preorderIdx, preorder[*preorderIdx], min, key, n);
        }
        if (*preorderIdx < n)
        {
            root->right = constructbst(preorder, preorderIdx, preorder[*preorderIdx], key, max, n);
        }
    }
    return root;
}
int main()
{

    int preorder[] = {10, 2, 1, 13, 11};
    int n = 5;
    int preorderIdx = 0;
    Node *root = constructbst(preorder, &preorderIdx, preorder[0], INT_MIN, INT_MAX, n);
    preorderp(root);

    cout << serchinbst(root, 2)->data;
    return 0;
}