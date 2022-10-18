#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *right;
    node *left;
    node *next;
    node(int i)
    {
        data = i;
        right = 0;
        left = 0;
        next = 0;
    }
};
node *create()
{
    cout << "Enter data and 0 for exit : ";
    int i;
    cin >> i;
    if (!i)
    {
        return 0;
    }
    node *n = new node(i);
    cout << "Creating left node of node " << i << " : " << endl;
    n->left = create();
    cout << "Creating right node of node " << i << " : " << endl;
    n->right = create();
    return n;
}
void inorder(node *root)
{
    if (root == 0)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
void levelorder(node *root)
{
    if (root == 0)
    {
        cout << "The tree is empty" << endl;
        return;
    }
    queue<node *> q;
    q.push(root);
    q.push(0);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp != 0)
        {
            cout << temp->data << " ";
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
        else
        {
            cout << endl;
            if (!q.empty())
                q.push(0);
        }
    }
}
int findmaxbyrecur(node *root)
{
    int ro, l, r, max = INT_MIN;
    if (root != 0)
    {
        ro = root->data;
        l = findmaxbyrecur(root->left);
        r = findmaxbyrecur(root->right);
        if (l > r)
        {
            max = l;
        }
        else
            max = r;
        if (ro > max)
            max = ro;
    }
    return max;
}
int findmaxbyiteration(node *root)
{
    int max = INT_MIN;
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp->data > max)
            max = temp->data;
        if (temp->left)
            q.push(temp->left);
        if (temp->right)
            q.push(temp->right);
    }
    return max;
}
int searchtreebyrecursion(node *root, int key)
{
    int temp = 0;
    if (root == 0)
        return 0;
    else if (root->data == key)
    {
        return 1;
    }
    else
    {
        temp = searchtreebyrecursion(root->left, key); // first check in left subtree
        if (temp != 0)
        {
            return temp; // if it find then return true else
        }
        return searchtreebyrecursion(root->right, key); // search in right tree
    }
}
int searchtreebyiteration(node *root, int key)
{
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp->data == key)
        {
            return 1;
        }
        if (temp->left)
            q.push(temp->left);
        if (temp->right)
            q.push(temp->right);
    }
    return 0;
}
node *insertionbyrecursion(node *root, int data)
{
    if (root == 0)
    {
        node *n = new node(data);
        root = n;
        return root;
    }
    if (root->left)
    {
        if (root->right)
        {
            root->left = insertionbyrecursion(root->left, data);
        }
        else
        {
            root->right = insertionbyrecursion(root->right, data);
        }
    }
    else
    {
        root->left = insertionbyrecursion(root->left, data);
    }
}
void insertionbyiteration(node *&root, int data)
{
    queue<node *> q;
    node *n = new node(data);
    if (root == 0)
    {
        root = n;
        return;
    }
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp->left)
            q.push(temp->left);
        else
        {
            temp->left = n;
            return;
        }
        if (temp->right)
            q.push(temp->right);
        else
        {
            temp->right = n;
            return;
        }
    }
}
int sizebyrecursion(node *root)
{
    if (root == 0)
    {
        return 0;
    }
    return (sizebyrecursion(root->left) + 1 + sizebyrecursion(root->right));
}
int sizebyiteration(node *root)
{
    if (!root)
    {
        return 0;
    }
    int count = 0;
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        count++;
        if (temp->left)
            q.push(temp->left);
        if (temp->right)
            q.push(temp->right);
    }
    return count;
}
int height(node *root)
{
    if (root == 0)
    {
        return 0;
    }
    int lefth = height(root->left);
    int righth = height(root->right);
    if (lefth > righth)
        return (lefth + 1);
    else
        return (righth + 1);
}
node *deepestnodeintree(node *root)
{
    if (root == 0)
        return 0;
    queue<node *> q;
    q.push(root);
    node *temp;

    while (!q.empty())
    {
        temp = q.front();
        q.pop();
        if (temp->left)
            q.push(temp->left);
        if (temp->right)
            q.push(temp->right);
    }
    return temp;
}
void deleteDeepest(node *&root , node *d)
{
    queue<node*> q;
    q.push(root);
    while(!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if(temp->left)
        {
            if(temp->left == d)
            {
                delete temp->left;
                temp->left = 0;
                return;
            }
            else
            q.push(temp->left);
        }
        if(temp->right)
        {
            if(temp->right == d)
            {
                delete temp->right;
                temp->right = 0;
                return;
            }
            else
            q.push(temp->right);
        }
    }
}
node *deletenode(node *root, int key)
{
    if (root == 0)
        return root;
    else if(root->left == 0 && root->right == 0)
    {
        if(root->data == key)
        return 0;
        else 
        return root;
    }
    queue<node*> q;
    q.push(root);
    node *temp;
    node *del = 0;
    while(!q.empty())
    {
        temp = q.front();
        q.pop();
        if(temp->data == key)
        {
            del = temp;
        } 
        if(temp->left)
        q.push(temp->left);
        if(temp->right)
        q.push(temp->right);       
    }
    if(del != 0)
    {
        int x = temp->data;
        del->data = x;
        deleteDeepest(root, temp);
    }
    return root;
}
int leavesnodecount(node *root)
{
    if (!root)
        return 0;
    int count = 0;
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (!temp->left && !temp->right)
        {
            count++;
        }
        else
        {
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
    }
    return count;
}
bool structurallyidentical(node *root1, node *root2)
{
    if (root1 == 0 && root2 == 0)
    {
        return true;
    }
    else if (root1 == 0 || root2 == 0)
    {
        return false;
    }
    return ((root1->data == root2->data) && structurallyidentical(root1->left, root2->left) && structurallyidentical(root1->right, root2->right));
}
int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}
int diameteroftree(node *root)
{
    if (root == 0)
    {
        return 0;
    }
    int l = height(root->left);
    int r = height(root->right);
    int ltree = diameteroftree(root->left);
    int rtree = diameteroftree(root->right);
    return max(l + r + 1, max(ltree, rtree));
}
int findTheLevelWithMaxSum(node *root)
{
    if (root == 0)
    {
        return 0;
    }
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    int maxlevel = 0, level = 0, sum = 0, maxsum = 0;
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp == NULL)
        {
            if (sum > maxsum)
            {
                maxsum = sum;
                maxlevel = level;
            }
            sum = 0;
            if (!q.empty())
            {
                q.push(NULL);
                level++;
            }
        }
        else
        {
            sum += temp->data;
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
    }
    return maxlevel;
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << i[arr] << " ";
    }
    cout << endl;
}

