#include <stdio.h>
#include <stdlib.h>
struct tree
{
    int data;
    struct tree *left;
    struct tree *right;
};
void inorder(struct tree *node)
{
    if (node == NULL)
        return;
    inorder(node->left);
    printf("%d", node->data);
    inorder(node->right);
}
void preorder(struct tree *node)
{
    if (node == NULL)
        return;
    printf("%d", node->data);
    preorder(node->left);
    preorder(node->right);
}
void postorder(struct tree *node)
{
    if (node == NULL)
        return;
    postorder(node->left);
    postorder(node->right);
    printf("%d        ", node->data);
}
struct tree* create()
{
    struct tree*newnode;
    int x;
    newnode=(struct tree*) malloc (sizeof(struct tree));
    printf("enter the data(-1 for exit)");
    scanf("%d",&x);
    if(x==-1)
    {
        return 0;
    }
    newnode->data=x;
    printf("enter the left child of %d",x);
    newnode->left=create();
    printf("enter the right child of %d",x);
    newnode->right=create();
    return newnode;
}
int main()
{
    struct tree*root;
    root=create();
    printf("\ninorder traversal is :\n");
    inorder(root);
    printf("\npreorder traversal is :\n");
    preorder(root);
    printf("\npostorder traversal is :\n");
    postorder(root);
    return 0;

}