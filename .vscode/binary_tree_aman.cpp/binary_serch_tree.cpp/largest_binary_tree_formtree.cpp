#include <iostream>
#include <stack>
#include <limits>
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

info largestbst(Node *root)
{

    if (root == NULL)
    {
        return {0, INT_MIN, INT_MAX, 0, true};
    }
    if (root->left == NULL && root->right == NULL)
    {
        return {1, root->data, root->data, 1, true};
    }
    info leftinfo = largestbst(root->left);
    info rightinfo = largestbst(root->right);
    info curr;
    curr.size = (1 + leftinfo.size + rightinfo.size);
    if (leftinfo.isbst && rightinfo.isbst && leftinfo.Max < root->data && rightinfo.Min > root->data)
    {
        curr.Min = min(leftinfo.Min, min(rightinfo.Min, root->data));
        curr.Max = max(leftinfo.Max, max(rightinfo.Max, root->data));
        curr.ans = curr.size;
        curr.isbst = true;
        return curr;
    }
    curr.ans = max(leftinfo.ans, rightinfo.ans);
    curr.isbst = false;
    return curr;
}
int main()
{
    Node *root1 = new Node(15);
    root1->left = new Node(20);
    root1->right = new Node(30);
    root1->left->left = new Node(5);
    cout << largestbst(root1).ans << " ";
    return 0;
}