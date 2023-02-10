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
struct info
{
    int size;
    int Max;
    int Min;
    int ans;
    int isbst;
};

void swap(int *left, int *right)
{
    int temp = *right;
    *right = *left;
    *left = temp;
}
void calcptr(Node *root, Node **first, Node **mid, Node **last, Node **prev)
{
    if (root == NULL)
    {
        return;
    }
    calcptr(root->left, first, mid, last, prev);
    if (*prev && root->data < (*prev)->data)
    {
        if (!*first)
        {
            *first = *prev;
            *mid = root;
        }
        else
        {
            *last = root;
        }
    }
    *prev = root;
    calcptr(root->right, first, mid, last, prev);
}
void restore(Node *root)
{
    Node *first, *last, *mid, *prev;
    first = NULL;
    last = NULL;
    mid = NULL;
    prev = NULL;
    calcptr(root, &first, &mid, &last, &prev);
    // case1
    if (first && last)
    {
        swap(&(first->data), &(last->data));
    }
    // case2
    else if (first && mid)
    {
        swap(&(first->data), &(mid->data));
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
    Node *root1 = new Node(6);
    root1->left = new Node(9);
    root1->right = new Node(3);
    root1->left->left = new Node(1);
    root1->left->right = new Node(4);
    root1->right->right = new Node(13);
    inorder(root1);
    cout << endl;
    restore(root1);
    inorder(root1);
    return 0;
}