#include <iostream>
#include <queue>
#include <limits.h>
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
int maxpathsumutil(Node *root, int &ans)
{
    if (root == NULL)
    {
        return 0;
    }
    int left = maxpathsumutil(root->left, ans);
    int right = maxpathsumutil(root->right, ans);
    int nodemax = max(max(root->data, root->data + left + right), max(root->data + left, root->data + right));
    ans = max(ans, nodemax);
    int singlepathsum = max(root->data, max(root->data + left, root->data + right));
    return singlepathsum;
}
int pathsum(Node *root)
{
    int ans = INT_MIN;
    maxpathsumutil(root, ans);
    return ans;
}
int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->right = new Node(5);
    cout << pathsum(root);
    int ans = INT_MIN;
    cout << endl;
    cout << maxpathsumutil(root, ans);
    return 0;
}