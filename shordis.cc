#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node *left;
    Node *right;
    Node(int value)
    {
        data = value;
        left = NULL;
        right = NULL;
    }
};
int dis(Node *root, int n, int distance)
{
    if (root == NULL)
        return -1;
    if (root->data == n)
        return distance;
    int l=dis(root->left, n, distance + 1);
    if(l!=-1)
    return l;  // if left exist then we will get the final distance of left side
    return dis(root->right, n, distance + 1);
}
int shortdis(Node *root, int P, int Q)
{
    if (root == NULL)
        return 0;
    int d1 = dis(root, P, 0);
    int d2 = dis(root, Q, 0);
    return d1 + d2;
}

Node *LCA(Node *root, int P, int Q)
{
    if (root == NULL)
        return NULL;
    if (root->data == P || root->data == Q)
        return root;
    Node *Ln = LCA(root->left, P, Q);
    Node *Rn = LCA(root->right, P, Q);
    if (Ln != NULL && Rn != NULL)
        return root;
    else if (Ln != NULL)
        return Ln;
    else
        return Rn;
}

int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->right = new Node(6);
    root->right->left = new Node(7);
    LCA(root, 2, 5);
    cout << shortdis(root, 2, 5);
    // inorder(root);
    return 0;
}