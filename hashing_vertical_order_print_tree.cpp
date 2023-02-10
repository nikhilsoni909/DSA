#include <bits/stdc++.h>
#define vi vector<int>
#define ff first
#define ss second
#define rep(i, a, n) for (int i = a; i < n; i++)
using namespace std;
struct Node
{
    int key;
    Node *left, *right;
};
Node *newnode(int key)
{
    Node *node = new Node;
    node->key = key;
    node->left = node->right = NULL;
    return node;
}
void getverticalorder(Node *root, int hdis, map<int, vi> &m)
{
    if (root == NULL)
    {
        return;
    }
    m[hdis].push_back(root->key);
    getverticalorder(root->left, hdis - 1, m);
    getverticalorder(root->right, hdis + 1, m);
}
int main()
{
    Node *root = newnode(10);
    root->left = newnode(7);
    root->right = newnode(4);
    root->left->left = newnode(3);
    root->left->right = newnode(11);
    root->right->left = newnode(14);
    root->right->right = newnode(6);
    map<int, vector<int>> m;
    int hdis = 0;
    getverticalorder(root, hdis, m);
    map<int, vector<int>>::iterator it;

    for (it = m.begin(); it != m.end(); it++)
    {
        for (int i = 0; i < (it->second).size(); i++)
        {
            cout << (it->second)[i] << " ";
        }
        cout << endl;
    }

    return 0;
}