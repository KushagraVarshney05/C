#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct node{
    int data;
    struct node* left,*right;
};
struct node* create()
{
    struct node*newnode;
    int x;
    newnode=(struct node*) malloc (sizeof(struct node));
    printf("enter the data(-1 for exit)");
    scanf("%d",&x);
    if(x==-1)
    {
        return 0;
    }
    printf("enter the left child of %d",x);
    newnode->left=create();
    printf("enter the right child of %d",x);
    newnode->right=create();
    return newnode;
}
void traversal(struct node* a)
{
    if(a==0)
    return;
    printf("%d \n",a->data);
    traversal(a->left);
    traversal(a->right);


}
int main(){
    struct node* root;
    root=create();
    traversal(root);
}