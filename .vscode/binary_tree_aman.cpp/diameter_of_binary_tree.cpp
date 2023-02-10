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
int height(Node *root)
{
    if (root == 0)
    {
        return 0;
    }
    int lheight = height(root->left);
    int rheight = height(root->right);
    return max(lheight, rheight) + 1;
}
// 0n2
int diameter(Node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int lheight = height(root->left);
    int rheight = height(root->right);
    int currdiameter = lheight + rheight + 1;

    int ldiameter = diameter(root->left);
    int rdiameter = diameter(root->right);
    return max(currdiameter, max(ldiameter, rdiameter));
}
// optimized 0n
int opdiameter(Node *root, int *height)
{
    if (root == NULL)
    {
        return 0;
    }
    int lh = 0;
    int rh = 0;
    int ldiameter = opdiameter(root->left, &lh);
    int rdiameter = opdiameter(root->right, &rh);
    int currdiamter = lh + rh + 1;
    *height = max(lh, rh) + 1;
    return max(currdiamter, max(ldiameter, rdiameter));
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->right->right = new Node(5);
    root->right->left = new Node(6);
    int height = 0;
    cout << opdiameter(root, &height) << endl;
    return 0;
}