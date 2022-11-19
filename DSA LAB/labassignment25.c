#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
// Function for creating binary tree
struct node *create()
{
    int val;
    printf("Enter the value to be inserted in the node and zero for exit :");
    scanf("%d", &val);
    if (val == 0)
    {
        return NULL;
    }
    struct node *n = (struct node *)malloc(sizeof(struct node));
    n->data = val;
    printf("Creating left node of %d \n", val);
    n->left = create();
    printf("Creating right node of %d \n", val);
    n->right = create();
}

//Height of the tree
int height(struct node *root)
{
    if(root == 0)
        return 0;
    int left = height(root->left);
    int right = height(root->right);
    return (left>right)?left+1:right+1;
}
int main()
{
    struct node *root = create();
    int h = height(root);
    printf("The height of the tree is %d : ",h);
    return 0;
}