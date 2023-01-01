#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node  * left;
    struct node  *right;
};
struct node *create()
{
    struct node *newnode;
    newnode = new struct node;
    int x ;
        cout << "enter the value of node(0 for exit)";
    cin >> x;
    if (x == 0)
        return 0;
    newnode->data = x;
    cout << " left child of " << x ;
    newnode->left = create();
    cout << "enter the right child of " << x;
    newnode->right = create();
    return newnode;
}
void inorder(struct node *root)
{
    if (root == 0)
    {
        return;
    }
    inorder(root->left);
    cout << root->data;
    inorder(root->right);
}
void preorder(struct node *root)
{
    if (root == 0)
    {
        return;
    }
    cout << root->data;
    preorder(root->left);
    preorder(root->right);
}
void postorder(struct node *root)
{
    if (root == 0)
    {
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout << root->data;
}
int main()
{
    struct node *root;
    root = create();
    int n=1;
    while(n)
    {
    cout << "enter your choice " << endl
         << "1:inorder traversal \n 2:preorder traversal\n 3:postorder traversal\n";
    cin >> n;
    switch (n)
    {
    case 1:
        cout << endl;
        inorder(root);
        break;
    
    case 2:
        cout << endl;
        preorder(root);
        break;
    case 3:
        cout << endl;
        postorder(root);
        break;
    }
}

}