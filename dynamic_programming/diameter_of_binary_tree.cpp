#include <bits/stdc++.h>

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
int solve(Node *root, int &res)
{
    if (root == NULL)
    {
        return 0;
    }

    int l = solve(root->left, res);
    int r = solve(root->right, res);
    int temp = max(l, r) + 1;
    // int ans = max(temp, l + r + 1);
    // res = max(res, ans);    or

    res = max(res, l + r + 1);
    return temp;
}
int main()
{

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    int res = INT_MIN;
    solve(root, res);
    cout << res;
    return 0;
}