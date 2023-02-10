#include <stdio.h>
#include <stdlib.h>
typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} N;
N *creat()
{
    int x;
    N *new;
    new = (N *)malloc(sizeof(N));
    printf("enter data(-1 for no node)\n");
    scanf("%d", &x);
    if (x == -1)
    {
        return 0;
    }
    new->data = x;
    printf("enter left child of %d", x);
    new->left = creat();
    printf("enter right child of %d", x);
    new->right = creat();
    return new;
}
void preorder(N *root)
{
    if (root == 0)
    {
        return;
    }
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}
void inorder(N *root)
{
    if (root == 0)
    {
        return;
    }
    inorder(root->left);
    printf("%d ", root->data);

    inorder(root->right);
}
void postorder(N *root)
{
    if (root == 0)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}
int main()
{
    struct node *root;
    root = 0;
    root = creat();
    printf("inorder traverasal is:\n");
    inorder(root);
    printf("\n");
    printf("preorder traverasal is:\n");
    preorder(root);
    printf("\n");
    printf("postorder traverasal is:\n");
    postorder(root);
    printf("\n");
    return 0;
}