void printpath(node *root, int path[], int pathlen)
{
    if (root == 0)
    {
        return;
    }
    path[pathlen] = root->data;
    pathlen++;
    if (root->left == 0 && root->right == 0)
    {
        print(path, pathlen);
        return;
    }
    else
    {
        printpath(root->left, path, pathlen);
        printpath(root->right, path, pathlen);
    }
}
bool hassum(node *root, int sum)
{
    if (root == 0)
    {
        return (sum == 0);
    }
    else
    {
        int remainsum = sum - root->data;
        if ((root->left && root->right) || (!root->left && !root->right))
        {
            return (hassum(root->left, remainsum) || hassum(root->right, remainsum));
        }
        else if (root->left)
            return hassum(root->left, remainsum);
        else
            return hassum(root->right, remainsum);
    }
}
bool hasPathSum(node* root, int targetSum) {
        if (!root)
            return false;
        if (!root->left && !root->right)
            return targetSum == root->data;
        
        return hasPathSum(root->left, targetSum - root->data) || hasPathSum(root->right, targetSum - root->data);
    }
node *mirrortree(node *root)
{
    if (root)
    {
        mirrortree(root->left);
        mirrortree(root->right);
        node *temp = root->left;
        root->left = root->right;
        root->right = temp;
    }
    return root;
}
node *LCA(node *root, int a, int b)
{
    if (root == 0)
        return 0;
    if (root->data == a || root->data == b)
    {
        return root;
    }
    node *left = LCA(root->left, a, b);
    node *right = LCA(root->right, a, b);
    if (!left)
        return right;
    if (!right)
        return left;
    return root;
}
int search(int *in, int start, int end, int key)
{
    for (int i = start; i < end; i++)
    {
        if (in[i] == key)
            return i;
    }
}
node *treebyInPreorder(int *in, int *pre, int start, int end)
{
    static int pindex = 0;
    if (start > end)
        return 0;
    node *n = new node(pre[pindex]);
    pindex++;
    if (start == end)
        return n;

    int p = search(in, start, end, n->data);
    n->left = treebyInPreorder(in, pre, start, p - 1);
    n->right = treebyInPreorder(in, pre, p + 1, end);
    return n;
}
//new apparoch for constructing binary tree from inorder and postorder
node *buildTree(int pre[],int in[],int n)
{
    int i = 0;
    if(n == 0)
    return 0;
    node *tree = new node(pre[0]);
    for(;i<n;i++)
    {
        if(tree->data == in[i])
        break;
    }
    tree->left = buildTree(pre+1,in,i);
    tree->right = buildTree(pre+i+1,in+i+1,n-i-1);
    return tree;
}
void zigzagtraversal(node *root)
{
    if (root == 0)
        return;
    stack<node *> clevel, nlevel; // clevel :- currentlevel ; nlevel :- nextlevel
    int LtoR = 1;
    clevel.push(root);
    while (!clevel.empty())
    {
        node *temp = clevel.top();
        clevel.pop();
        if (temp)
        {
            cout << temp->data << " ";
            if (LtoR)
            {
                if (temp->left)
                    nlevel.push(temp->left);
                if (temp->right)
                    nlevel.push(temp->right);
            }
            else
            {
                if (temp->right)
                    nlevel.push(temp->right);
                if (temp->left)
                    nlevel.push(temp->left);
            }
            if (clevel.empty())
            {
                LtoR = 1 - LtoR;
                stack<node *> temp = clevel;
                clevel = nlevel;
                nlevel = temp;
            }
        }
    }
    cout << endl;
}
// program for populating next right pointer
void Fillnextsibling(node *root)
{
    if (root == 0)
        return;
    queue<node *> q;
    q.push(root);
    q.push(0);
    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();
        if (temp == 0)
        {
            if (!q.empty())
                q.push(0);
        }
        else
        {
            temp->next = q.front();
            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
    }
}
node *fillnextsibling(node *root)
{
    if (root == 0)
        return 0;
    if (root->left)
        root->left->next = root->right;
    if (root->right)
        root->right->next = (root->next) ? root->next->left : 0;
    fillnextsibling(root->left);
    fillnextsibling(root->right);
}
node *deletehalfnode(node *r)
{
    if (r == 0)
        return r;
    r->left = deletehalfnode(r->left);
    r->right = deletehalfnode(r->right);
    if (!r->left && !r->right)
        return r;
    else if (r->left == 0)
    {
        node *temp = r->right;
        delete r;
        return temp;
    }
    else if (r->right == 0)
    {
        node *temp = r->left;
        delete r;
        return temp;
    }
    else
        return r;
}
int main()
{
    int in[] = {3,2,1,4,5};
    int pre[] = {1,2,3,4,5};
    node *root = treebyInPreorder(in, pre, 0, 4);
    levelorder(root);
    root = deletehalfnode(root);
    levelorder(root);
    return 0;
}
