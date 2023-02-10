#include <iostream>
#include <vector>
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
vector<Node *> constructtress(int start, int end)
{
    vector<Node *> tree;
    if (start > end)
    {
        tree.push_back(NULL);
        return tree;
    }
    for (int i = start; i <= end; i++)
    {
        vector<Node *> lefttree = constructtress(start, i - 1);
        vector<Node *> righttree = constructtress(i + 1, end);
        for (int j = 0; j < lefttree.size(); j++)
        {
            Node *left = lefttree[j];
            for (int k = 0; k < righttree.size(); k++)
            {
                Node *right = righttree[k];
                Node *node = new Node(i);
                node->left = left;
                node->right = right;
                tree.push_back(node);
            }
        }
    }
    return tree;
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
    vector<Node *> totaltrees = constructtress(1, 10);

    for (int i = 0; i < totaltrees.size(); i++)
    {
        preorder(totaltrees[i]);
        cout << endl;
    }

    return 0;
}