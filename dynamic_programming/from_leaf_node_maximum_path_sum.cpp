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
    int temp = max(l, r) + root->data;
    if (root->left == NULL && root->right == NULL)
    {
        temp = max(temp, root->data);
    }
    int ans = max(temp, l + r + root->data);
    res = max(res, ans);

    return temp

        ;
}
int main()
{

    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    int res = INT_MIN;
    solve(root, res);
    cout << res;

    return 0;
}