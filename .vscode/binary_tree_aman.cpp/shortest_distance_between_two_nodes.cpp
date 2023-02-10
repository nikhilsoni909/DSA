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
Node *lca2(Node *root, int n1, int n2)
{
    if (root == NULL)
    {
        return NULL;
    }

    if (root->data == n1 || root->data == n2)
    {
        return root;
    }
    Node *leftlca = lca2(root->left, n1, n2);
    Node *rightlca = lca2(root->right, n1, n2);

    if (leftlca && rightlca)
    {
        return root;
    }
    if (leftlca == NULL && rightlca == NULL)
    {
        return NULL;
    }

    if (leftlca != NULL)
    {
        return lca2(root->left, n1, n2);
    }
    return lca2(root->right, n1, n2);
}
int findDis(Node *root, int k, int dist)
{
    if (root == NULL)
    {
        return -1;
    }
    if (root->data == k)
    {
        return dist;
    }
    int left = findDis(root->left, k, dist + 1);
    if (left != -1)
    {
        return left;
    }
    return findDis(root->right, k, dist + 1);
}
int dis(Node *root, int n1, int n2)
{
    Node *lca = lca2(root, n1, n2);
    int d1 = findDis(lca, n1, 0);
    int d2 = findDis(lca, n2, 0);
    return d1 + d2;
}
int main()
{

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->left = new Node(4);
    root->right->right = new Node(5);

    cout << dis(root, 4, 5);
    return 0;
}