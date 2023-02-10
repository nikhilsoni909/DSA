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
Node *sortedarraytobst(int arr[], int start, int end)
{
    if (start > end)
    {
        return NULL;
    }

    int mid = (start + end) / 2;
    Node *root = new Node(arr[mid]);
    root->left = sortedarraytobst(arr, start, mid - 1);
    root->right = sortedarraytobst(arr, mid + 1, end);
    return root;
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
    int arr[] = {10, 20, 30, 40, 50};
    Node *root = sortedarraytobst(arr, 0, 4);
    preorder(root);
    return 0;
}