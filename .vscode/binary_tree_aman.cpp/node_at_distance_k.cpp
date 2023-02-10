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
// case1
void printsubtreenodes(Node *root, int k)
{
    if (root == NULL || k < 0)
    {
        return;
    }
    if (k == 0)
    {
        cout << root->data << " ";
    }
    printsubtreenodes(root->left, k - 1);
    printsubtreenodes(root->right, k - 1);
}
// case 2
int printnodesatk(Node *root, Node *target, int k)
{
    if (root == NULL)
    {
        return -1;
    }
    if (root == target)
    {
        printsubtreenodes(root, k);
        return 0;
    }
    int dl = printnodesatk(root->left, target, k);
    if (dl != -1)
    {
        if (dl + 1 == k)
        {
            cout << root->data << " ";
        }
        else
        {
            printsubtreenodes(root->right, k - dl - 2);
        }
        return 1 + dl;
    }
    int dr = printnodesatk(root->right, target, k);
    if (dr != -1)
    {
        if (dr + 1 == k)
        {
            cout << root->data << " ";
        }
        else
        {
            printsubtreenodes(root->left, k - dr - 2);
        }
        return 1 + dr;
    }
    return -1;
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);

    printnodesatk(root, root->left, 1);
    return 0;
}