// Program for recursive cretaion of Binary Tree and Traversals
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

// Inorder Traversal
void inorder(struct node *root)
{
    if (root == 0)
    {
        return;
    }
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

// Preorder Traversal
void preorder(struct node *root)
{
    if (root == 0)
    {
        return;
    }
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

//Postorder traversal
void postorder(struct node *root)
{
    if(root == 0)
    {
        return;
    }
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}
int main()
{
    struct node *root = create();
    printf("The Inorder Traversal : ");
    inorder(root);
    printf("\nThe Preorder Traversal : ");
    preorder(root);
    printf("\nThe Postorder Traversal : ");
    postorder(root);
    return 0;
}