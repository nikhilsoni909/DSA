#include <iostream>
#include <stack>

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
void zigzag(Node *root)
{
    if (root == NULL)
    {
        return;
    }

    bool lefttoright = true;
    stack<Node *> currlevel;
    stack<Node *> nextlevel;
    currlevel.push(root);
    while (!currlevel.empty())
    {
        Node *temp = currlevel.top();
        currlevel.pop();

        if (temp)
        {
            cout << temp->data << " ";

            if (lefttoright)
            {
                if (temp->left != NULL)
                {
                    nextlevel.push(temp->left);
                }
                if (temp->right != NULL)
                {
                    nextlevel.push(temp->right);
                }
            }
            else
            {
                if (temp->right != NULL)
                {
                    nextlevel.push(temp->right);
                }
                if (temp->left != NULL)
                {
                    nextlevel.push(temp->left);
                }
            }
        }
        if (currlevel.empty())
        {
            lefttoright = !lefttoright;
            swap(currlevel, nextlevel);
        }
    }
}
int main()
{
    Node *root = new Node(12);
    root->left = new Node(9);
    root->right = new Node(15);
    root->left->left = new Node(5);
    root->left->right = new Node(20);
    zigzag(root);
    return 0;
}