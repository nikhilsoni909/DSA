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

bool areidentical(Node *root1, Node *root2)
{
    if (root1 == NULL && root2 == NULL)
    {
        return true;
    }

    if (root1 == NULL || root2 == NULL)
    {
        return true;
    }
    else
    {
        bool condi1 = root1->data == root2->data;
        bool condi2 = areidentical(root1->left, root2->left);
        bool condi3 = areidentical(root1->right, root2->right);

        if (condi1 && condi2 && condi3)
        {
            return true;
        }

        return false;
    }
}
int main()
{
    Node *root1 = new Node(12);
    root1->left = new Node(9);
    root1->right = new Node(15);
    root1->left->left = new Node(5);
    root1->left->right = new Node(20);

    Node *root2 = new Node(12);
    root2->left = new Node(9);
    root2->right = new Node(15);
    root2->left->left = new Node(5);
    root2->left->right = new Node(20);

    cout << areidentical(root1, root2);
    return 0;
}